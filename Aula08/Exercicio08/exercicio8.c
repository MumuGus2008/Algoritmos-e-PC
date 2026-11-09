#include <stdio.h>
int main() {
    float temperaturas[7];
    float soma = 0;
    float media;
    float maior;
    float menor;
    int acima = 0;
    int i;
    for (i = 0; i < 7; i++) {
        printf("Digite a temperatura do dia %d: ", i + 1);
        scanf("%f", &temperaturas[i]);
        soma = soma + temperaturas[i];
    }
    media = soma / 7;
    maior = temperaturas[0];
    menor = temperaturas[0];
    for (i = 1; i < 7; i++) {
        if (temperaturas[i] > maior) {
            maior = temperaturas[i];
        }
        if (temperaturas[i] < menor) {
            menor = temperaturas[i];
        }
    }
    for (i = 0; i < 7; i++) {
        if (temperaturas[i] > media) {
            acima++;
        }
    }
    printf("\nMedia: %.2f °C\n", media);
    printf("Maior temperatura: %.2f °C\n", maior);
    printf("Menor temperatura: %.2f °C\n", menor);
    printf("Dias acima da media: %d\n", acima);
    return 0;
}
