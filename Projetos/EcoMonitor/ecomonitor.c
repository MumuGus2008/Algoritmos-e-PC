/*
 * PROJETO 4 — ECOMONITOR (CODIGO INICIAL)
 * Complete todas as funções e carregarMedicoes().
 * A base da função main() está implementada! Confira se não é necessária nenhuma alteração / complementação.
 * A função carregarMedicoes() ja esta implementada e não deve ser alterada.
 */
#include <stdio.h>

#define LOCAIS 3
#define DIAS 5
#define LIMITE_ALERTA 30

/* Protótipos */
int carregarMedicoes(const char *nomeArquivo, int dados[LOCAIS][DIAS]);
float calcularMediaLocal(int dados[LOCAIS][DIAS], int local);
float calcularMediaGeral(int dados[LOCAIS][DIAS]);
int contarAlertasLocal(int dados[LOCAIS][DIAS], int local);
int encontrarDiaMaisQuente(int dados[LOCAIS][DIAS]);
void exibirRelatorio(FILE *destino, int dados[LOCAIS][DIAS]);

int main(void) {
    int temperaturas[LOCAIS][DIAS];
    FILE *arquivo;

    if (!carregarMedicoes("medicoes.txt", temperaturas)) {
        printf("Erro: nao foi possivel ler as 15 medicoes de medicoes.txt.\n");
        return 1;
    }

    exibirRelatorio(stdout, temperaturas);

    arquivo = fopen("relatorio.txt", "w");
    if (arquivo == NULL) {
        printf("Erro: nao foi possivel criar relatorio.txt.\n");
        return 1;
    }
    exibirRelatorio(arquivo, temperaturas);
    fclose(arquivo);
    printf("Relatorio salvo em relatorio.txt\n");
    return 0;
}

/* FUNCAO FORNECIDA — NAO ALTERAR */
int carregarMedicoes(const char *nomeArquivo, int dados[LOCAIS][DIAS]) {
    FILE *arquivo = fopen(nomeArquivo, "r");
    int i, j;
    if (arquivo == NULL) return 0;
    for (i = 0; i < LOCAIS; i++) {
        for (j = 0; j < DIAS; j++) {
            if (fscanf(arquivo, "%d", &dados[i][j]) != 1) {
                fclose(arquivo);
                return 0;
            }
        }
    }
    fclose(arquivo);
    return 1;
}

/* 1 — media das temperaturas de uma localidade (linha) */
float calcularMediaLocal(int dados[LOCAIS][DIAS], int local) {
    int dia, soma = 0;
    for (dia = 0; dia < DIAS; dia++) {
        soma += dados[local][dia];
    }
    return (float)soma / DIAS;
}

/* 2 — media de todas as 15 temperaturas */
float calcularMediaGeral(int dados[LOCAIS][DIAS]) {
    int local, dia, soma = 0;
    for (local = 0; local < LOCAIS; local++) {
        for (dia = 0; dia < DIAS; dia++) {
            soma += dados[local][dia];
        }
    }
    return (float)soma / (LOCAIS * DIAS);
}

/* 3 — contar temperaturas >= LIMITE_ALERTA numa linha */
int contarAlertasLocal(int dados[LOCAIS][DIAS], int local) {
    int dia, alertas = 0;
    for (dia = 0; dia < DIAS; dia++) {
        if (dados[local][dia] >= LIMITE_ALERTA) {
            alertas++;
        }
    }
    return alertas;
}

/* 4 — retornar o INDICE (0 a 4) do dia de maior media */
int encontrarDiaMaisQuente(int dados[LOCAIS][DIAS]) {
    int dia, local, somaDia;
    int melhorDia = 0, maiorSoma = 0;
    for (dia = 0; dia < DIAS; dia++) {
        somaDia = 0;
        for (local = 0; local < LOCAIS; local++) {
            somaDia += dados[local][dia];
        }
        /* Maior soma equivale a maior media: sao sempre 3 locais.
           O sinal > preserva o primeiro dia em caso de empate. */
        if (dia == 0 || somaDia > maiorSoma) {
            maiorSoma = somaDia;
            melhorDia = dia;
        }
    }
    return melhorDia;
}

/* 5 — exibir o relatorio usando fprintf(destino, ...) */
void exibirRelatorio(FILE *destino, int dados[LOCAIS][DIAS]) {
    const char *nomes[LOCAIS] = {"Centro", "Norte", "Sul"};
    int local, alertas, totalAlertas = 0;

    fprintf(destino, "===== ECOMONITOR =====\n");
    fprintf(destino, "Media geral: %.2f C\n", calcularMediaGeral(dados));
    for (local = 0; local < LOCAIS; local++) {
        alertas = contarAlertasLocal(dados, local);
        totalAlertas += alertas;
        fprintf(destino, "%s: media %.2f C | alertas: %d\n",
                nomes[local], calcularMediaLocal(dados, local), alertas);
    }
    fprintf(destino, "Dia com maior media: Dia %d\n",
            encontrarDiaMaisQuente(dados) + 1);
    fprintf(destino, "Total de alertas: %d\n", totalAlertas);
    fprintf(destino, "======================\n");
}
