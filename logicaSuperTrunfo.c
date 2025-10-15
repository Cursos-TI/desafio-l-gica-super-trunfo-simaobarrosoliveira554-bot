#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    char estado1[3], estado2[3];
    char codigo1[4], codigo2[4];
    char nomeCidade1[50], nomeCidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    float densidade1, densidade2;
    float pibPerCapita1, pibPerCapita2;

    // Cadastro das Cartas:
    printf("===== Cadastro da Carta 1 =====\n");
    printf("Estado (ex: SP): ");
    scanf("%2s", estado1);
    printf("Codigo da carta (ex: A01): ");
    scanf("%3s", codigo1);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", nomeCidade1);
    printf("Populacao: ");
    scanf("%d", &populacao1);
    printf("Area (em km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    densidade1 = populacao1 / area1;
    pibPerCapita1 = pib1 * 1000000000 / populacao1;

    printf("\n===== Cadastro da Carta 2 =====\n");
    printf("Estado (ex: RJ): ");
    scanf("%2s", estado2);
    printf("Codigo da carta (ex: B02): ");
    scanf("%3s", codigo2);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", nomeCidade2);
    printf("Populacao: ");
    scanf("%d", &populacao2);
    printf("Area (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    densidade2 = populacao2 / area2;
    pibPerCapita2 = pib2 * 1000000000 / populacao2;

    // Comparação de Cartas:
    // Neste exemplo, o atributo escolhido é o PIB per capita.
    // Você pode alterar o atributo abaixo se desejar comparar outro.
    printf("\n===== Comparacao de Cartas =====\n");
    printf("Atributo utilizado: PIB per capita\n");

    printf("\nCarta 1 - %s (%s): R$ %.2f por habitante", nomeCidade1, estado1, pibPerCapita1);
    printf("\nCarta 2 - %s (%s): R$ %.2f por habitante\n", nomeCidade2, estado2, pibPerCapita2);

    // Estrutura de decisão com if e if-else
    if (pibPerCapita1 > pibPerCapita2) {
        printf("\nResultado: Carta 1 (%s) venceu!\n", nomeCidade1);
    } else if (pibPerCapita2 > pibPerCapita1) {
        printf("\nResultado: Carta 2 (%s) venceu!\n", nomeCidade2);
    } else {
        printf("\nEmpate! As duas cidades possuem o mesmo PIB per capita.\n");
    }

    // Exibição dos Resultados:
    printf("\n===== Detalhes Adicionais =====\n");
    printf("Carta 1 - Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("Carta 2 - Densidade Populacional: %.2f hab/km²\n", densidade2);

    return 0;
}
