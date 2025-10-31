#include <stdio.h>

int main() {

    char estado1[3], cidade1[15], estado2[3], cidade2[15], resposta;
    int nturismo1, nturismo2, codigo, opcao1, opcao2;
    unsigned long int populacao1, populacao2;
    float area1, area2, pib1, pib2,densidade1, densidade2, pib_capta1, pib_capta2, super1, super2, comparacao1_1, comparacao1_2, comparacao2_1, comparacao2_2, resultado1, resultado2;

    printf("Bem vindo ao Super Trunfo de Cidades!\n");
    printf("Digite os dados da primeira carta:\n");

    // Cadastro da Carta 01

        printf("Carta 01\n");
        printf("Estado (sigla): ");
        scanf("%2s", estado1);
        printf("O código da sua carta é: %s01\n", estado1);
        printf("Digite o nome da cidade(sem espaços): ");
        scanf("%s", cidade1);
        printf("Digite o número de habitantes: ");
        scanf("%lu", &populacao1);
        printf("Digite a área(em km²): ");
        scanf("%f", &area1);
        printf("Digite o PIB: ");
        scanf("%f", &pib1);
        printf("Digite o número de pontos turísticos: ");
        scanf("%d", &nturismo1);
        printf("\n");
        densidade1 = ((float)populacao1 / area1); // Cálculo da densidade populacional da Carta 01
        pib_capta1 = (float)(pib1 / populacao1); // Cálculo do PIB per capita da Carta 01
        super1 = populacao1 + area1 + pib1 + (float)nturismo1 + pib_capta1 + (1.0f/densidade1); // Cálculo do valor Super Poder da Carta 01
        printf("Aqui estão os dados da sua carta:\n"); // Exibição dos dados da Carta 01
        printf("Carta 01 - %s01\n", estado1);
        printf("Cidade: %s\n", cidade1);
        printf("População: %lu\n", populacao1);
        printf("Área: %.2f km²\n", area1);
        printf("Densidade: %.2f habitantes/km²\n", densidade1);
        printf("PIB: %.2f \n", pib1);
        printf("PIB per capita: %.2f milhões\n", pib_capta1);
        printf("Número de pontos turísticos: %d\n", nturismo1);
        printf("Valor Super Poder: %.2f\n", super1);
        printf("\n");
        printf("Os dados estão corretos? [S/N]: "); // Confirmação dos dados da Carta 01
        scanf(" %c", &resposta);
            if (resposta == 'S' || resposta == 's') {
                printf("Dados confirmados!\n");
            } else {
                printf("Dados não confirmados. Por favor, reinicie o processo.\n");
                return 1;
            }
        printf("\n");

        do {
            printf("Digite os dados da segunda carta:\n"); // Cadastro da Carta 02
            printf("Carta 02\n");
            printf("Estado (sigla): ");
                scanf("%2s", estado2);
            printf("O código da sua carta é: %s02\n", estado2);
            printf("Digite o nome da cidade(sem espaços): ");
                scanf("%s", cidade2);
            printf("Digite o número de habitantes: ");
                scanf("%lu", &populacao2);
            printf("Digite a área(em km²): ");
                scanf("%f", &area2);
            printf("Digite o PIB: ");
                scanf("%f", &pib2);
            printf("Digite o número de pontos turísticos: ");
                scanf("%d", &nturismo2);
            printf("\n");
            densidade2 = ((float)populacao2 / area2); // Cálculo da densidade populacional da Carta 02
            pib_capta2 = (float)(pib2 / populacao2); // Cálculo do PIB per capita da Carta 02
            super2 = populacao2 + area2 + pib2 + (float)nturismo2 + pib_capta2 + (1.0f/densidade2); // Cálculo do valor Super Poder da Carta 02
            printf("Aqui estão os dados da sua carta:\n"); // Exibição dos dados da Carta 02
            printf("Carta 02 - %s02\n", estado2);
            printf("Cidade: %s\n", cidade2);
            printf("População: %lu\n", populacao2);
            printf("Área: %.2f km²\n", area2);
            printf("Densidade: %.2f habitantes/km²\n", densidade2);
            printf("PIB: %.2f\n", pib2);
            printf("PIB per capita: %.2f milhões\n", pib_capta2);
            printf("Número de pontos turísticos: %d\n", nturismo2);
            printf("Valor Super Poder: %.2f\n", super2);
            printf("\n");
            printf("Os dados estão corretos? [S/N]: "); // Confirmação dos dados da Carta 02
                scanf(" %c", &resposta);
            if (resposta == 'S' || resposta == 's') {
                printf("Dados confirmados!\n");
            } else {
            printf("Dados não confirmados. Por favor, cadastre novamente a Carta 02.\n");
            }

        } while (!(resposta == 'S' || resposta == 's'));

        printf("\n");
        printf("Aqui estão os dados das suas cartas:\n"); // Exibição dos dados das Cartas 01 e 02
        printf("\n");
        printf("Carta 01 - %s01\n", estado1);
        printf("Cidade: %s\n", cidade1);
        printf("População: %lu milhões\n", populacao1);
        printf("Área: %.2f km²\n", area1);
        printf("Densidade: %.2f habitantes/km²\n", densidade1);
        printf("PIB: %.2f bilhões\n", pib1);
        printf("PIB per capita: %.2f milhões\n", pib_capta1);
        printf("Número de pontos turísticos: %d\n", nturismo1);
        printf("Valor Super Poder: %.2f\n", super1);
        printf("\n");


        printf("Carta 02 - %s02\n", estado2);
        printf("Cidade: %s\n", cidade2);
        printf("População: %lu milhões\n", populacao2);
        printf("Área: %.2f km²\n", area2);
        printf("Densidade: %.2f habitantes/km²\n", densidade2);
        printf("PIB: %.2f bilhões\n", pib2);
        printf("PIB per capita: %.2f milhões\n", pib_capta2);
        printf("Número de pontos turísticos: %d\n", nturismo2);
        printf("Valor Super Poder: %.2f\n", super2);
        printf("\n");
        printf("=====================================\n");
        printf(" Escolha o primeiro atributo de comparação:\n"); 
        printf("=====================================\n");
        printf("1. População\n");
        printf("2. Área\n");
        printf("3. Densidade\n");
        printf("4. PIB\n");
        printf("5. Número de pontos turísticos\n");
        printf("6. PIB per capita\n");
        printf("7. Super Poder\n");
        printf("Digite o número do atributo escolhido: ");
        scanf("%d", &opcao1);
        printf("\n");
    do {
        printf("=====================================\n");
        printf(" Escolha o segundo atributo de comparação:\n"); 
        printf("=====================================\n");

        if (opcao1 != 1) printf("1. População\n");
        if (opcao1 != 2) printf("2. Área\n");
        if (opcao1 != 3) printf("3. Densidade\n");
        if (opcao1 != 4) printf("4. PIB\n");
        if (opcao1 != 5) printf("5. Número de pontos turísticos\n");
        if (opcao1 != 6) printf("6. PIB per capita\n");
        if (opcao1 != 7) printf("7. Super Poder\n");

        printf("Digite o número do atributo escolhido: ");
        scanf("%d", &opcao2);
        if (opcao2 == opcao1) printf("Você já escolheu esse atributo. Por favor, escolha outro.\n");
        printf("\n");
    } while (opcao2 == opcao1);
    
        printf("Resultado da comparação:\n");

        switch (opcao1) {
            case 1 : 
                comparacao1_1 = (float)populacao1;
                comparacao2_1 = (float)populacao2;
                break;
            case 2 :
                comparacao1_1 = (float)area1;
                comparacao2_1 = (float)area2;
                break;
            case 3 :
                comparacao1_1 = (float)densidade1;    
                comparacao2_1 = (float)densidade2;
                break;
            case 4 :
                comparacao1_1 = (float)pib1;        
                comparacao2_1 = (float)pib2;
                break;
            case 5 :
                comparacao1_1 = (float)nturismo1;
                comparacao2_1 = (float)nturismo2;
                break;
            case 6 :
                comparacao1_1 = (float)pib_capta1;
                comparacao2_1 = (float)pib_capta2;
                break;
            case 7 :
                comparacao1_1 = (float)super1;
                comparacao2_1 = (float)super2;
                break;

            default :
                printf("Opção inválida. Por favor, reinicie o jogo e escolha uma opção válida.\n");
        }

        switch (opcao2) {
            case 1 : 
                comparacao1_2 = (float)populacao1;
                comparacao2_2 = (float)populacao2;
                break;
            case 2 :
                comparacao1_2 = (float)area1;
                comparacao2_2 = (float)area2;
                break;
            case 3 :
                comparacao1_2 = (float)densidade1;    
                comparacao2_2 = (float)densidade2;
                break;
            case 4 :
                comparacao1_2 = (float)pib1;        
                comparacao2_2 = (float)pib2;
                break;
            case 5 :
                comparacao1_2 = (float)nturismo1;
                comparacao2_2 = (float)nturismo2;
                break;
            case 6 :
                comparacao1_2 = (float)pib_capta1;
                comparacao2_2 = (float)pib_capta2;
                break;
            case 7 :
                comparacao1_2 = (float)super1;
                comparacao2_2 = (float)super2;
                break;

            default :
                printf("Opção inválida. Por favor, reinicie o jogo e escolha uma opção válida.\n");
        }

        resultado1 = comparacao1_1 + comparacao2_1;
        resultado2 = comparacao1_2 + comparacao2_2;

        printf("Resultado da Carta 01: %.2f\n", resultado1);
        printf("Resultado da Carta 02: %.2f\n", resultado2);

        resultado1 > resultado2 ? printf("A Carta 01 (%s01 - %s) é a vencedora!\n", estado1, cidade1) : printf("A Carta 02 (%s02 - %s) é a vencedora!\n", estado2, cidade2);

        
        printf("\n");

        printf("Obrigado por jogar Super Trunfo de Cidades!\n");
        printf("Esperamos que tenha se divertido!\n");


    return 0;
}