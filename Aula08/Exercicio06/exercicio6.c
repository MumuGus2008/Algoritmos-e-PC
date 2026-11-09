#include <stdio.h>
#include <locale.h>
int main() {
    int vendas[3][3];
    int i, j;
    int total;
    int totalGeral = 0;
    const char *produtos[] = {
        "Cafe",
        "Coxinha",
        "Bolo"
    };
    const char *dias[] = {
        "Seg",
        "Ter",
        "Qua"
    };
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Digite a quantidade de %s na %s: ",
                   produtos[i], dias[j]);
            scanf("%d", &vendas[i][j]);
        }
    }
    printf("\n");
    for (i = 0; i < 3; i++) {
        total = 0;
        for (j = 0; j < 3; j++) {
            total = total + vendas[i][j];
        }
        printf("%s: %d unidades\n", produtos[i], total);
        totalGeral = totalGeral + total;
    }
    printf("Total geral: %d unidades\n", totalGeral);
    return 0;
}
