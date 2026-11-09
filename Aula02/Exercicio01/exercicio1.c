#include <stdio.h>

int main() {
    float comprimento, largura, perimetro, area;

    printf("Qual o comprimento do jardim (m)?\n");
    scanf("%f", &comprimento);

    printf("Qual a largura do jardim (m)?\n");
    scanf("%f", &largura);

    perimetro = 2 * (comprimento + largura);
    area = comprimento * largura;

    printf("Perimetro do jardim: %.2f m\n", perimetro);
    printf("Area do jardim: %.2f m2\n", area);

    return 0;
}
