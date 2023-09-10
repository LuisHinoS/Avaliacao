#include <ncurses.h>

int main() {
    initscr();

    float fahrenheit, celsius;

    printw("Por favor, digite a temperatura em graus Fahrenheit: ");
    scanw("%f", &fahrenheit);

    celsius = (fahrenheit - 32) * (5.0 / 9.0);

    printw("A temperatura em graus Celsius e: %.2f°C", celsius);

    getch();

    endwin();

    return 0;
}
