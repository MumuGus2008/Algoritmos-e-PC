#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *arquivo;
    char rgm[20];
    float nota;

    int total_estudantes = 0;
    int aprovados = 0;
    float soma_notas = 0.0;
    float maior_nota = -1.0;

    arquivo = fopen("notas.txt", "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo 'notas.txt'!\n");
        printf("Dica: Crie um arquivo 'notas.txt' na pasta do projeto contendo dados no formato: RGM NOTA\n");
        return 1;
    }

    // Processamento linha a linha usando fscanf
    while (fscanf(arquivo, "%19s %f", rgm, &nota) == 2) {
        total_estudantes++;
        soma_notas += nota;

        if (total_estudantes == 1 || nota > maior_nota) {
            maior_nota = nota;
        }

        if (nota >= 6.0) {
            aprovados++;
        }
    }

    fclose(arquivo);

    if (total_estudantes > 0) {
        printf("Estudantes: %d\n", total_estudantes);
        printf("Media da turma: %.2f\n", soma_notas / total_estudantes);
        printf("Maior nota: %.2f\n", maior_nota);
        printf("Quantidade de alunos aprovados: %d\n", aprovados);
    } else {
        printf("O arquivo 'notas.txt' esta vazio ou nao possui registros validos.\n");
    }

    return 0;
}
