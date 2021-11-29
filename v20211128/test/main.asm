
        .org        0
        
L1:     ldi         r16, 0xff
        ldi         r17, 0x11
        add         r16, r17
        ldi         r16, 0x12
        ldi         r17, 0x44
        rjmp        L1
