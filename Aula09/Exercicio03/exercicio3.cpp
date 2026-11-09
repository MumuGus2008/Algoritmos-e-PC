
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");

    FILE *arquivo;
    int quantidade, i;
    int rgm;
    float nota;

    printf("Quantos alunos deseja cadastrar? ");
    scanf("%d", &quantidade);

    arquivo = fopen("alunos.txt", "w");

    if (arquivo == NULL) {
        printf("Erro ao criar o arquivo!\n");
        return 1;
    }

    for (i = 1; i <= quantidade; i++) {
        printf("\nDigite o RGM do aluno: ");
        scanf("%d", &rgm);

        printf("Digite a nota do aluno: ");
        scanf("%f", &nota);

        fprintf(arquivo, "%d %.2f\n", rgm, nota);
    }

    fclose(arquivo);

    printf("\nDados salvos no arquivo alunos.txt!\n");

    return 0;
}
