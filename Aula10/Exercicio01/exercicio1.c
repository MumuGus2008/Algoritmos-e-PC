#include <stdio.h>
#include <locale.h>
float calcularFrete(float peso) {
    return peso * 4.50;
}
void exibirRelatorio(float peso, float frete) {
    printf("\nPeso do pacote: %.2f kg\n", peso);
    printf("Valor do frete: R$ %.2f\n", frete);
}
int main() {
    setlocale(LC_ALL, "");
    float peso, frete;
    char resposta;
    do {
        printf("Digite o peso (kg): ");
        scanf("%f", &peso);
        frete = calcularFrete(peso);
        exibirRelatorio(peso, frete);
        printf("\nDeseja calcular outro frete (s/n)? ");
        scanf(" %c", &resposta);
        printf("\n");
    } while (resposta == 's' || resposta == 'S');
    return 0;
}
