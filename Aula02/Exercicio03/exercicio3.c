#include <stdio.h>

int main() {
    float massa, agua;

    printf("Digite a massa corporal (em kg):\n");
    scanf("%f", &massa);

    agua = (massa * 35) / 1000;

    printf("Quantidade aproximada de agua recomendada por dia: %.1f litros\n", agua);

    return 0;
}
