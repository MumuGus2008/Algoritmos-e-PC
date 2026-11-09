#include <stdio.h>
int main() {
    long long cpf;
    float preco, total = 0;
    printf("CPF: ");
    scanf("%lld", &cpf);
    do {
        printf("Preco: ");
        scanf("%f", &preco);
        if (preco != 0) {
            total += preco;
        }
    } while (preco != 0);
    printf("CPF: %lld\n", cpf);
    printf("Total da compra: R$ %.2f\n", total);
    return 0;
}
