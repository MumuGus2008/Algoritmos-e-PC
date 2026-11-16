# Relatório de testes — Arena Tech

Testes realizados com o programa compilado em C. A avaliação presencial por pares ainda precisa ser preenchida pelos avaliadores.

| Cenário | Entradas (participantes, jogadores/time, PCs, W, horas, R$/kWh, kit, outros, orçamento) | Esperado | Obtido | Resultado |
|---|---|---|---|---|
| Teste mínimo obrigatório | 30, 5, 30, 800, 2, 1.2, 20, 150, 1000 | APROVADO COM RESSALVAS | APROVADO COM RESSALVAS | PASSOU |
| Infraestrutura insuficiente | 30, 5, 20, 400, 2, 1.2, 20, 150, 1000 | NAO RECOMENDADO | NAO RECOMENDADO | PASSOU |
| Consumo baixo | 10, 3, 10, 500, 2, 1.2, 10, 50, 1000 | APROVADO | APROVADO | PASSOU |
| Consumo moderado | 20, 4, 20, 750, 2, 1.2, 10, 50, 1000 | APROVADO | APROVADO | PASSOU |
| No limite do orçamento | 10, 5, 10, 500, 2, 1, 10, 50, 160 | APROVADO | APROVADO | PASSOU |
| Acima do orçamento | 30, 5, 30, 800, 2, 1.2, 20, 150, 700 | NAO RECOMENDADO | NAO RECOMENDADO | PASSOU |
| Times incompletos | 11, 5, 11, 400, 2, 1, 10, 50, 1000 | APROVADO | APROVADO | PASSOU |

No teste obrigatório: consumo = 48,00 kWh; custo total = R$ 807,60; infraestrutura suficiente; orçamento dentro do limite disponível; decisão final APROVADO COM RESSALVAS.
