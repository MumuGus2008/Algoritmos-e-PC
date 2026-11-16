#include <stdio.h>

int main() {
    const char *meses[] = {"jan", "fev", "mar", "abr", "mai", "jun",
                           "jul", "ago", "set", "out", "nov", "dez"};
    const char *operadoras[] = {"Vivo", "Claro", "TIM"};

    int vendas[3][12] = {
        {120, 135, 150, 140, 160, 175, 180, 170, 165, 190, 200, 210},
        {110, 125, 145, 150, 155, 160, 170, 180, 175, 185, 195, 205},
        {100, 115, 130, 125, 140, 150, 160, 155, 170, 175, 185, 190}
    };

    int totalOperadora[3] = {0, 0, 0};
    int totalGeral = 0;
    int maiorTotalMes = 0;
    int melhorMes = 0;
    int melhorOperadora = 0;
    int i, j;

    /* Soma as vendas de cada operadora (linhas da matriz). */
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 12; j++) {
            totalOperadora[i] += vendas[i][j];
        }
        totalGeral += totalOperadora[i];
    }

    /* Compara o total vendido em cada mes (colunas da matriz). */
    for (j = 0; j < 12; j++) {
        int totalMes = 0;
        for (i = 0; i < 3; i++) {
            totalMes += vendas[i][j];
        }
        if (j == 0 || totalMes > maiorTotalMes) {
            maiorTotalMes = totalMes;
            melhorMes = j;
        }
    }

    /* Encontra a operadora com maior total anual. */
    for (i = 1; i < 3; i++) {
        if (totalOperadora[i] > totalOperadora[melhorOperadora]) {
            melhorOperadora = i;
        }
    }

    /* Arredondamento para cima sem usar bibliotecas adicionais.
       Para inteiros positivos, (soma + divisor - 1) / divisor. */
    printf("========================================\n");
    printf("       RELATORIO ANUAL DE VENDAS\n");
    printf("========================================\n");
    printf("Media mensal geral: %d chips\n", (totalGeral + 35) / 36);

    for (i = 0; i < 3; i++) {
        printf("Media da %s: %d chips\n", operadoras[i],
               (totalOperadora[i] + 11) / 12);
    }

    printf("Mes com maior media de vendas: %s - %d chips no total (media: %d chips)\n",
           meses[melhorMes], maiorTotalMes, (maiorTotalMes + 2) / 3);
    printf("Operadora com maior venda anual: %s - %d chips no ano (media: %d chips)\n",
           operadoras[melhorOperadora], totalOperadora[melhorOperadora],
           (totalOperadora[melhorOperadora] + 11) / 12);

    return 0;
}
