#include <stdio.h>

int main() {
    // Carta 1
    char estado1;
    char codigo1[4];
    char cidade1[50];
    unsigned long int populacao1;
    float area1, pib1;
    int pontosTuristicos1;
    float densidade1, pibPerCapita1, superPoder1;

    // Carta 2
    char estado2;
    char codigo2[4];
    char cidade2[50];
    unsigned long int populacao2;
    float area2, pib2;
    int pontosTuristicos2;
    float densidade2, pibPerCapita2, superPoder2;

    // Entrada de dados da Carta 1
    printf("Cadastro da Carta 1:\n");
    printf("Digite o Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Digite o Codigo da Carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("Digite a Populacao: ");
    scanf("%lu", &populacao1);

    printf("Digite a Area (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhoes de reais): ");
    scanf("%f", &pib1);

    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // Cálculos da Carta 1
    densidade1 = (float)populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000.0f) / (float)populacao1;
    superPoder1 = (float)populacao1 + area1 + (pib1 * 1000000000.0f) 
                  + (float)pontosTuristicos1 + pibPerCapita1 + (1.0f / densidade1);

    //Entrada de dados da Carta 2
    printf("\nCadastro da Carta 2:\n");
    printf("Digite o Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o Codigo da Carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Digite a Populacao: ");
    scanf("%lu", &populacao2);

    printf("Digite a Area (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhoes de reais): ");
    scanf("%f", &pib2);

    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos da Carta 2
    densidade2 = (float)populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000.0f) / (float)populacao2;
    superPoder2 = (float)populacao2 + area2 + (pib2 * 1000000000.0f) 
                  + (float)pontosTuristicos2 + pibPerCapita2 + (1.0f / densidade2);

    // Comparação das cartas
    printf("\n=== Comparacao de Cartas ===\n");

    printf("Populacao: %s\n", (populacao1 > populacao2) ? "Carta 1 venceu" : "Carta 2 venceu");
    printf("Area: %s\n", (area1 > area2) ? "Carta 1 venceu" : "Carta 2 venceu");
    printf("PIB: %s\n", (pib1 > pib2) ? "Carta 1 venceu" : "Carta 2 venceu");
    printf("Pontos Turisticos: %s\n", (pontosTuristicos1 > pontosTuristicos2) ? "Carta 1 venceu" : "Carta 2 venceu");
    printf("Densidade Populacional: %s\n", (densidade1 < densidade2) ? "Carta 1 venceu" : "Carta 2 venceu");
    printf("PIB per Capita: %s\n", (pibPerCapita1 > pibPerCapita2) ? "Carta 1 venceu" : "Carta 2 venceu");
    printf("Super Poder: %s\n", (superPoder1 > superPoder2) ? "Carta 1 venceu" : "Carta 2 venceu");

    return 0;
}
