#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
int main() {
    // Dados das cartas (pré-cadastradas)
    char nome1[50] = "Brasil";
    char nome2[50] = "Japão";

    int populacao1 = 214000000;
    int populacao2 = 125000000;

    float area1 = 8515767.0;
    float area2 = 377975.0;

    float pib1 = 2.1;  // trilhões de dólares
    float pib2 = 4.2;  // trilhões de dólares

    int pontosTuristicos1 = 10;
    int pontosTuristicos2 = 15;

    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    int atributo1, atributo2;
    float valorCarta1Atrib1 = 0, valorCarta2Atrib1 = 0;
    float valorCarta1Atrib2 = 0, valorCarta2Atrib2 = 0;
    float somaCarta1 = 0, somaCarta2 = 0;

    printf("===== SUPER TRUNFO - DESAFIO FINAL =====\n");
    printf("\nCarta 1: %s", nome1);
    printf("\nCarta 2: %s\n", nome2);

    // ===== MENU PARA O PRIMEIRO ATRIBUTO =====
    printf("\nEscolha o PRIMEIRO atributo para comparacao:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Numero de Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("Digite sua opcao: ");
    scanf("%d", &atributo1);

    // ===== MENU DINÂMICO PARA O SEGUNDO ATRIBUTO =====
    printf("\nEscolha o SEGUNDO atributo (diferente do primeiro):\n");
    for (int i = 1; i <= 5; i++) {
        if (i == atributo1) continue; // não mostra o atributo já escolhido
        switch (i) {
            case 1: printf("%d - Populacao\n", i); break;
            case 2: printf("%d - Area\n", i); break;
            case 3: printf("%d - PIB\n", i); break;
            case 4: printf("%d - Numero de Pontos Turisticos\n", i); break;
            case 5: printf("%d - Densidade Demografica\n", i); break;
        }
    }
    printf("Digite sua opcao: ");
    scanf("%d", &atributo2);

    // ===== VALIDAÇÃO DAS ESCOLHAS =====
    if (atributo1 == atributo2 || atributo1 < 1 || atributo1 > 5 || atributo2 < 1 || atributo2 > 5) {
        printf("\nErro: atributos invalidos ou repetidos. Tente novamente!\n");
        return 0;
    }

    printf("\n===== COMPARACAO DE CARTAS =====\n");

    // ===== COMPARAÇÃO DO PRIMEIRO ATRIBUTO =====
    switch (atributo1) {
        case 1:
            printf("Atributo 1: Populacao\n");
            valorCarta1Atrib1 = populacao1;
            valorCarta2Atrib1 = populacao2;
            break;
        case 2:
            printf("Atributo 1: Area\n");
            valorCarta1Atrib1 = area1;
            valorCarta2Atrib1 = area2;
            break;
        case 3:
            printf("Atributo 1: PIB (trilhoes de US$)\n");
            valorCarta1Atrib1 = pib1;
            valorCarta2Atrib1 = pib2;
            break;
        case 4:
            printf("Atributo 1: Numero de Pontos Turisticos\n");
            valorCarta1Atrib1 = pontosTuristicos1;
            valorCarta2Atrib1 = pontosTuristicos2;
            break;
        case 5:
            printf("Atributo 1: Densidade Demografica (hab/km²)\n");
            valorCarta1Atrib1 = densidade1;
            valorCarta2Atrib1 = densidade2;
            break;
    }

    printf("%s: %.2f\n", nome1, valorCarta1Atrib1);
    printf("%s: %.2f\n\n", nome2, valorCarta2Atrib1);

    // ===== COMPARAÇÃO DO SEGUNDO ATRIBUTO =====
    switch (atributo2) {
        case 1:
            printf("Atributo 2: Populacao\n");
            valorCarta1Atrib2 = populacao1;
            valorCarta2Atrib2 = populacao2;
            break;
        case 2:
            printf("Atributo 2: Area\n");
            valorCarta1Atrib2 = area1;
            valorCarta2Atrib2 = area2;
            break;
        case 3:
            printf("Atributo 2: PIB (trilhoes de US$)\n");
            valorCarta1Atrib2 = pib1;
            valorCarta2Atrib2 = pib2;
            break;
        case 4:
            printf("Atributo 2: Numero de Pontos Turisticos\n");
            valorCarta1Atrib2 = pontosTuristicos1;
            valorCarta2Atrib2 = pontosTuristicos2;
            break;
        case 5:
            printf("Atributo 2: Densidade Demografica (hab/km²)\n");
            valorCarta1Atrib2 = densidade1;
            valorCarta2Atrib2 = densidade2;
            break;
    }

    printf("%s: %.2f\n", nome1, valorCarta1Atrib2);
    printf("%s: %.2f\n\n", nome2, valorCarta2Atrib2);

    // ===== LÓGICA DE COMPARAÇÃO COM OPERADOR TERNÁRIO =====
    // Regra: maior vence, exceto densidade (menor vence)
    float resultado1Atrib1 = (atributo1 == 5) ?
        (valorCarta1Atrib1 < valorCarta2Atrib1 ? 1 : (valorCarta1Atrib1 > valorCarta2Atrib1 ? -1 : 0)) :
        (valorCarta1Atrib1 > valorCarta2Atrib1 ? 1 : (valorCarta1Atrib1 < valorCarta2Atrib1 ? -1 : 0));

    float resultado1Atrib2 = (atributo2 == 5) ?
        (valorCarta1Atrib2 < valorCarta2Atrib2 ? 1 : (valorCarta1Atrib2 > valorCarta2Atrib2 ? -1 : 0)) :
        (valorCarta1Atrib2 > valorCarta2Atrib2 ? 1 : (valorCarta1Atrib2 < valorCarta2Atrib2 ? -1 : 0));

    // ===== SOMA DOS ATRIBUTOS =====
    somaCarta1 = valorCarta1Atrib1 + valorCarta1Atrib2;
    somaCarta2 = valorCarta2Atrib1 + valorCarta2Atrib2;

    // ===== EXIBIÇÃO FINAL =====
    printf("===== RESULTADO FINAL =====\n");
    printf("%s - Soma dos atributos: %.2f\n", nome1, somaCarta1);
    printf("%s - Soma dos atributos: %.2f\n", nome2, somaCarta2);

    // Resultado com operador ternário
    (somaCarta1 > somaCarta2) ? printf("\nVencedor: %s!\n", nome1) :
    (somaCarta2 > somaCarta1) ? printf("\nVencedor: %s!\n", nome2) :
    printf("\nEmpate!\n");

    printf("\n===== Fim do Jogo =====\n");
    return 0;
}
