#include <stdio.h>
int main() {
    int numero;
    int soma = 0;
    do {
        printf("Digite um numero: ");
        scanf("%d", &numero);
        if (numero != 0 && numero % 2 != 0) {
            soma += numero;
        }
    } while (numero != 0);
    printf("Soma dos numeros impares: %d\n", soma);
    return 0;
}
