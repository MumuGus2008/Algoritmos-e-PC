#include <stdio.h>

int main() {
    float semanas, meses;

    printf("Qual a quantidade de semanas de gestacao?\n");
    scanf("%f", &semanas);

    meses = (semanas * 7) / 30;

    printf("Tempo de gestacao aproximado: %.1f meses\n", meses);

    return 0;
}
