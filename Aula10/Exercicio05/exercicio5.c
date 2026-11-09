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
    Aluno aluno;
    printf("RGM: ");
    scanf("%d", &aluno.rgm);
    printf("Nota 1: ");
    scanf("%f", &aluno.nota1);
    printf("Nota 2: ");
    scanf("%f", &aluno.nota2);
    calcular_media(&aluno);
    printf("\nRGM: %d\n", aluno.rgm);
    printf("Média: %.2f\n", aluno.media);
    return 0;
}
