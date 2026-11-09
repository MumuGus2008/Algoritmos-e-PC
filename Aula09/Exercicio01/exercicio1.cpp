#include<stdio.h>
#include<locale.h>


#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");

    FILE *arquivo;
    int numero;
    int i;
    int resultado;

    arquivo = fopen("tabuada.txt", "w");

    if (arquivo == NULL) {
        printf("Erro ao criar o arquivo!\n");
        return 1;
    }

    printf("Digite um numero para ver a tabuada: ");
    scanf("%d", &numero);

    printf("\nTabuada do %d:\n\n", numero);
    fprintf(arquivo, "Tabuada do %d\n\n", numero);

    for (i = 1; i <= 10; i++) {
        resultado = numero * i;

        printf("%d x %d = %d\n", numero, i, resultado);

        fprintf(arquivo, "%d x %d = %d\n",
                numero, i, resultado);
    }

    fclose(arquivo);

    printf("\nResultado salvo no arquivo tabuada.txt!\n");

    return 0;
}
