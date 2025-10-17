#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 3 - Menu Interativo e Comparação de Atributos
// Desenvolvido conforme os requisitos do nível intermediário.

int main() {
    // Estrutura básica de duas cartas (países)
    char nome1[50] = "Brasil";
    char nome2[50] = "Japão";

    int populacao1 = 214000000;
    int populacao2 = 125000000;

    float area1 = 8515767.0; // km²
    float area2 = 377975.0;  // km²

    float pib1 = 2.1; // em trilhões de dólares
    float pib2 = 4.2; // em trilhões de dólares

    int pontosTuristicos1 = 10;
    int pontosTuristicos2 = 15;

    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    int opcao;

    printf("===== SUPER TRUNFO - Comparacao de Paises =====\n");
    printf("\nCarta 1: %s", nome1);
    printf("\nCarta 2: %s\n", nome2);

    // Menu interativo
    printf("\nEscolha o atributo para comparacao:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Numero de Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("\nDigite sua opcao: ");
    scanf("%d", &opcao);

    printf("\n===== Resultado da Comparacao =====\n");

    switch(opcao) {
        case 1: // População
            printf("Atributo: Populacao\n");
            printf("%s: %d habitantes\n", nome1, populacao1);
            printf("%s: %d habitantes\n", nome2, populacao2);

            if (populacao1 > populacao2) {
                printf("\nVencedor: %s\n", nome1);
            } else if (populacao2 > populacao1) {
                printf("\nVencedor: %s\n", nome2);
            } else {
                printf("\nEmpate!\n");
            }
            break;

        case 2: // Área
            printf("Atributo: Area (km²)\n");
            printf("%s: %.2f km²\n", nome1, area1);
            printf("%s: %.2f km²\n", nome2, area2);

            if (area1 > area2) {
                printf("\nVencedor: %s\n", nome1);
            } else if (area2 > area1) {
                printf("\nVencedor: %s\n", nome2);
            } else {
                printf("\nEmpate!\n");
            }
            break;

        case 3: // PIB
            printf("Atributo: PIB (em trilhoes de dolares)\n");
            printf("%s: %.2f trilhoes\n", nome1, pib1);
            printf("%s: %.2f trilhoes\n", nome2, pib2);

            if (pib1 > pib2) {
                printf("\nVencedor: %s\n", nome1);
            } else if (pib2 > pib1) {
                printf("\nVencedor: %s\n", nome2);
            } else {
                printf("\nEmpate!\n");
            }
            break;

        case 4: // Pontos Turísticos
            printf("Atributo: Numero de Pontos Turisticos\n");
            printf("%s: %d pontos\n", nome1, pontosTuristicos1);
            printf("%s: %d pontos\n", nome2, pontosTuristicos2);

            if (pontosTuristicos1 > pontosTuristicos2) {
                printf("\nVencedor: %s\n", nome1);
            } else if (pontosTuristicos2 > pontosTuristicos1) {
                printf("\nVencedor: %s\n", nome2);
            } else {
                printf("\nEmpate!\n");
            }
            break;

        case 5: // Densidade Demográfica (menor vence)
            printf("Atributo: Densidade Demografica (hab/km²)\n");
            printf("%s: %.2f hab/km²\n", nome1, densidade1);
            printf("%s: %.2f hab/km²\n", nome2, densidade2);

            // Estrutura de decisão aninhada (if dentro de if)
            if (densidade1 < densidade2) {
                printf("\nVencedor: %s (menor densidade!)\n", nome1);
            } else if (densidade2 < densidade1) {
                printf("\nVencedor: %s (menor densidade!)\n", nome2);
            } else {
                printf("\nEmpate!\n");
            }
            break;

        default:
            printf("Opcao invalida! Escolha um numero de 1 a 5.\n");
            break;
    }

    printf("\n===== Fim da Comparacao =====\n");
    return 0;
}
