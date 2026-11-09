#include <stdio.h>
#include <locale.h>
int main() {
    float notas[3][4];
    float medias[3];
    float soma;
    float maiorMedia;
    int estudanteMaior;
    int i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            printf("Digite a %d nota do %d estudante: ",
                   j + 1, i + 1);
            scanf("%f", &notas[i][j]);
        }
    }
    for (i = 0; i < 3; i++) {
        soma = 0;
        for (j = 0; j < 4; j++) {
            soma = soma + notas[i][j];
        }
        medias[i] = soma / 4;
        printf("Media do estudante %d: %.2f\n",
               i + 1, medias[i]);
    }
    maiorMedia = medias[0];
    estudanteMaior = 1;
    for (i = 1; i < 3; i++) {
        if (medias[i] > maiorMedia) {
            maiorMedia = medias[i];
            estudanteMaior = i + 1;
        }
    }
    printf("Maior media: estudante %d - %.2f\n",
           estudanteMaior, maiorMedia);
    return 0;
}
