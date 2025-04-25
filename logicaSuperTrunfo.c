#include <stdio.h>

int main() {
    // variáveis para armazenamento dos dados da carta número 1.
    char estado1[20];
    char codigo1[4];
    char cidade1[20];
    unsigned long int populacao1;
    float area1;
    long double pib1;
    int pTuristicos1;
    float pibPer1;
    float densidade1;
    float super1;

    // variáveis para armazenamento dos dados da carta número 2.
    char estado2[20];
    char codigo2[4];
    char cidade2[20];
    unsigned long int populacao2;
    float area2;
    long double pib2;
    int pTuristicos2;
    float pibPer2;
    float densidade2;
    float super2;

    // variavel que armazena a opção escolhida no menu
    int opcao1, opcao2;

    
    // comandos para solicitação e leitura dos dados inseridos pelo usuário, para a carta número1.
    printf("*** Carta 1 ***\n");
    printf("insira o estado: \n");
    scanf("%s", estado1);

    printf("insira o codigo da carta: \n");
    scanf("%s", codigo1);

    printf("insira a cidade: \n");
    scanf("%s", cidade1);

    printf("insira a população: \n");
    scanf("%lu", &populacao1);

    printf("insira a área da cidade: \n");
    scanf("%f", &area1);

    printf("insira o PIB: \n");
    scanf("%Lf", &pib1);

    printf("insira o número de pontos turísticos: \n");
    scanf("%d", &pTuristicos1);

    // operadores para calculo o pib per capta e densidade demografica carta 1.
    pibPer1 = (float) pib1 / populacao1;
    densidade1 = (float) populacao1 / area1;

    // calculo do super poder da carta 1
    super1 = (float) populacao1 + area1 + pib1 + pTuristicos1 + pibPer1 + (- densidade1);
    
    // comandos para solicitação e leitura dos dados da carta 2.
    printf("\n*** Carta 2 *** \n");
    printf("insira o estado: \n");
    scanf("%s", estado2);

    printf("insira o código: \n");
    scanf("%s", codigo2);

    printf("insira a cidade: \n");
    scanf("%s", cidade2);

    printf("insira a população: \n");
    scanf("%lu", &populacao2);

    printf("insira a área: \n");
    scanf("%f", &area2);

    printf("insira o PIB: \n");
    scanf("%Lf", &pib2);

    printf("insira o número de pontos turísticos: \n");
    scanf("%d", &pTuristicos2);

    // operadores para calculo do pib per capta e densidade demografica carta 2.
    pibPer2 = (float) pib2 / populacao2;
    densidade2 = (float) populacao2 / area2;

    // calculo do super poder da carta 2
    super2 = populacao2 + area2 + pib2 + pTuristicos2 + pibPer2 + (- densidade2);

    
    // impressão da carta 1
    printf("______________________________________\n");
    printf("\n*** Carta 1 *** \n");

    printf("estado: %s\n", estado1);
    printf("código: %s\n", codigo1);
    printf("cidade: %s\n", cidade1);
    printf("população: %lu\n", populacao1);
    printf("área: %.2f km²\n", area1);
    printf("PIB: %.2Lf reais\n", pib1);
    printf("pontos turísticos: %d\n", pTuristicos1);
    printf("PIB Per Capta: %.2f Reais\n", pibPer1);
    printf("Densidade demográfica: %.2f hab/km²\n", densidade1);
    printf("super poder: %.2f\n", super1);
    printf("______________________________________\n");
    

    // impressão da carta 2
    printf("\n*** Carta 2 *** \n");

    printf("estado: %s\n", estado2);
    printf("código: %s\n", codigo2);
    printf("cidade: %s\n", cidade2);
    printf("população: %lu\n", populacao2);
    printf("área: %.2f km²\n", area2);
    printf("PIB: %.2Lf reais\n", pib2);
    printf("pontos turísticos: %d\n", pTuristicos2);
    printf("PIB Per Capta: %.2f Reais\n", pibPer2);
    printf("Densidade demográfica: %.2f hab/km²\n", densidade2);
    printf("super poder: %.2f\n", super2);
    printf("________________________________________\n");

        // menu de comparação
        printf("\nEscolha o atributo para comparar:\n");
        printf("1. População\n");
        printf("2. Área\n");
        printf("3. PIB\n");
        printf("4. Número de pontos turísticos\n");
        printf("5. PIB per capita\n");
        printf("6. Densidade demográfica\n");
        printf("7. Super poder\n");
        printf("Digite a opção desejada: ");
        scanf("%d", &opcao1);
     
        printf("\n*** Resultado da Comparação ***\n");
    
        switch (opcao1) {
            case 1:
                if (populacao1 > populacao2) {
                    printf("%s (%s) venceu com maior população de (%lu habitantes).\n", cidade1, estado1, populacao1);
                    printf("%s (%s) perdeu com população de (%lu habitantes).\n", cidade2, estado2, populacao2);
                } else if (populacao2 > populacao1) {
                    printf("%s (%s) venceu com maior população de (%lu habitantes).\n", cidade2, estado2, populacao2);
                    printf("%s (%s) perdeu com população de (%lu habitantes).\n", cidade1, estado1, populacao1);
                } else {
                    printf("Empate: ambas as cidades têm (%lu habitantes).\n", populacao1);
                }
                break;
    
            case 2:
                if (area1 > area2) {
                    printf("%s (%s) venceu com maior área (%.2f km²).\n", cidade1, estado1, area1);
                    printf("%s (%s) perdeu com área de (%.2f km²).\n", cidade2, estado2, area2);
                } else if (area2 > area1) {
                    printf("%s (%s) venceu com maior área (%.2f km²).\n", cidade2, estado2, area2);
                    printf("%s (%s) perdeu com área de (%.2f km²).\n", cidade1,estado1, area1);
                } else {
                    printf("Empate: ambas as cidades têm área de (%.2f km²).\n", area1);
                }
                break;
    
            case 3:
                if (pib1 > pib2) {
                    printf("%s (%s) venceu com maior PIB (%.2Lf Reais).\n", cidade1, estado1, pib1);
                    printf("%s (%s) perdeu com PIB de (%.2Lf Reais).\n", cidade2, estado2, pib2);
                } else if (pib2 > pib1) {
                    printf("%s (%s) venceu com maior PIB (%.2Lf Reais).\n", cidade2, estado2, pib2);
                    printf("%s (%s) perdeu com PIB de (%.2Lf Reais).\n", cidade1, estado1, pib1);
                } else {
                    printf("Empate: ambas as cidades têm PIB de (%.2Lf Reais).\n", pib1);
                }
                break;
    
            case 4:
                if (pTuristicos1 > pTuristicos2) {
                    printf("%s (%s) venceu com mais pontos turísticos (%d).\n", cidade1, estado1, pTuristicos1);
                    printf("%s (%s) perdeu com (%d) pontos turísticos.\n", cidade2, estado2, pTuristicos2);
                } else if (pTuristicos2 > pTuristicos1) {
                    printf("%s (%s) venceu com mais pontos turísticos (%d).\n", cidade2, estado2, pTuristicos2);
                    printf("%s (%s) perdeu com (%d) pontos turísticos.\n", cidade1, estado1, pTuristicos1);
                } else {
                    printf("Empate: ambas têm (%d) pontos turísticos.\n", pTuristicos1);
                }
                break;
    
            case 5:
                if (pibPer1 > pibPer2) {
                    printf("%s (%s) venceu com maior PIB per capita (%.2f Reais).\n", cidade1, estado1, pibPer1);
                    printf("%s (%s) perdeu com PIB per capita de (%.2f Reais).\n", cidade2, estado2, pibPer2);
                } else if (pibPer2 > pibPer1) {
                    printf("%s (%s) venceu com maior PIB per capita (%.2f Reais).\n", cidade2, estado2, pibPer2);
                    printf("%s (%s) perdeu com PIB per capita de (%.2f Reais).\n", cidade1, estado1, pibPer1);
                } else {
                    printf("Empate: ambas têm PIB per capita de (%.2f Reais).\n", pibPer1);
                }
                break;
    
            case 6:
                if (densidade1 < densidade2) {
                    printf("%s (%s) venceu com menor densidade demográfica (%.2f hab/km²).\n", cidade1, estado1, densidade1);
                    printf("%s (%s) perdeu com densidade de (%.2f hab/km²).\n", cidade2, estado2, densidade2);
                } else if (densidade2 < densidade1) {
                    printf("%s (%s) venceu com menor densidade demográfica (%.2f hab/km²).\n", cidade2, estado2, densidade2);
                    printf("%s (%s) perdeu com densidade de (%.2f hab/km²).\n", cidade1, estado1, densidade1);
                } else {
                    printf("Empate: ambas têm densidade demográfica de (%.2f hab/km²).\n", densidade1);
                }
                break;
    
            case 7:
                if (super1 > super2) {
                    printf("%s (%s) venceu com maior super poder (%.2f).\n", cidade1, estado1, super1);
                    printf("%s (%s) perdeu com super poder de (%.2f).\n", cidade2, estado2, super2);
                } else if (super2 > super1) {
                    printf("%s (%s) venceu com maior super poder (%.2f).\n", cidade2, estado2, super2);
                    printf("%s (%s) perdeu com super poder de (%.2f).\n", cidade1, estado1, super1);
                } else {
                    printf("Empate: ambas têm super poder de (%.2f).\n", super1);
                }
                break;
    
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
        
        // menu de comparação 2
        printf("\nEscolha o atributo para comparar:\n");
        printf("1. População\n");
        printf("2. Área\n");
        printf("3. PIB\n");
        printf("4. Número de pontos turísticos\n");
        printf("5. PIB per capita\n");
        printf("6. Densidade demográfica\n");
        printf("7. Super poder\n");
        printf("Digite a opção desejada: ");
        scanf("%d", &opcao2);

        if (opcao1 == opcao2)
        {
            printf("Atributo já escolhido, selecione outro atributo\n");
        } else {
        
        
        switch (opcao2) {
            case 1:
                if (populacao1 > populacao2) {
                    printf("%s (%s) venceu com maior população de (%lu habitantes).\n", cidade1, estado1, populacao1);
                    printf("%s (%s) perdeu com população de (%lu habitantes).\n", cidade2, estado2, populacao2);
                } else if (populacao2 > populacao1) {
                    printf("%s (%s) venceu com maior população de (%lu habitantes).\n", cidade2, estado2, populacao2);
                    printf("%s (%s) perdeu com população de (%lu habitantes).\n", cidade1, estado1, populacao1);
                } else {
                    printf("Empate: ambas as cidades têm (%lu habitantes).\n", populacao1);
                }
                break;
    
            case 2:
                if (area1 > area2) {
                    printf("%s (%s) venceu com maior área (%.2f km²).\n", cidade1, estado1, area1);
                    printf("%s (%s) perdeu com área de (%.2f km²).\n", cidade2, estado2, area2);
                } else if (area2 > area1) {
                    printf("%s (%s) venceu com maior área (%.2f km²).\n", cidade2, estado2, area2);
                    printf("%s (%s) perdeu com área de (%.2f km²).\n", cidade1,estado1, area1);
                } else {
                    printf("Empate: ambas as cidades têm área de (%.2f km²).\n", area1);
                }
                break;
    
            case 3:
                if (pib1 > pib2) {
                    printf("%s (%s) venceu com maior PIB (%.2Lf Reais).\n", cidade1, estado1, pib1);
                    printf("%s (%s) perdeu com PIB de (%.2Lf Reais).\n", cidade2, estado2, pib2);
                } else if (pib2 > pib1) {
                    printf("%s (%s) venceu com maior PIB (%.2Lf Reais).\n", cidade2, estado2, pib2);
                    printf("%s (%s) perdeu com PIB de (%.2Lf Reais).\n", cidade1, estado1, pib1);
                } else {
                    printf("Empate: ambas as cidades têm PIB de (%.2Lf Reais).\n", pib1);
                }
                break;
    
            case 4:
                if (pTuristicos1 > pTuristicos2) {
                    printf("%s (%s) venceu com mais pontos turísticos (%d).\n", cidade1, estado1, pTuristicos1);
                    printf("%s (%s) perdeu com (%d) pontos turísticos.\n", cidade2, estado2, pTuristicos2);
                } else if (pTuristicos2 > pTuristicos1) {
                    printf("%s (%s) venceu com mais pontos turísticos (%d).\n", cidade2, estado2, pTuristicos2);
                    printf("%s (%s) perdeu com (%d) pontos turísticos.\n", cidade1, estado1, pTuristicos1);
                } else {
                    printf("Empate: ambas têm (%d) pontos turísticos.\n", pTuristicos1);
                }
                break;
    
            case 5:
                if (pibPer1 > pibPer2) {
                    printf("%s (%s) venceu com maior PIB per capita (%.2f Reais).\n", cidade1, estado1, pibPer1);
                    printf("%s (%s) perdeu com PIB per capita de (%.2f Reais).\n", cidade2, estado2, pibPer2);
                } else if (pibPer2 > pibPer1) {
                    printf("%s (%s) venceu com maior PIB per capita (%.2f Reais).\n", cidade2, estado2, pibPer2);
                    printf("%s (%s) perdeu com PIB per capita de (%.2f Reais).\n", cidade1, estado1, pibPer1);
                } else {
                    printf("Empate: ambas têm PIB per capita de (%.2f Reais).\n", pibPer1);
                }
                break;
    
            case 6:
                if (densidade1 < densidade2) {
                    printf("%s (%s) venceu com menor densidade demográfica (%.2f hab/km²).\n", cidade1, estado1, densidade1);
                    printf("%s (%s) perdeu com densidade de (%.2f hab/km²).\n", cidade2, estado2, densidade2);
                } else if (densidade2 < densidade1) {
                    printf("%s (%s) venceu com menor densidade demográfica (%.2f hab/km²).\n", cidade2, estado2, densidade2);
                    printf("%s (%s) perdeu com densidade de (%.2f hab/km²).\n", cidade1, estado1, densidade1);
                } else {
                    printf("Empate: ambas têm densidade demográfica de (%.2f hab/km²).\n", densidade1);
                }
                break;
    
            case 7:
                if (super1 > super2) {
                    printf("%s (%s) venceu com maior super poder (%.2f).\n", cidade1, estado1, super1);
                    printf("%s (%s) perdeu com super poder de (%.2f).\n", cidade2, estado2, super2);
                } else if (super2 > super1) {
                    printf("%s (%s) venceu com maior super poder (%.2f).\n", cidade2, estado2, super2);
                    printf("%s (%s) perdeu com super poder de (%.2f).\n", cidade1, estado1, super1);
                } else {
                    printf("Empate: ambas têm super poder de (%.2f).\n", super1);
                }
                break;
    
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    }

    
        return 0;
    }
