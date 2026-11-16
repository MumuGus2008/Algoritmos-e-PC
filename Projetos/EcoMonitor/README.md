# Projeto 4 — EcoMonitor: Monitoramento de Temperaturas

**Disciplina:** Algoritmos e Pensamento Computacional  
**Professor:** Marco Sanches  
**Aluno:** MURILLO ABRAÃO PEIXOTO DOS SANTOS  
**RGM:** 47371897

## Objetivo

Analisar temperaturas registradas por três sensores (Centro, Norte e Sul) durante cinco dias. O programa calcula a média geral, as médias por localidade, o dia de maior média e os alertas (temperaturas a partir de 30 °C). Exibe o relatório no terminal e o salva em `relatorio.txt`.

## Arquivos

- `ecomonitor.c`: código-fonte com as cinco funções solicitadas implementadas.
- `medicoes.txt`: entrada original (15 temperaturas, 3 linhas × 5 colunas).
- `relatorio.txt`: saída gerada com a entrada original.
- `teste2.txt` e `teste3.txt`: conjuntos adicionais de testes fornecidos pelo professor.
- `registro_testes.md`: registro dos três testes realizados.
- `saida_teste_1.txt`: saída textual do teste obrigatório.
- `captura_teste_1.png`: imagem da saída do programa, disponível no pacote ZIP original.

## Compilação e execução

Na pasta do projeto, execute:

```bash
gcc -std=c11 -Wall -Wextra -pedantic ecomonitor.c -o ecomonitor
./ecomonitor
```

No Windows, execute `ecomonitor.exe` (ou `.\ecomonitor.exe` no PowerShell).

## Como testar

Substitua temporariamente o conteúdo de `medicoes.txt` pelo de `teste2.txt` ou `teste3.txt`, execute o programa e compare os resultados com `registro_testes.md`. Restaure as medições originais ao terminar.

## Conteúdos das aulas

Matrizes, vetores de nomes, laços `for`, estruturas de decisão, funções com parâmetros, leitura e escrita de arquivos com `FILE`, `fscanf` e `fprintf`.

## Uso de IA

O ChatGPT foi utilizado como apoio para completar as cinco funções, organizar os arquivos e executar os testes. O estudante deve revisar o código e compreender o funcionamento antes de apresentar o trabalho.
