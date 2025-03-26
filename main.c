#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

    void Pergunta_Resposta() {

        char resp[5];

        printf("\n1"
            "\n=== Pergunta e Resposta ===\n\n");
        printf("1 Questao\n"
            "Qual e a capital da Franca?\n"
            "a)Londres\nb)Paris\nc)Roma\nd)Berlim\n"
            "Resposta: ");
        scanf("%s", resp);
        if (resp[0] == 'b') {
                printf("Resposta Correta\n");
        }else {
            printf("Resposta Errada\n");
        }

        printf("\n2 Questao\n"
            "Qual e o maior planeta do nosso sistema solar?\n"
            "a)Terra\nb)Jupiter\nc)Saturno\nd)Marte\n"
            "Resposta: ");
            scanf("%s", resp);
        if (resp[1] == 'b') {
            printf("Resposta Correta\n");
        }else {
            printf("Resposta Errada\n");
        }

        printf("\n3 Questao\n"
            "Quem escreveu a obra 'Dom Casmurro'?\n"
            "a)Machado de Assis\nb)Jose de Alencar\nc)Clarice Lispector\nd)Jorge Amado\n"
            "Rsposta: ");
            scanf("%s", resp);
        if (resp[2] == 'a') {
            printf("Resposta Correta\n");
        }else {
            printf("Resposta Errada\n");
        }

        printf("\n4 Questao\n"
            "Qual o elemento quimico com o simbolo Fe na tabela periodica?\n"
            "a)Londres\nb)Paris\nc)Roma\nd)Berlim\n"
            "Resposta: ");
        scanf("%s", resp);
        if (resp[3] == 'b') {
            printf("Resposta Correta\n");
        }else {
            printf("Resposta Errada\n");
        }

        printf("\n5 Questao\n"
            "Qual e o nome do fenomeno que descreve a curvatura do espaco-tempo causada pela presenca de massa, conforme\nproposto por Albert Einstein?\n"
            "a)Efeito Doppler\nb)Teoria da Relatividade\nc)Lei da Gravitacao Universal\nd)Principio da Incerteza\n"
            "Resposta: ");
        scanf("%s", resp);
        if (resp[4] == 'b') {
            printf("Resposta Correta\n\n");
        }else {
            printf("Resposta Errada\n\n");
        }
    }
