/*
 * PROJETO 1 - ARENA TECH
 * Aluno: MURILLO ABRAAO PEIXOTO DOS SANTOS
 * RGM: 47371897
 * Disciplina: Algoritmos e Pensamento Computacional
 *
 * Conteudos: entrada e saida, operadores e estruturas condicionais.
 */
#include <stdio.h>

int main(void)
{
    // Entradas
    int qte_participantes, qte_jogadores_por_time, qte_computadores;
    float potencia, duracao, preco_kwh;
    float preco_kit, outros_custos, orcamento;

    // Processamento
    int qte_times, computadores_faltantes;
    float consumo_energia, custo_energia;
    float custo_alimentacao, custo_total;
    float custo_por_participante, saldo;

    printf("========== PLANEJAMENTO ARENA TECH ==========\n");
    printf("Quantidade de participantes: ");
    scanf("%d", &qte_participantes);
    printf("Jogadores por time: ");
    scanf("%d", &qte_jogadores_por_time);
    printf("Computadores disponiveis: ");
    scanf("%d", &qte_computadores);
    printf("Potencia de cada computador (W): ");
    scanf("%f", &potencia);
    printf("Duracao do evento (horas): ");
    scanf("%f", &duracao);
    printf("Preco da energia (R$/kWh): ");
    scanf("%f", &preco_kwh);
    printf("Preco do kit de alimentacao (R$/pessoa): ");
    scanf("%f", &preco_kit);
    printf("Outros custos (R$): ");
    scanf("%f", &outros_custos);
    printf("Orcamento disponivel (R$): ");
    scanf("%f", &orcamento);

    // Evita divisao por zero e entradas sem sentido.
    if (qte_participantes <= 0 || qte_jogadores_por_time <= 0 ||
        qte_computadores < 0 || potencia < 0 || duracao <= 0 ||
        preco_kwh < 0 || preco_kit < 0 || outros_custos < 0 ||
        orcamento < 0) {
        printf("\nERRO: informe valores validos para o planejamento.\n");
        return 1;
    }

    // Arredondamento para cima usando somente operacoes inteiras.
    qte_times = qte_participantes / qte_jogadores_por_time;
    if (qte_participantes % qte_jogadores_por_time != 0) {
        qte_times = qte_times + 1;
    }

    computadores_faltantes = qte_participantes - qte_computadores;
    consumo_energia = (qte_computadores * potencia * duracao) / 1000.0f;
    custo_energia = consumo_energia * preco_kwh;
    custo_alimentacao = qte_participantes * preco_kit;
    custo_total = custo_energia + custo_alimentacao + outros_custos;
    custo_por_participante = custo_total / qte_participantes;
    saldo = orcamento - custo_total;

    printf("\n============== ARENA TECH ==============\n");
    printf("Participantes: %d\n", qte_participantes);
    printf("Times necessarios: %d\n", qte_times);
    printf("Computadores disponiveis: %d\n", qte_computadores);

    if (qte_computadores >= qte_participantes) {
        printf("Infraestrutura: SUFICIENTE\n");
    } else {
        printf("Infraestrutura: INSUFICIENTE - faltam %d computador(es)\n",
               computadores_faltantes);
    }

    printf("\nConsumo estimado: %.2f kWh\n", consumo_energia);
    if (consumo_energia <= 20) {
        printf("Classificacao do consumo: BAIXO\n");
    } else if (consumo_energia <= 40) {
        printf("Classificacao do consumo: MODERADO\n");
    } else {
        printf("Classificacao do consumo: ALTO\n");
    }

    printf("Custo da energia: R$ %.2f\n", custo_energia);
    printf("Custo da alimentacao: R$ %.2f\n", custo_alimentacao);
    printf("Outros custos: R$ %.2f\n", outros_custos);
    printf("CUSTO TOTAL: R$ %.2f\n", custo_total);
    printf("CUSTO POR PARTICIPANTE: R$ %.2f\n", custo_por_participante);

    printf("\nOrcamento disponivel: R$ %.2f\n", orcamento);
    printf("Saldo: R$ %.2f\n", saldo);
    if (custo_total > orcamento) {
        printf("Situacao do orcamento: ACIMA DO ORCAMENTO\n");
    } else if (saldo <= orcamento * 0.05f) {
        printf("Situacao do orcamento: NO LIMITE DO ORCAMENTO\n");
    } else {
        printf("Situacao do orcamento: DENTRO DO ORCAMENTO\n");
    }

    if (qte_computadores < qte_participantes || custo_total > orcamento) {
        printf("\nDECISAO FINAL: NAO RECOMENDADO\n");
        if (qte_computadores < qte_participantes && custo_total > orcamento) {
            printf("Motivo: computadores insuficientes e orcamento ultrapassado.\n");
        } else if (qte_computadores < qte_participantes) {
            printf("Motivo: computadores insuficientes.\n");
        } else {
            printf("Motivo: orcamento ultrapassado.\n");
        }
    } else if (consumo_energia > 40) {
        printf("\nDECISAO FINAL: APROVADO COM RESSALVAS\n");
        printf("Motivo: consumo elevado de energia.\n");
    } else {
        printf("\nDECISAO FINAL: APROVADO\n");
        printf("Motivo: recursos e custos adequados ao evento.\n");
    }

    printf("========================================\n");
    return 0;
}
