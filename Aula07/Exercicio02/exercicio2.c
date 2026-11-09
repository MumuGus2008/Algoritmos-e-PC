#include <stdio.h>
int main() {
    int i;
    float venda, total = 0;
    for (i = 1; i <= 7; i++) {
        printf("Digite o valor das vendas do dia %d: ", i);
        scanf("%f", &venda);
        total += venda;
    }
    printf("\nTotal vendido na semana: R$ %.2f\n", total);
    return 0;
}
