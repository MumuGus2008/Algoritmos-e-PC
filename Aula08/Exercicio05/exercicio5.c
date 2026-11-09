#include <stdio.h>
#include <locale.h>
int main() {
    int vendas[3][4];
    int i, j;
    int total;
    int totalGeral = 0;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            printf("Digite a quantidade do %d produto no %d dia: ",
                   i + 1, j + 1);
            scanf("%d", &vendas[i][j]);
        }
    }
    printf("\n");
    for (i = 0; i < 3; i++) {
        total = 0;
        for (j = 0; j < 4; j++) {
            total = total + vendas[i][j];
        }
        printf("Produto %d: %d unidades\n", i + 1, total);
        totalGeral = totalGeral + total;
    }
    printf("Total geral: %d unidades\n", totalGeral);
    return 0;
}
