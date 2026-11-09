#include <stdio.h>
#include <locale.h>
#define MAX_ALUNOS 10
typedef struct {
    int rgm;
    float nota1;
    float nota2;
    float media;
} Aluno;
void calcular_media(Aluno *aluno) {
    aluno->media = (aluno->nota1 + aluno->nota2) / 2.0;
}
void cadastrar_aluno(Aluno alunos[], int *quantidade) {
    if (*quantidade >= MAX_ALUNOS) {
        printf("Limite de 10 alunos atingido.\n");
        return;
    }
    printf("\nRGM: ");
    scanf("%d", &alunos[*quantidade].rgm);
    printf("Nota 1: ");
    scanf("%f", &alunos[*quantidade].nota1);
    printf("Nota 2: ");
    scanf("%f", &alunos[*quantidade].nota2);
    calcular_media(&alunos[*quantidade]);
    (*quantidade)++;
    printf("Aluno cadastrado com sucesso!\n");
}
void consultar_aluno(Aluno alunos[], int quantidade) {
    int rgm, i;
    printf("Digite o RGM para consulta: ");
    scanf("%d", &rgm);
    for (i = 0; i < quantidade; i++) {
        if (alunos[i].rgm == rgm) {
            printf("RGM: %d\n", alunos[i].rgm);
            printf("Média: %.2f\n", alunos[i].media);
            return;
        }
    }
    printf("Aluno não encontrado.\n");
}
void listar_alunos(Aluno alunos[], int quantidade) {
    int i;
    if (quantidade == 0) {
        printf("Nenhum aluno cadastrado.\n");
        return;
    }
    printf("\n--- Alunos cadastrados ---\n");
    for (i = 0; i < quantidade; i++) {
        printf("RGM: %d | Nota 1: %.2f | Nota 2: %.2f | Média: %.2f\n",
               alunos[i].rgm, alunos[i].nota1,
               alunos[i].nota2, alunos[i].media);
    }
}
int main() {
    setlocale(LC_ALL, "");
    Aluno alunos[MAX_ALUNOS];
    int quantidade = 0;
    int opcao;
    do {
        printf("\n===== SISTEMA ACADÊMICO =====\n");
        printf("1 - Cadastrar aluno\n");
        printf("2 - Consultar aluno por RGM\n");
        printf("3 - Listar alunos\n");
        printf("4 - Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);
        switch (opcao) {
            case 1:
                cadastrar_aluno(alunos, &quantidade);
                break;
            case 2:
                consultar_aluno(alunos, quantidade);
                break;
            case 3:
                listar_alunos(alunos, quantidade);
                break;
            case 4:
                printf("Encerrando o sistema.\n");
                break;
            default:
                printf("Opção inválida!\n");
        }
    } while (opcao != 4);
    return 0;
}
