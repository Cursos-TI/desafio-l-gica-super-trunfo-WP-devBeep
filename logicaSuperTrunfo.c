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
    printf("*** Carta 2 *** \n");
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
    printf("*** Carta 1 *** \n");

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
    printf("*** Carta 2 *** \n");

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

    // ipressão do resultado das comparações de cartas
    printf("*** comparação das cartas (atributo: área)*** \n");

    printf("Carta 1: %s (%s) - Área: %.2f km² \n", cidade1, estado1, area1);
    printf("Carta 2: %s (%s) - Área: %.2f km² \n", cidade2, estado2, area2);

    if(area1 > area2){
        printf("A carta vencedora é: %s (%s) %.2f km² \n", cidade1, estado1, area1);
    } else {
        printf("A cidade vencedora é: %s (%s) %.2f km² \n", cidade2, estado2, area2);
    }
    
    printf("Parabéns \n");
    
    return 0;
}

