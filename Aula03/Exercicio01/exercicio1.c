#include <stdio.h>
int main() {
    float peso, altura, imc;
    printf("Qual e o peso da pessoa em kg?\n");
    scanf("%f", &peso);
    printf("Qual e a altura da pessoa em metros?\n");
    scanf("%f", &altura);
    imc = peso / (altura * altura);
    printf("O Indice de Massa Corporal e %.2f kg/m2\n", imc);
    return 0;
}
