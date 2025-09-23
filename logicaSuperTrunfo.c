#include <stdio.h>

    int main() {
     
        int pontos_tur1, pontos_tur2; // variáveis de pontos turísticos
        unsigned long int populacao1, populacao2; // variáveis de populações
        char estado1, estado2; // variáveis do estado
        float area1, area2, PIB1, PIB2; // variáveis de áreas e de PIBs
        float densidade_pop1, densidade_pop2, PIB_per_capita1, PIB_per_capita2; // variáveis de densidade populacional e PIB per capita
        char nome1[20], nome2[20], codigo1[3], codigo2[3]; // variáveis do nome das cidades e do código das cartas
        float SuperPoder1, SuperPoder2; // variáveis do Super Poder
        int escolha_jogador; // variável de escolha do jogador   

        printf("Dados da Carta 1: \n"); //identificando a Carta 1

            printf("Digite uma letra de A a H para representar um dos oito estados: \n"); // entrada da letra que representa o estado
            scanf("%c", &estado1);

            printf("Digite o código da carta (A letra do estado seguida de um número de 01 a 04 ex: A01, B03): \n"); // entrada do código da carta
            scanf("%s", codigo1);

            printf("Digite o nome da Cidade: \n"); // entrada do nome da cidade
            scanf("%s", nome1);

            printf("Digite o número de habitante: \n"); // entrada da população
            scanf("%lu", &populacao1);

            printf("Digite a área (em km²): \n"); // entrada da área da cidade
            scanf("%f", &area1);

            printf("Digite o PIB da cidade: \n"); // entrada do PIB da cidade
            scanf("%f", &PIB1);

            printf("Digite o número de pontos turísticos: \n"); // entrada do número de pontos turísticos da cidade
            scanf("%i", &pontos_tur1);

            densidade_pop1 = (float) populacao1 / area1; // cálculo da densidade populacional
            PIB_per_capita1 = (float) PIB1 / populacao1; // cálculo do PIB per capita
            SuperPoder1 = (float) populacao1 + area1 + PIB1 + pontos_tur1 + PIB_per_capita1 + (1 / densidade_pop1); // cálculo do Super Poder


        printf(" \n"); // espaçamento

            printf("Carta 1: \n"); // identificando a saída da Carta 1
            printf("Estado: %c \n", estado1); // saída do estado da Carta 1
            printf("Código: %s \n", codigo1); // saída do código da Carta 1
            printf("Nome da cidade: %s \n", nome1); // saída do nome da cidade da Carta 1
            printf("População: %lu \n", populacao1); // saída da papulação da Carta 1
            printf("Área: %.2fkm² \n", area1); //saída da área da Carta 1
            printf("PIB: R$ %.2f \n", PIB1); // saída do PIB da Carta 1
            printf("Números de pontos turísticos: %i \n", pontos_tur1); //saída do número de pontos turísticos da Carta 1
            printf("Densidade populacional: %.2f habitantes/km² \n", densidade_pop1); // saída da densidade populacional da Carta 1
            printf("PIB per capita: R$ %.2f \n", PIB_per_capita1); // saída do PIB per capita da Carta 1
            printf("Super Poder: %.2f\n\n", SuperPoder1); // saída do Super Poder da Carta 1


        printf("Dados da Carta 2: \n"); // identificando a Carta 2

            printf("Digite uma letra de A a H para representar um dos oito estados: \n"); // entrada da letra que representa o estado
            scanf(" %c", &estado2);

            printf("Digite o código da carta (A letra do estado seguida de um número de 01 a 04 ex: A01, B03): \n"); // entrada do código da carta
            scanf("%s", codigo2);

            printf("Digite o nome da Cidade: \n"); // entrada do nome da cidade
            scanf("%s", nome2);

            printf("Digite o número de habitante: \n"); // entrada da população
            scanf("%lu", &populacao2);

            printf("Digite a área (em km²): \n"); // entrada da área da cidade
            scanf("%f", &area2);

            printf("Digite o PIB da cidade: \n"); // entrada do PIB da cidade
            scanf("%f", &PIB2);

            printf("Digite o número de pontos turísticos: \n"); // entrada do número de pontos turísticos da cidade
            scanf(" %i", &pontos_tur2);

            densidade_pop2 = (float) populacao2 / area2; // cálculo da densidade populacional
            PIB_per_capita2 = (float) PIB2 / populacao2; // cálculo do PIB per capita
            SuperPoder2 = (float) populacao2 + area2 + PIB2 + pontos_tur2 + PIB_per_capita2 + (1 / densidade_pop2); // cálculo do Super Poder

        printf(" \n"); // espaçamento

            printf("Carta 2: \n"); // identificando a saída da Carta 2
            printf("Estado: %c \n", estado2); // saída do estado da Carta 2
            printf("Código: %s \n", codigo2); // saída do código da Carta 2
            printf("Nome da cidade: %s \n", nome2); // saída do nome da cidade da Carta 2
            printf("População: %lu \n", populacao2); // saída da papulação da Carta 2
            printf("Área: %.2fkm² \n", area2); //saída da área da Carta 2
            printf("PIB: R$ %.2f \n", PIB2); // saída do PIB da Carta 2
            printf("Números de pontos turísticos: %i \n", pontos_tur2); //saída do número de pontos turísticos da Carta 2
            printf("Densidade populacional: %.2f habitantes/km² \n", densidade_pop2); // saída da densidade populacional da Carta 2
            printf("PIB per capita: R$ %.2f \n", PIB_per_capita2); // saída do PIB per capita da Carta 2
            printf("Super Poder: %.2f \n\n", SuperPoder2); // saída do Super Poder da Carta 2

            // início do menu de interação

        printf("*** Escolha o atributo para comparar *** \n"); // menu de comparação
        printf("1- População \n"); // opção do atributo população
        printf("2- Área \n"); // opção do atributo área
        printf("3- PIB \n"); // opção do atributo PIB
        printf("4- Pontos turísticos \n"); // opção do atributo ponto turístico
        printf("5- Densidade populacional \n\n"); // opção do atributo densidade populacional
            scanf("%i", &escolha_jogador); // entrada da escolha da opção

            // lógica de comparação (escolha do atributo)

        switch (escolha_jogador)
        {
        case 1: // escolha do atributo população
            printf("Carta 1 %s - População: %lu \n", nome1, populacao1); // saída do nome e do atributo
            printf("Carta 2 %s - População: %lu \n\n", nome2, populacao2); // saída do nome e do atributo
            break;

        case 2: // escolha do atributo área
            printf("Carta 1 %s - Área: %.2fkm² \n", nome1, area1); // saída do nome e do atributo
            printf("Carta 2 %s - Área: %.2fkm² \n\n", nome2, area2); // saída do nome e do atributo
            break;

        case 3: // escolha do atributo PIB
            printf("Carta 1 %s - PIB: %.2f \n", nome1, PIB1); // saída do nome e do atributo
            printf("Carta 2 %s - PIB: %.2f \n\n", nome2, PIB2); // saída do nome e do atributo
            break;

        case 4: // escolha do atributo ponto turístico
            printf("Carta 1 %s - Pontos turísticos: %d \n", nome1, pontos_tur1); // saída do nome e do atributo
            printf("Carta 2 %s - Pontos turísticos: %d \n\n", nome2, pontos_tur2); // saída do nome e do atributo
            break;

        case 5: // escolha do atributo densidade populacional
            printf("Carta 1 %s - Densidade populacional: %.2f \n", nome1, densidade_pop1); // saída do nome e do atributo
            printf("Carta 2 %s - Densidade populacional: %.2f \n\n", nome2, densidade_pop2); // saída do nome e do atributo
            break;
        
        default: // erro de inserção de opção inválida
            printf("### OPÇÃO INVÁLIDA ### \n");
            break;
        }

                // condições de comparação
        if(escolha_jogador >= 1 && escolha_jogador <= 5){
                // condições para carta 1 vencer
            if(
               (escolha_jogador == 1 && (populacao1 > populacao2)) ||
               (escolha_jogador == 2 && (area1 > area2)) ||
               (escolha_jogador == 3 && (PIB1 > PIB2)) ||
               (escolha_jogador == 4 && (pontos_tur1 > pontos_tur2)) ||
               (escolha_jogador == 5 && (densidade_pop1 < densidade_pop2))
            ) {
                printf("*** Carta 1 %s Venceu! ***", nome1);
              }
               
               // condições para carta 2 vencer
            else if (
                (escolha_jogador == 1 && (populacao1 < populacao2)) ||
                (escolha_jogador == 2 && (area1 < area2)) ||
                (escolha_jogador == 3 && (PIB1 < PIB2)) ||
                (escolha_jogador == 4 && (pontos_tur1 < pontos_tur2)) ||
                (escolha_jogador == 5 && (densidade_pop1 > densidade_pop2))
            ) {
                printf ("*** Carta 2 %s Venceu! ***", nome2);
            }

                // condição de empate
            else {
                printf("*** Empate! ***");
            }
        } else {
            printf("###      ERRO      ###");
        }


        

        return 0;
    }