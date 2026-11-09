#include <stdio.h>
#include <locale.h>
typedef struct {
    int rgm;
    float nota1;
    float nota2;
    float media;
} Aluno;
void calcular_media(Aluno *aluno) {
    aluno->media = (aluno->nota1 + aluno->nota2) / 2.0;
}
int main() {
    setlocale(LC_ALL, "");
    Aluno alunos[3];
    int i, rgmConsulta;
    int encontrado = 0;
    for (i = 0; i < 3; i++) {
        printf("\nCadastro do aluno %d\n", i + 1);
        printf("RGM: ");
        scanf("%d", &alunos[i].rgm);
        printf("Nota 1: ");
        scanf("%f", &alunos[i].nota1);
        printf("Nota 2: ");
        scanf("%f", &alunos[i].nota2);
        calcular_media(&alunos[i]);
    }
    printf("\nDigite o RGM para consulta: ");
    scanf("%d", &rgmConsulta);
    for (i = 0; i < 3; i++) {
        if (alunos[i].rgm == rgmConsulta) {
            printf("\nRGM: %d\n", alunos[i].rgm);
            printf("Média: %.2f\n", alunos[i].media);
            encontrado = 1;
            break;
        }
    }
    if (encontrado == 0) {
        printf("Erro: aluno com esse RGM não foi encontrado.\n");
    }
    return 0;
}
