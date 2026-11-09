#include <stdio.h>
#include <locale.h>
#include <stdio.h>
int main() {
    float salarios[5];
    int i;
    for (i = 0; i < 5; i++) {
        printf("Digite o salario do funcionario %d: ", i + 1);
        scanf("%f", &salarios[i]);
    }
    printf("\nSalarios cadastrados:\n");
    for (i = 0; i < 5; i++) {
        printf("Funcionario %d: R$ %.2f\n", i + 1, salarios[i]);
    }
    return 0;
}
