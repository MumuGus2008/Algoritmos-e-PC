#include <stdio.h>
int main() {
    int quantidade;
    float nota, soma = 0, media;
    printf("Quantidade de alunos: ");
    scanf("%d", &quantidade);
    for (int i = 1; i <= quantidade; i++) {
        printf("Nota %d: ", i);
        scanf("%f", &nota);
        while (nota < 0 || nota > 10) {
            printf("Nota invalida!\n");
            printf("Digite novamente: ");
            scanf("%f", &nota);
        }
        soma += nota;
    }
    media = soma / quantidade;
    printf("Media da turma: %.2f\n", media);
    return 0;
}
