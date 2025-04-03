# The Game
### Sistema de 3 minijogos desenvolvido em C [Visite o código do jogo aqui](https://github.com/HerbertHarvard/The_Game/blob/main/main.c)


### Opções de jogos:
### Pergunta e Resposta
Um jogo de quiz com cinco perguntas fixas e quatro alternativas cada. O jogador escolhe a resposta e recebe feedback imediato, incluindo a resposta correta caso erre. Após completar as perguntas, pode optar por jogar novamente ou voltar ao menu principal.
Recursos Utilizados:
Perguntas de múltipla escolha.
Uso de scanf para entrada do jogador.
Verificação da resposta com condições (if).

### Cobra na Caixa
Ambientado numa tumba egípcia, dois exploradores buscam o botão para escapar entre cinco caixas, evitando a cobra mortal. O conteúdo das caixas é aleatório a cada rodada. Jogadores alternam na escolha até que um vença (encontra o botão) ou perca (encontra a cobra).
Recursos Utilizados:
Escolha de personagens.
Geração de números aleatórios (rand e srand) para posicionar o botão e a cobra.
Uso de laços e validação de entrada para realizar as jogadas.

### Gousmas War
Um jogo estratégico em que cada jogador controla duas criaturas chamadas Gousmas. Elas acumulam fúria ao serem atacadas, podendo se dividir ou se desintegrar caso excedam o nível 5 de fúria. O vencedor é quem conseguir eliminar todas as Gousmas do oponente.
Nomes personalizados para cada Gousma.
Geração de turnos aleatórios.
Operações específicas para ataque e divisão.
Controle do estado do jogo com condições e laços.

*****main:***** O método principal apresenta o menu inicial do jogo, permitindo que o jogador escolha entre os três jogos implementados: Pergunta e Resposta, Cobra na Caixa e Gousmas_War.
Recursos Utilizados:
Loop do-while para exibir o menu.
Uso de switch para selecionar a opção desejada.
Encerramento do programa ao selecionar a opção correspondente.

##### Feito por: Igor Cecim Vilhena e Herbert Aciolly Leão de jesus
**Linguagem de Programação:** O projeto foi desenvolvido em **C**

**IDE:** Utilizamos o **Visual Studio Code**

**Material usado:** ChatGPT (apoio para fazer o Gousmas Game e uma parte no cobra na caixa)
