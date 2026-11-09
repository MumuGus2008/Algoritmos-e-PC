#include <stdio.h>
int main() {
    int i, quantidade;
    int positivos = 0, negativos = 0;
    float numero, maior;
    printf("Digite a quantidade de valores: ");
    scanf("%d", &quantidade);
    for (i = 1; i <= quantidade; i++) {
        printf("Digite um numero: ");
        scanf("%f", &numero);
        if (i == 1) {
            maior = numero;
        }
        if (numero > maior) {
            maior = numero;
        }
        if (numero > 0) {
            positivos++;
        } else if (numero < 0) {
            negativos++;
        }
    }
    printf("\nQuantidade de positivos: %d\n", positivos);
    printf("Quantidade de negativos: %d\n", negativos);
    printf("Maior valor informado: %.2f\n", maior);
    return 0;
}