//------------------------------------------------------------------------------------------------------------------
    void Cobra_Caixa() {
    int caixa[5];
    int escolha;
    int player[2];
    char nome[7][30] = {"Hector Draven", "Valeria Vasquez", "Dante Moreau",
                         "Kazuki Tanaka", "Amira Al-Fayed", "Lars Havelock", "Isabela Montenegro"};

    printf("\n=== Cobra na Caixa! ===\n");
    printf("Voce e um companheiro estao presos em uma tumba egipcia...\n");
    printf("Encontre o botao para sair, mas cuidado com a cobra!\n\n");


    for (int i = 0; i < 2; i++) {
        while (1) {
            printf("Player %d, escolha seu personagem:\n", i + 1);
            for (int j = 0; j < 7; j++) {
                printf("[%d] %s\n", j + 1, nome[j]);
            }
            printf("Resposta: ");
            scanf("%d", &escolha);

            if (escolha >= 1 && escolha <= 7) {
                player[i] = escolha - 1;
                break;
            } else {
                printf("Escolha invalida! Tente novamente.\n");
            }
        }
    }

    printf("\nPlayer 1: %s\n", nome[player[0]]);
    printf("Player 2: %s\n\n", nome[player[1]]);
    printf("Vamos comecar o jogo!\n");

    srand(time(NULL));
    int jogadorAtual = rand() % 2;
    printf("O Player %d (%s) comeca!\n", jogadorAtual + 1, nome[player[jogadorAtual]]);


    for (int i = 0; i < 5; i++) {
        caixa[i] = 0;
    }


    int botao = rand() % 5;
    caixa[botao] = 1;
    int cobra;
    do {
        cobra = rand() % 5;
    } while (cobra == botao);
    caixa[cobra] = 2;


    int vencedor = -1;
    while (vencedor == -1) {
        printf("\nTurno de %s\n", nome[player[jogadorAtual]]);
        printf("Escolha uma caixa (1 a 5): ");
        scanf("%d", &escolha);
        escolha--;

        if (escolha < 0 || escolha >= 5) {
            printf("Escolha invalida! Tente novamente.\n");
            continue;
        }

        if (caixa[escolha] == 1) {
            printf("\nParabens, %s! Voce encontrou o botao e venceu!\n", nome[player[jogadorAtual]]);
            vencedor = jogadorAtual;
        } else if (caixa[escolha] == 2) {
            printf("\nOh nao, %s encontrou a cobra e perdeu!\n", nome[player[jogadorAtual]]);
            vencedor = (jogadorAtual + 1) % 2;
        } else {
            printf("Caixa vazia! Nenhum perigo, continue...\n");
            jogadorAtual = (jogadorAtual + 1) % 2;
        }
    }

    printf("\nO vencedor e: %s!\n\n", nome[player[vencedor]]);
}
//--------------------------------------------------------------------------------------------------------
    void Gousmas_War(){
        int furia[2] = { 1, 1 };
        int goma[2];
        char nome[2][10];

        printf("\n=== Gousmas_War ===\n");

        for (int i = 0; i < 2; i++) {
            printf("Escolha o nome da sua Gousma:");
            scanf("%9s", nome[i]);
        }

        srand(time(NULL));
        int jogadorAtual = rand() % 2;
        printf("\nA Gousma %s comeca!\n",nome[jogadorAtual]);

        int rodada = 0;


        while (1) {

            do {

                int op;
                printf("Rodada %d\n\n", rodada + 1);

                printf("Oque deseja fazer %s:\n", nome[jogadorAtual]);
                printf("Furia: %d\n", furia[jogadorAtual]);
                printf("[1] - Atacar\n");
                printf("[2] - Dividi\n");
                printf("Escolha uma opcao: ");
                scanf(" %d", &op);

                switch (op) {
                    case 1:
                        int alvo;

                        do {
                            printf("Escolha a gousma que quer atacar (1 ou 2): ");
                            scanf("%d", &alvo);
                            alvo--;

                            if (alvo == jogadorAtual) {
                                printf("Voce nao pode atacar sua propria Gousma ou uma opcao inexistente.\n");

                            }
                        } while (alvo == jogadorAtual || alvo < 0 || alvo > 1);

                        furia[alvo] += furia[jogadorAtual];
                        furia[jogadorAtual] = 1;

                        if (furia[alvo] > 5) {
                            printf("A Gousma %s se desintegrou!\n", nome[alvo]);
                            furia[alvo] = 0;
                            if (furia[0] == 0 || furia[1] == 0) {
                                printf("\nFim de jogo! O jogador %d venceu!\n", jogadorAtual == 0 ? 2 : 1);
                                return;
                            }
                        }


                        break;
                    case 2:
                        if (furia[jogadorAtual] > 1) {
                            int novaFuria = furia[jogadorAtual] / 2;
                            printf("Sua Gousma %s foi dividida! A nova Gousma tem furia %d.\n", nome[jogadorAtual], novaFuria);
                            furia[jogadorAtual] -= novaFuria;
                            furia[!jogadorAtual] = novaFuria;
                        } else {
                            printf("A Gousma %s nao tem furia suficiente para dividir!\n", nome[jogadorAtual]);
                        }
                        break;
                    default:
                        printf("Opcao nao existe");
                        break;
                }
                if (furia[0] == 0 && furia[1] == 0) {
                    printf("\nFim de jogo! O jogador %d venceu!\n", jogadorAtual == 0 ? 2 : 1);
                    break;
                }
                jogadorAtual = (jogadorAtual + 1) % 2;
            } while (1);
        }
    }

int main(){

        int opcao;

        do {
            printf("\nTITULO DO JOGO\n");
            printf("[1] - Pergunta e Resposta\n");
            printf("[2] - Cobra na Caixa!\n");
            printf("[3] - Gousmas War\n");
            printf("[4] - Sair\n");
            printf("Escolha uma opcao: ");
            scanf(" %d", &opcao);

            switch (opcao) {
                case 1:
                    Pergunta_Resposta();
                break;

                case 2:
                    Cobra_Caixa();
                break;

                case 3:
                    Gousmas_War();
                break;

                case 4:
                    printf("Encerrando o programa...\n");

                break;

                default:
                    printf("Opcao invalida.\n");
            }
        }while(opcao != 4);
        return 0;
    }