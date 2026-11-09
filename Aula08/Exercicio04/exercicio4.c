#include <stdio.h>
#include <locale.h>
int main() {
    float salarios[6];
    float soma = 0;
    float media;
    float maior;
    int abaixo = 0;
    int i;
    for (i = 0; i < 6; i++) {
        printf("Digite o salario do %d funcionario: ", i + 1);
        scanf("%f", &salarios[i]);
        soma = soma + salarios[i];
    }
    media = soma / 6;
    maior = salarios[0];
    for (i = 1; i < 6; i++) {
        if (salarios[i] > maior) {
            maior = salarios[i];
        }
    }
    for (i = 0; i < 6; i++) {
        if (salarios[i] < media) {
            abaixo++;
        }
    }
    printf("\nMedia salarial: R$ %.2f\n", media);
    printf("Maior salario: R$ %.2f\n", maior);
    printf("Salarios abaixo da media: %d\n", abaixo);
    return 0;
}
