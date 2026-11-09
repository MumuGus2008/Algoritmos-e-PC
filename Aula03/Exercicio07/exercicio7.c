#include <stdio.h>
#include <math.h>
int main() {
    float velocidade, anguloGraus, anguloRad;
    float alcance;
    const float g = 9.81;
    const float PI = 3.14159265359;
    printf("Qual a velocidade inicial (m/s): ");
    scanf("%f", &velocidade);
    printf("Qual o angulo de lancamento em graus: ");
    scanf("%f", &anguloGraus);
    anguloRad = anguloGraus * PI / 180;
    alcance = (velocidade * velocidade * sin(2 * anguloRad)) / g;
    printf("O alcance horizontal estimado e %.2f metros.\n", alcance);
    return 0;
}
