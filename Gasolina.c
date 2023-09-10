#include <ncurses.h>

int main() {
    initscr();

    float distancia, litros;

    printw("Por favor, digite a distância percorrida em quilômetros: ");
    scanw("%f", &distancia);

    printw("Por favor, digite o total de litros de combustível gasto: ");
    scanw("%f", &litros);

    float consumoMedio = distancia / litros;

    printw("O consumo médio do automóvel e: %.2f km/l", consumoMedio);

    getch();

    endwin();

    return 0;
}