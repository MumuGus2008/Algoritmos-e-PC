#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *arquivo;
    char linha[100];

    // Modo "r" para leitura
    arquivo = fopen("tabuada.txt", "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo 'tabuada.txt'! Certifique-se de ter executado o Exercicio 1 antes.\n");
        return 1;
    }

    printf("--- Conteudo do Arquivo tabuada.txt ---\n");
    // Le linha por linha ate encontrar o final do arquivo (NULL)
    while (fgets(linha, sizeof(linha), arquivo) != NULL) {
        printf("%s", linha);
    }

    fclose(arquivo);
    return 0;
}
