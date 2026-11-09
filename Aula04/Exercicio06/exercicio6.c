#include <stdio.h>
int main() {
    char tipo;
    float nota1, nota2, media;
    printf("Tipo de media (A - P)? ");
    scanf(" %c", &tipo);
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    switch (tipo) {
        case 'A':
        case 'a':
            media = (nota1 + nota2) / 2;
            break;
        case 'P':
        case 'p':
            media = (nota1 * 3 + nota2 * 7) / 10;
            break;
        default:
            printf("Tipo de media invalido!\n");
            return 0;
    }
    printf("Media calculada: %.1f\n", media);
    return 0;
}
