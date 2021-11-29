#include <glut.cc>

#include "ansi16.h"
#include "avr.h"
#include "display.cc"
#include "disasm.cc"
#include "vm.cc"

// Обработчик окна при вызове таймера
void display()  {

    cls(dac(0));
    print(2, 1, "AVR Emulator Win32", dac(15));

    update();
}

int main(int argc, char* argv[]) { 

    assign();
    return screen(); 
}

