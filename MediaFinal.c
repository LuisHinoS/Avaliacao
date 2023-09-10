#include <ncurses.h>

int main() {
    initscr();

    float nota1, nota2;

    printw("Por favor, digite sua primeira nota: ");
    scanw("%f", &nota1);

    printw("Por favor, digite sua segunda nota: ");
    scanw("%f", &nota2);

    float media = (nota1 + nota2) / 2;

    printw("Sua media final é: %.2f", media);

    getch();

    endwin();

    return 0;