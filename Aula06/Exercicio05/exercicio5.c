#include <stdio.h>
int main() {
    int opcao;
    float total = 0;
    do {
        printf("Digite uma opcao: ");
        scanf("%d", &opcao);
        switch (opcao) {
            case 1:
                total += 18.00;
                printf("Subtotal: R$ %.2f\n", total);
                break;
            case 2:
                total += 12.00;
                printf("Subtotal: R$ %.2f\n", total);
                break;
            case 3:
                total += 7.00;
                printf("Subtotal: R$ %.2f\n", total);
                break;
            case 0:
                break;
            default:
                printf("Opcao invalida!\n");
        }
    } while (opcao != 0);
    printf("Total do pedido: R$ %.2f\n", total);
    return 0;
}
