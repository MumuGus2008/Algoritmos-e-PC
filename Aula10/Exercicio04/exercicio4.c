#include <stdio.h>
#include <locale.h>
float calcularArea(float largura, float comprimento) {
    return largura * comprimento;
}
int main() {
    setlocale(LC_ALL, "");
    float largura, comprimento, area;
    char resposta;
    do {
        printf("Digite a largura (m): ");
        scanf("%f", &largura);
        printf("Digite o comprimento (m): ");
        scanf("%f", &comprimento);
        area = calcularArea(largura, comprimento);
        printf("Área: %.1f m²\n", area);
        printf("\nDeseja calcular outra área (s/n)? ");
        scanf(" %c", &resposta);
        printf("\n");
    } while (resposta == 's' || resposta == 'S');
    return 0;
}
