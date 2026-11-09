#include <stdio.h>
int main() {
    float nota, soma = 0, media, maior;
    for (int i = 1; i <= 5; i++) {
        printf("Digite a nota do %do estudante: ", i);
        scanf("%f", &nota);
        soma += nota;
        if (i == 1 || nota > maior) {
            maior = nota;
        }
    }
    media = soma / 5;
    printf("Media da turma: %.2f\n", media);
    printf("Maior nota: %.2f\n", maior);
    return 0;
}
