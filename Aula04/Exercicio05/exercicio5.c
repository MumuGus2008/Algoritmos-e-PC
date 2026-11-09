#include <stdio.h>
int main() {
    float valorCompra, valorFinal, valorParcela;
    int parcelas, juros;
    printf("Entre com o valor da compra: ");
    scanf("%f", &valorCompra);
    printf("Entre com a quantidade de parcelas: ");
    scanf("%d", &parcelas);
    switch (parcelas) {
        case 2:
            juros = 3;
            break;
        case 4:
            juros = 7;
            break;
        case 6:
            juros = 9;
            break;
        case 8:
            juros = 12;
            break;
        default:
            juros = -1;
    }
    if (juros == -1) {
        printf("Numero de parcelas incorreto\n");
    }
    else {
        valorFinal = valorCompra + (valorCompra * juros / 100);
        valorParcela = valorFinal / parcelas;
        printf("Valor total financiado: R$ %.2f\n", valorFinal);
        printf("Valor de cada parcela: R$ %.2f\n", valorParcela);
    }
    return 0;
}
