#include <stdio.h>
int main() {
    int i, aprovados = 0;
    float nota;
    for (i = 1; i <= 10; i++) {
        printf("Digite a nota do aluno %d: ", i);
        scanf("%f", &nota);
        if (nota >= 6.0) {
            aprovados++;
        }
    }
    printf("\nQuantidade de alunos aprovados: %d\n", aprovados);
    return 0;
}
