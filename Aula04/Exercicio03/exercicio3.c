#include <stdio.h>
int main() {
    float peso, altura, imc;
    printf("Digite o peso em kg: ");
    scanf("%f", &peso);
    printf("Digite a altura em metros: ");
    scanf("%f", &altura);
    imc = peso / (altura * altura);
    if (imc < 20.0) {
        printf("Voce esta na categoria Abaixo do peso\n");
    }
    else if (imc < 25.0) {
        printf("Voce esta na categoria Peso normal\n");
    }
    else if (imc < 30.0) {
        printf("Voce esta na categoria Sobrepeso\n");
    }
    else if (imc < 40.0) {
        printf("Voce esta na categoria Obeso\n");
    }
    else {
        printf("Voce esta na categoria Obeso morbido\n");
    }
    return 0;
}
