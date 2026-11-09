#include <stdio.h>
int main() {
    int i, frios = 0;
    char municipio[50];
    float temperatura, soma = 0, media;
    for (i = 1; i <= 5; i++) {
        printf("Digite o nome do municipio: ");
        scanf("%49s", municipio);
        printf("Digite a temperatura media: ");
        scanf("%f", &temperatura);
        soma += temperatura;
        if (temperatura < 10) {
            frios++;
        }
    }
    media = soma / 5;
    printf("\nTemperatura media da regiao: %.2f C\n", media);
    printf("Municipios com temperatura inferior a 10 graus: %d\n", frios);
    return 0;
}
