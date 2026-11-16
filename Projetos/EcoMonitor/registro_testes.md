# Registro de testes — EcoMonitor

O programa foi compilado com `gcc -std=c11 -Wall -Wextra -pedantic` sem erros ou avisos.

| Teste | Arquivo utilizado como medicoes.txt | Média geral | Alertas totais | Dia mais quente | Resultado |
|---|---|---:|---:|---|---|
| 1 | `medicoes.txt` | 27.40 °C | 5 | Dia 5 | PASSOU |
| 2 | `teste2.txt` | 19.67 °C | 0 | Dia 5 | PASSOU |
| 3 | `teste3.txt` | 30.00 °C | 15 | Dia 1 | PASSOU |

Para executar os testes 2 e 3, copie o conteúdo do respectivo arquivo para `medicoes.txt`, execute o programa e confira `relatorio.txt`. Ao final, restaure `medicoes.txt` original.

A função `carregarMedicoes()` e a estrutura de `main()` foram mantidas conforme o código inicial do professor. As cinco funções de análise e relatório foram implementadas.
