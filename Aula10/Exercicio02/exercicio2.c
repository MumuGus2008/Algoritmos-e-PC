#include <stdio.h>
#include <locale.h>
void trocarValores(int *a, int *b) {
    int auxiliar;
    auxiliar = *a;
    *a = *b;
    *b = auxiliar;
}
int main() {
    setlocale(LC_ALL, "");
    int a, b;
    printf("Digite o valor de a: ");
    scanf("%d", &a);
    printf("Digite o valor de b: ");
    scanf("%d", &b);
    printf("\nAntes: a=%d b=%d\n", a, b);
    trocarValores(&a, &b);
    printf("Depois: a=%d b=%d\n", a, b);
    return 0;
}
