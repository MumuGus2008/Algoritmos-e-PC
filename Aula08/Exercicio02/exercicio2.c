#include <stdio.h>
#include <locale.h>
int main() {
    float salarios[4];
    int i;
    for (i = 0; i < 4; i++) {
        printf("Digite o salario do %d funcionario: ", i + 1);
        scanf("%f", &salarios[i]);
    }
    printf("\n");
    for (i = 0; i < 4; i++) {
        printf("Funcionario %d: R$ %.2f\n", i + 1, salarios[i]);
    }
    return 0;
}
