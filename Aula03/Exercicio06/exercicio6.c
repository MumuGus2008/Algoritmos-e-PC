#include <stdio.h>
#include <math.h>
int main() {
    float x1, y1, x2, y2;
    float distancia;
    printf("Digite a coordenada x do 1o ponto: ");
    scanf("%f", &x1);
    printf("Digite a coordenada y do 1o ponto: ");
    scanf("%f", &y1);
    printf("Digite a coordenada x do 2o ponto: ");
    scanf("%f", &x2);
    printf("Digite a coordenada y do 2o ponto: ");
    scanf("%f", &y2);
    distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    printf("A distancia entre os pontos e %.2f.\n", distancia);
    return 0;
}
