#include <stdio.h>
#include <stdlib.h>

#include "glut.h"
#include "ansi16.h"
#include "avr.h"
#include "display.cc"
#include "disasm.cc"
#include "vm.cc"

// Обработчик окна при вызове таймера
void display()  {
    
    if (cpu_halt) {        
    
        disassembly();   
        
    } else {       
        
        // 20 x N IPS
        for (int i = 0; i < 5000; i++) {            
            step();
            if (cpu_halt) { pc--; break; }
        }
    }
    
    displayout();
    update();
}

int main(int argc, char* argv[]) { 

    screen();
    assign();
    parsearg(argc, argv);    
    glutMainLoop();
    return 0;
}

