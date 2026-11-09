#include <stdio.h>
#include <locale.h>
float calcularMedia(float nota1, float nota2) {
    return (nota1 + nota2) / 2.0;
}
void exibirSituacao(float media) {
    printf("Média do aluno: %.1f\n", media);
    if (media >= 7.0) {
        printf("Situação: Aprovado\n");
    } else {
        printf("Situação: Reprovado\n");
    }
}
int main() {
    setlocale(LC_ALL, "");
    float nota1, nota2, media;
    char resposta;
    do {
        printf("Digite a primeira nota: ");
        scanf("%f", &nota1);
        printf("Digite a segunda nota: ");
        scanf("%f", &nota2);
        media = calcularMedia(nota1, nota2);
        exibirSituacao(media);
        printf("\nDeseja digitar notas de outro aluno (s/n)? ");
        scanf(" %c", &resposta);
        printf("\n");
    } while (resposta == 's' || resposta == 'S');
    return 0;
}
