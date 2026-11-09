#include <stdio.h>
#include <math.h>
int main() {
    float largura, comprimento, valorCaixa;
    float area, custoTotal;
    int caixas;
    printf("Qual e a largura da area (em metros)? ");
    scanf("%f", &largura);
    printf("Qual e o comprimento da area em metros? ");
    scanf("%f", &comprimento);
    printf("Qual e o valor de cada caixa? ");
    scanf("%f", &valorCaixa);
    area = largura * comprimento;
    caixas = (int)ceil(area / 2.5);
    custoTotal = caixas * valorCaixa;
    printf("Area total a ser revestida: %.2f m2\n", area);
    printf("Quantidade de caixas necessarias: %d\n", caixas);
    printf("Custo total da compra: R$ %.2f\n", custoTotal);
    return 0;
}
