# Projeto: Análise de Vendas de Chips de Telefonia Móvel

**Aluno:** MURILLO ABRAÃO PEIXOTO DOS SANTOS  
**RGM:** 47371897  
**Disciplina:** Algoritmos e Pensamento Computacional  
**Linguagem:** C

## Objetivo

Analisar as vendas de chips das operadoras Vivo, Claro e TIM ao longo de 12 meses, utilizando matrizes, vetores, estruturas de repetição e condicionais.

## Dados e funcionamento

O programa usa uma matriz `vendas[3][12]`, em que cada linha representa uma operadora e cada coluna representa um mês. Os dados de teste já estão preenchidos conforme o enunciado.

São calculados:

1. A média mensal geral, considerando as 36 quantidades da matriz.
2. A média de vendas de cada operadora ao longo dos 12 meses.
3. O mês com maior média conjunta de vendas das três operadoras.
4. A operadora com maior total de vendas no ano.

Todos os valores médios são arredondados para cima, como solicitado. Para valores inteiros positivos, o código usa `(soma + divisor - 1) / divisor`, sem necessidade de `math.h`.

## Como compilar e executar

Com GCC:

```bash
gcc analise_vendas_chips.c -o analise_vendas_chips
./analise_vendas_chips
```

No Windows, execute `analise_vendas_chips.exe` após compilar.

## Resultado com os dados do enunciado

```text
========================================
       RELATORIO ANUAL DE VENDAS
========================================
Media mensal geral: 160 chips
Media da Vivo: 167 chips
Media da Claro: 163 chips
Media da TIM: 150 chips
Mes com maior media de vendas: dez - 605 chips no total (media: 202 chips)
Operadora com maior venda anual: Vivo - 1995 chips no ano (media: 167 chips)
```

## Observação sobre o exemplo de saída

O exemplo do enunciado mostra `dez - 605 chips`, que é a soma das vendas de dezembro, não a média entre as três operadoras. A média arredondada de dezembro é **202 chips**. O exemplo também apresenta `Vivo - 167 chips` para a maior venda anual; **167 é a média mensal da Vivo**, enquanto o total anual é **1.995 chips**. O programa informa ambos para deixar o relatório correto e próximo do formato solicitado.

## Referência de programação

Estrutura inspirada nos exercícios da Aula 08, com matrizes, laços `for`, somatórios e busca de maior valor.
