
        .org        0
        
        eor         r0, r0
        ldi         r16, 0x02
        eor         r30, r30
        ldi         r31, 0x5b
L0:     st          -Z, r16
        inc         r16
        cpi         r31, 0x3f
        brne        L0
        break
; -----------------------------------
L1:     ldi         r16, 0xff
        ldi         r17, 0x11
        add         r16, r17
        ldi         r16, 0x12
        ldi         r17, 0x44
        rjmp        L1
