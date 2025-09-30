#include <stdio.h>

    int main() {
     
        int pontos_tur1, pontos_tur2; // variáveis de pontos turísticos
        unsigned long int populacao1, populacao2; // variáveis de populações
        char estado1, estado2; // variáveis do estado
        float area1, area2, PIB1, PIB2; // variáveis de áreas e de PIBs
        float densidade_pop1, densidade_pop2, PIB_per_capita1, PIB_per_capita2; // variáveis de densidade populacional e PIB per capita
        char nome1[20] = "Brasil", nome2[20] = "Japão", codigo1[3], codigo2[3]; // variáveis do nome das cidades e do código das cartas
        float SuperPoder1, SuperPoder2; // variáveis do Super Poder
        int escolha1_jogador, escolha2_jogador; // variável das escolhas do jogador
        float carta1_atributo1, carta2_atributo1, carta1_atributo2, carta2_atributo2, carta1_resultado, carta2_resultado; // variável do valor da soma dos atributos escolhidos para comparação
        int resultado_soma_atributos; // variável do resultado da soma

        /*
        Valores já pré-definidos para facilitação da execução do desafio, visto que ainda não foi ensinado como armazenar variáveis em arquivos para uso posterior.
        Os valores utilizados foram adaptados de valores reais para estarem dentro da capacidade de armazenamento das variáveis.     
        */

        //nome1[20] = "Brasil";
        //nome2[20] = "Japão";
        populacao1 = 212000000;
        populacao2 = 124000000;
        area1 = 8515768.04;
        area2 = 377974.00;
        PIB1 = 117900000.00;
        PIB2 = 402000000.00;
        pontos_tur1 = 860000;
        pontos_tur2 = 860000;
        densidade_pop1 = (float) populacao1 / area1;
        densidade_pop2 = (float) populacao2 / area2;
        PIB_per_capita1 = (float) PIB1 / populacao1;
        PIB_per_capita2 = (float) PIB2 / populacao2;



/*      INSTRUÇÃO PARA CADASTRO DAS CARTAS DOS DESAFIOS ANTERIORES DESCARTADA PARA ESTE DESAFIO CONFORME INFORMADO NAS ORIENTAÇÕES

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

*/
            // início do menu de interação

        printf("*** Escolha o primeiro atributo para comparar *** \n"); // menu de comparação
        printf("1- População \n"); // opção do atributo população
        printf("2- Área \n"); // opção do atributo área
        printf("3- PIB \n"); // opção do atributo PIB
        printf("4- Pontos turísticos \n"); // opção do atributo ponto turístico
        printf("5- Densidade populacional \n"); // opção do atributo densidade populacional
        printf("6- PIB per capita \n\n"); // opção do atributo PIB per capita
            scanf("%i", &escolha1_jogador); // entrada da escolha da opção

            // lógica de comparação (escolha do primeiro atributo)

        switch (escolha1_jogador) {

        case 1: // escolha do atributo população
            carta1_atributo1 = populacao1;
            carta2_atributo1 = populacao2;
            break;

        case 2: // escolha do atributo área
            carta1_atributo1 = area1;
            carta2_atributo1 = area2;
            break;

        case 3: // escolha do atributo PIB
            carta1_atributo1 = PIB1;
            carta2_atributo1 = PIB2;
            break;

        case 4: // escolha do atributo ponto turístico
            carta1_atributo1 = pontos_tur1;
            carta2_atributo1 = pontos_tur2;
            break;

        case 5: // escolha do atributo densidade populacional
            carta1_atributo1 = densidade_pop1;
            carta2_atributo1 = densidade_pop2;
            break;

        case 6: // escolha do atributo PIB per capita
            carta1_atributo1 = PIB_per_capita1;
            carta2_atributo1 = PIB_per_capita2;
            break;
        
        default: // erro de inserção de opção inválida
            printf("### OPÇÃO INVÁLIDA ### \n");
            break;
        }
                // lógica de comparação (escolha do segundo atributo)

        if (escolha1_jogador >= 1 && escolha1_jogador <=6) {
            if (escolha1_jogador == 1) {     // caso o jogador escolha o atributo população este não constará como opção na escolha do segundo                     

            printf("*** Escolha o segundo atributo para comparar *** \n"); // menu de comparação
            printf("1- Área \n"); // opção do atributo área
            printf("2- PIB \n"); // opção do atributo PIB
            printf("3- Pontos turísticos \n"); // opção do atributo ponto turístico
            printf("4- Densidade populacional \n"); // opção do atributo densidade populacional
            printf("5- PIB per capita \n\n"); // opção do atributo PIB per capita
                scanf("%i", &escolha2_jogador); // entrada da escolha da opção
            } 
            else if (escolha1_jogador == 2) {       // caso o jogador escolha o atributo área este não constará como opção na escolha do segundo  
            printf("*** Escolha o segundo atributo para comparar *** \n"); // menu de comparação
            printf("1- População \n"); // opção do atributo população
            printf("2- PIB \n"); // opção do atributo PIB
            printf("3- Pontos turísticos \n"); // opção do atributo ponto turístico
            printf("4- Densidade populacional \n"); // opção do atributo densidade populacional
            printf("5- PIB per capita \n\n"); // opção do atributo PIB per capita
                scanf("%i", &escolha2_jogador); // entrada da escolha da opção
            }
            else if (escolha1_jogador == 3) {       // caso o jogador escolha o atributo PIB este não constará como opção na escolha do segundo  
            printf("*** Escolha o segundo atributo para comparar *** \n"); // menu de comparação
            printf("1- População \n"); // opção do atributo população
            printf("2- Área \n"); // opção do atributo área            
            printf("3- Pontos turísticos \n"); // opção do atributo ponto turístico
            printf("4- Densidade populacional \n"); // opção do atributo densidade populacional
            printf("5- PIB per capita \n\n"); // opção do atributo PIB per capita
                scanf("%i", &escolha2_jogador); // entrada da escolha da opção
            }
            else if (escolha1_jogador == 4) {       // caso o jogador escolha o atributo pontos turísticos este não constará como opção na escolha do segundo
            printf("*** Escolha o segundo atributo para comparar *** \n"); // menu de comparação
            printf("1- População \n"); // opção do atributo população
            printf("2- Área \n"); // opção do atributo área
            printf("3- PIB \n"); // opção do atributo PIB
            printf("4- Densidade populacional \n"); // opção do atributo densidade populacional
            printf("5- PIB per capita \n\n"); // opção do atributo PIB per capita
            scanf("%i", &escolha2_jogador); // entrada da escolha da opção
            }
            else if (escolha1_jogador == 5) {      // caso o jogador escolha o atributo densidade populacional este não constará como opção na escolha do segundo
            printf("*** Escolha o segundo atributo para comparar *** \n"); // menu de comparação
            printf("1- População \n"); // opção do atributo população
            printf("2- Área \n"); // opção do atributo área
            printf("3- PIB \n"); // opção do atributo PIB
            printf("4- Pontos turísticos \n"); // opção do atributo ponto turístico
            printf("5- PIB per capita \n\n"); // opção do atributo PIB per capita
                scanf("%i", &escolha2_jogador); // entrada da escolha da opção
            }
            else {      // caso o jogador escolha o atributo PIB per capita este não constará como opção na escolha do segundo
            printf("*** Escolha o segundo atributo para comparar *** \n"); // menu de comparação
            printf("1- População \n"); // opção do atributo população
            printf("2- Área \n"); // opção do atributo área
            printf("3- PIB \n"); // opção do atributo PIB
            printf("4- Pontos turísticos \n"); // opção do atributo ponto turístico
            printf("5- Densidade populacional \n\n"); // opção do atributo PIB per capita
                scanf("%i", &escolha2_jogador); // entrada da escolha da opção
            }
        
            if (escolha1_jogador == 1) {    // resultado da escolha do segundo atributo caso o jogador escolha o atributo população com primeiro

                switch (escolha2_jogador) {
                    case 1:
                    carta1_atributo2 = area1;
                    carta2_atributo2 = area2;
                        break;

                    case 2:
                    carta1_atributo2 = PIB1;
                    carta2_atributo2 = PIB2;
                        break;

                    case 3:
                    carta1_atributo2 = pontos_tur1;
                    carta2_atributo2 = pontos_tur2;
                        break;

                    case 4:
                    carta1_atributo2 = densidade_pop1;
                    carta2_atributo2 = densidade_pop2;
                        break;

                    case 5:
                    carta1_atributo2 = PIB_per_capita1;
                    carta2_atributo2 = PIB_per_capita2;
                        break;

                    default:
                        printf("### OPÇÃO INVÁLIDA ### \n");
                        break;
                }
            } else if (escolha1_jogador == 2) {    // resultado da escolha do segundo atributo caso o jogador escolha o atributo área com primeiro

                switch (escolha2_jogador) {

                    case 1:
                    carta1_atributo2 = populacao1;
                    carta2_atributo2 = populacao2;
                        break;

                    case 2:
                    carta1_atributo2 = PIB1;
                    carta2_atributo2 = PIB2;
                        break;

                    case 3:
                    carta1_atributo2 = pontos_tur1;
                    carta2_atributo2 = pontos_tur2;
                        break;

                    case 4:
                    carta1_atributo2 = densidade_pop1;
                    carta2_atributo2 = densidade_pop2;
                        break;

                    case 5:
                    carta1_atributo2 = PIB_per_capita1;
                    carta2_atributo2 = PIB_per_capita2;
                        break;

                    default:
                        printf("### OPÇÃO INVÁLIDA ### \n");
                        break;
                }        
            } else if (escolha1_jogador == 3) {    // resultado da escolha do segundo atributo caso o jogador escolha o atributo PIB com primeiro

                switch (escolha2_jogador) {
                    
                    case 1:
                    carta1_atributo2 = populacao1;
                    carta2_atributo2 = populacao2;
                        break;

                    case 2:
                    carta1_atributo2 = area1;
                    carta2_atributo2 = area2;
                        break;

                    case 3:
                    carta1_atributo2 = pontos_tur1;
                    carta2_atributo2 = pontos_tur2;
                        break;

                    case 4:
                    carta1_atributo2 = densidade_pop1;
                    carta2_atributo2 = densidade_pop2;
                        break;

                    case 5:
                    carta1_atributo2 = PIB_per_capita1;
                    carta2_atributo2 = PIB_per_capita2;
                        break;

                    default:
                        printf("### OPÇÃO INVÁLIDA ### \n");
                        break;
                }
            } else if (escolha1_jogador == 4) {     // resultado da escolha do segundo atributo caso o jogador escolha o atributo pontos turísticos com primeiro

                switch (escolha2_jogador) {
                    
                    case 1:
                    carta1_atributo2 = populacao1;
                    carta2_atributo2 = populacao2;
                        break;

                    case 2:
                    carta1_atributo2 = area1;
                    carta2_atributo2 = area2;
                        break;

                    case 3:
                    carta1_atributo2 = PIB1;
                    carta2_atributo2 = PIB2;
                        break;

                    case 4:
                    carta1_atributo2 = densidade_pop1;
                    carta2_atributo2 = densidade_pop2;
                        break;

                    case 5:
                    carta1_atributo2 = PIB_per_capita1;
                    carta2_atributo2 = PIB_per_capita2;
                        break;

                    default:
                        printf("### OPÇÃO INVÁLIDA ### \n");
                        break;           
                }

            } else if (escolha1_jogador == 5) {
                switch (escolha2_jogador) {     // resultado da escolha do segundo atributo caso o jogador escolha o atributo densidade populacional com primeiro
                    
                    case 1:
                    carta1_atributo2 = populacao1;
                    carta2_atributo2 = populacao2;
                        break;

                    case 2:
                    carta1_atributo2 = area1;
                    carta2_atributo2 = area2;
                        break;

                    case 3:
                    carta1_atributo2 = PIB1;
                    carta2_atributo2 = PIB2;
                        break;

                    case 4:
                    carta1_atributo2 = pontos_tur1;
                    carta2_atributo2 = pontos_tur2;
                        break;

                    case 5:
                    carta1_atributo2 = PIB_per_capita1;
                    carta2_atributo2 = PIB_per_capita2;
                        break;

                    default:
                        printf("### OPÇÃO INVÁLIDA ### \n");
                        break;
                }         
            } else {
                switch (escolha2_jogador) {     // resultado da escolha do segundo atributo caso o jogador escolha o atributo densidade populacional com primeiro
                    case 1:
                    carta1_atributo2 = populacao1;
                    carta2_atributo2 = populacao2;
                        break;
                    case 2:
                    carta1_atributo2 = area1;
                    carta2_atributo2 = area2;
                        break;
                    case 3:
                    carta1_atributo2 = PIB1;
                    carta2_atributo2 = PIB2;
                        break;
                    case 4:
                    carta1_atributo2 = pontos_tur1;
                    carta2_atributo2 = pontos_tur2;
                        break;
                    case 5:
                    carta1_atributo2 = densidade_pop1;
                    carta2_atributo2 = densidade_pop2;
                        break;
                    default:
                        printf("### OPÇÃO INVÁLIDA ### \n");
                        break;
                }

            }

            if(escolha2_jogador >= 1 && escolha2_jogador <= 5){
            
            if (escolha1_jogador == 1){
            printf("Primeiro atributo escolhido: População \n\n");
            }
            else if (escolha1_jogador == 2){
            printf("Primeiro atributo escolhido: Área \n\n");
            }
            else if (escolha1_jogador == 3){
            printf("Primeiro atributo escolhido: PIB \n\n");
            }
            else if (escolha1_jogador == 4){
            printf("Primeiro atributo escolhido: Pontos turísticos \n\n");
            }
            else if (escolha1_jogador == 5){
            printf("Primeiro atributo escolhido: Densidade populacional \n\n");
            }
            else {
            printf("Primeiro atributo escolhido: PIB per capita \n\n");
            }
            printf("Carta 1 - %s : ", nome1);
                if (escolha1_jogador == 1 || escolha1_jogador == 4) {
                printf("%.0f \n", carta1_atributo1);
                }
                else if (escolha1_jogador == 2) {
                printf("%.2f km² \n", carta1_atributo1);
                }
                else if (escolha1_jogador == 3 || escolha1_jogador == 5){
                printf("R$ %.2f \n", carta1_atributo1);
                }
                else{
                printf("%.2f habitante/km² \n", carta1_atributo1);
                }
            printf("Carta 2 - %s : ", nome2);
                if (escolha1_jogador == 1 || escolha1_jogador == 4) {
                printf("%.0f \n\n", carta2_atributo1);
                }
                else if (escolha1_jogador == 2) {
                printf("%.2f km² \n\n", carta2_atributo1);
                }
                else if (escolha1_jogador == 3 || escolha1_jogador == 5){
                printf("R$ %.2f \n\n", carta2_atributo1);
                }
                else{
                printf("%.2f habitante/km² \n\n", carta2_atributo1);
                }
            
            
                if(carta1_atributo1 > carta2_atributo1){
                    printf("Carta 1 - %s Venceu! \n\n", nome1);
                } else if (carta1_atributo1 < carta2_atributo1) {
                    printf("Carta 2 - %s Venceu! \n\n", nome2);
                } else {
                    printf("Empate! \n\n");
                }
            
                if (escolha2_jogador == 1){
                    if (escolha1_jogador == 1) {
                        printf("Segundo atributo escolhido: Área \n\n");
                    } else {
                        printf("Segundo atributo escolhido: População \n\n");
                    }
                }

                else if (escolha2_jogador == 2){
                    if(escolha1_jogador < 2){
                        printf("Segundo atributo escolhido: PIB \n\n");
                    } else {
                        printf("Segundo atributo escolhido: Área \n\n");

                    }
                }

                else if (escolha2_jogador == 3){
                    if (escolha1_jogador < 3){
                        printf("Segundo atributo escolhido: Pontos turísticos \n\n");
                    } else {
                        printf("Segundo atributo escolhido: PIB \n\n");
                    }
                }

                else if (escolha2_jogador == 4){
                    if (escolha1_jogador < 4){
                        printf("Segundo atributo escolhido: Pontos turísticos \n\n");
                    } else {
                        printf("Segundo atributo escolhido: Densidade populacional \n\n");
                    }
                }

                else {
                    if (escolha1_jogador == 6){
                        printf("Segundo atributo escolhido: Densidade populacional \n\n");
                    } else {
                        printf("Segundo atributo escolhido: PIB per capita \n\n");
                    }
                }

            
            printf("Carta 1 - %s : ", nome1);
                if (carta1_atributo2 == populacao1 || carta1_atributo2 == pontos_tur1) {
                printf("%.0f \n", carta1_atributo2);
                }
                else if (carta1_atributo2 == area1) {
                printf("%.2f km² \n", carta1_atributo2);
                }
                else if (carta1_atributo2 == PIB1 || carta1_atributo2 == PIB_per_capita1){
                printf("R$ %.2f \n", carta1_atributo2);
                }
                else{
                printf("%.2f habitante/km² \n", carta1_atributo2);
                }
            printf("Carta 2 - %s : ", nome2);
                if (carta2_atributo2 == populacao2 || carta2_atributo2 == pontos_tur2) {
                printf("%.0f \n\n", carta2_atributo2);
                }
                else if (carta2_atributo2 == area2) {
                printf("%.2f km² \n\n", carta2_atributo2);
                }
                else if (carta2_atributo2 == PIB2 || carta2_atributo2 == PIB_per_capita2){
                printf("R$ %.2f \n\n", carta2_atributo2);
                }
                else{
                printf("%.2f habitante/km² \n\n", carta2_atributo2);
                }
        
                if(carta1_atributo2 > carta2_atributo2){
                    printf("Carta 1 - %s Venceu! \n\n", nome1);
                } else if (carta1_atributo2 < carta2_atributo2) {
                    printf("Carta 2 - %s Venceu! \n\n", nome2);
                } else {
                    printf("Empate! \n\n");
                }

            } else {
            printf("###      ERRO      ###");
            }
        } else {
            printf("###      ERRO      ###");
        }
        

        return 0;
    }