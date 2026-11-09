
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");

    FILE *arquivo;
    int quantidade, i;
    char dia[4];
    float consumo;

    printf("Quantos registros deseja cadastrar? ");
    scanf("%d", &quantidade);

    arquivo = fopen("consumo.txt", "w");

    if (arquivo == NULL) {
        printf("Erro ao criar o arquivo!\n");
        return 1;
    }

    for (i = 1; i <= quantidade; i++) {
        printf("Dia: ");
        scanf("%3s", dia);

        printf("Consumo: ");
        scanf("%f", &consumo);

        fprintf(arquivo, "%s %.2f\n", dia, consumo);
    }

    fclose(arquivo);

    printf("\nDados salvos no arquivo consumo.txt!\n");

    return 0;
}
