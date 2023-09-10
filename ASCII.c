#include <ncurses.h>

int main() {
    initscr();

    char caracter;

    printw("Por favor, digite um caractere: ");
    scanw("%c", &caracter);

    int asciiDecimal = (int)caracter;
    int asciiHexadecimal = asciiDecimal;

    printw("O código ASCII do caractere '%c' em decimal e: %d\n", caracter, asciiDecimal);
    printw("O código ASCII do caractere '%c' em hexadecimal e: 0x%X", caracter, asciiHexadecimal);

    getch();

    endwin();

    return 0;
}