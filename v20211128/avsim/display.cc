// ---------------------------------------------------------------------
// Процедуры для работы с выводом текста
// ---------------------------------------------------------------------

// Очистить экран в цвет
void cls(long color) {

    for (int i = 0; i < app_height; i++)
    for (int j = 0; j < app_width; j++)
        pset(j, i, color);
}

// Печать на экране Char
void print_char(int col, int row, unsigned char ch, long cl) {

    col *= 8;
    row *= 16;

    for (int i = 0; i < 16; i++) {

        unsigned char hl = ansi16[ch][i];
        for (int j = 0; j < 8; j++) {
            if (hl & (1<<(7-j)))
                pset(j + col, i + row, cl);
        }
    }
}

// Печать строки
void print(int col, int row, const char* s, long cl) {

    int i = 0;
    while (s[i]) {
        
        print_char(col, row, s[i], cl); 
        col++; 
        i++; 
    }
}
