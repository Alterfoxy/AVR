module avr
(
    input       wire        clock,
    input       wire        locked,         // =1 процессор в работе
    input       wire [15:0] pdata,          // Программные данные из "флешки"
    input       wire [ 7:0] rdata,          // RAM-data, входящие данные из памяти
    output      reg  [15:0] pc,             // Указатель на программу
    output      wire [15:0] address,        // Указатель на память
    output      reg  [ 7:0] dataw,          // Данные для записи в память
    output      reg         we              // Разрешение записи
);

initial begin we = 0; dataw = 0; pc = 0; tstate = 0; end

// -----------------------------------------------------------------------------
reg [15:0]  ir;
reg [15:0]  opcode;
reg [ 1:0]  tstate;
reg [ 7:0]  sreg = 0;
            // ITHSVNZC
            // 76543210
// -----------------------------------------------------------------------------
reg [ 7:0]  regs[32];
// -----------------------------------------------------------------------------
wire [4:0]  Rdi = ir[8:4];
wire [4:0]  Rri = {ir[9], ir[3:0]};
wire [7:0]  Rd  = regs[Rdi];
wire [7:0]  Rr  = regs[Rri];
// -----------------------------------------------------------------------------

// Инструкция ADD d8, r8
// =====================
wire [8:0]  add8  = Rd + Rr;
wire        add8v = (Rd[7] & Rr[7] & !add8[7]) | (!Rd[7] & !Rr[7] & add8[7]);

wire [7:0]  add8_sreg = {
    /* I */ sreg[7],
    /* T */ sreg[6],
    /* H */ Rd[4]^Rr[4]^add8[4],
    /* S */ add8v ^ add8[7],
    /* V */ add8v,
    /* N */ add8[7],
    /* Z */ add8[7:0] == 0,
    /* C */ add8[8]
};

// -----------------------------------------------------------------------------
wire [7:0] __r16 = regs[16];
wire [7:0] __r17 = regs[17];
// -----------------------------------------------------------------------------


always @(posedge clock) if (locked) begin

    ir <= pdata;
    pc <= pc + 1;

    // Запрос нового PC и запись старого IR
    if (tstate == 0) begin tstate <= 1; end
    // Декодирование инструкции
    else casex (ir)

        // 1T LDI r16..31, K
        16'b1110_xxxx_xxxx_xxxx: regs[ {1'b1, ir[7:4]} ] <= {ir[11:8], ir[3:0]};

        // 1T ADD Rd, Rr
        16'b0000_11xx_xxxx_xxxx: begin

            regs[ Rdi ] <= add8[7:0];
            sreg        <= add8_sreg;

        end

        // 1T RJMP k
        16'b1100_xxxx_xxxx_xxxx: begin

            pc     <= pc + {{4{ir[11]}}, ir[11:0]};
            tstate <= 0;

        end

    endcase

end

endmodule
