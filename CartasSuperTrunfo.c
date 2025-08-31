#include <stdio.h>

int main(void) {
    /* Variáveis para os atributos das cartas */
    unsigned long int populacaoCarta1, populacaoCarta2;
    float areaCarta1, areaCarta2;
    float pibCarta1, pibCarta2;
    int pontosTuristicosCarta1, pontosTuristicosCarta2;

    /* Cadastro da Carta 1 */
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Digite a população (número de habitantes): ");
    scanf("%lu", &populacaoCarta1);
    printf("Digite a área (em km²): ");
    scanf("%f", &areaCarta1);
    printf("Digite o PIB (valor total): ");
    scanf("%f", &pibCarta1);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicosCarta1);

    /* Cadastro da Carta 2 */
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Digite a população (número de habitantes): ");
    scanf("%lu", &populacaoCarta2);
    printf("Digite a área (em km²): ");
    scanf("%f", &areaCarta2);
    printf("Digite o PIB (valor total): ");
    scanf("%f", &pibCarta2);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicosCarta2);

    /* Cálculo de atributos derivados */
    float densidadeCarta1     = (float)populacaoCarta1 / areaCarta1;
    float densidadeCarta2     = (float)populacaoCarta2 / areaCarta2;
    float pibPerCapitaCarta1  = pibCarta1       / populacaoCarta1;
    float pibPerCapitaCarta2  = pibCarta2       / populacaoCarta2;
    float superPoderCarta1    = populacaoCarta1
                              + areaCarta1
                              + pibCarta1
                              + pontosTuristicosCarta1
                              + pibPerCapitaCarta1
                              + (1.0f / densidadeCarta1);
    float superPoderCarta2    = populacaoCarta2
                              + areaCarta2
                              + pibCarta2
                              + pontosTuristicosCarta2
                              + pibPerCapitaCarta2
                              + (1.0f / densidadeCarta2);

    /* Exibição dos dados completos */
    printf("\n=== Dados das Cartas Cadastradas ===\n");

    printf("\n-- Carta 1 --\n");
    printf("População:             %lu habitantes\n", populacaoCarta1);
    printf("Área:                  %.2f km²\n", areaCarta1);
    printf("PIB:                   %.2f\n", pibCarta1);
    printf("Pontos Turísticos:     %d\n", pontosTuristicosCarta1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadeCarta1);
    printf("PIB per Capita:        %.2f\n", pibPerCapitaCarta1);

    printf("\n-- Carta 2 --\n");
    printf("População:             %lu habitantes\n", populacaoCarta2);
    printf("Área:                  %.2f km²\n", areaCarta2);
    printf("PIB:                   %.2f\n", pibCarta2);
    printf("Pontos Turísticos:     %d\n", pontosTuristicosCarta2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadeCarta2);
    printf("PIB per Capita:        %.2f\n", pibPerCapitaCarta2);

    /* Comparação entre as cartas */
    printf("\n=== Comparação de Atributos ===\n");

    /* População */
    if (populacaoCarta1 > populacaoCarta2) {
        printf("População: Carta 1 vence! (%lu x %lu)\n",
               populacaoCarta1, populacaoCarta2);
    } else if (populacaoCarta2 > populacaoCarta1) {
        printf("População: Carta 2 vence! (%lu x %lu)\n",
               populacaoCarta2, populacaoCarta1);
    } else {
        printf("População: Empate! (%lu x %lu)\n",
               populacaoCarta1, populacaoCarta2);
    }

    /* Área */
    if (areaCarta1 > areaCarta2) {
        printf("Área: Carta 1 vence! (%.2f km² x %.2f km²)\n",
               areaCarta1, areaCarta2);
    } else if (areaCarta2 > areaCarta1) {
        printf("Área: Carta 2 vence! (%.2f km² x %.2f km²)\n",
               areaCarta2, areaCarta1);
    } else {
        printf("Área: Empate! (%.2f km² x %.2f km²)\n",
               areaCarta1, areaCarta2);
    }

    /* PIB */
    if (pibCarta1 > pibCarta2) {
        printf("PIB: Carta 1 vence! (%.2f x %.2f)\n",
               pibCarta1, pibCarta2);
    } else if (pibCarta2 > pibCarta1) {
        printf("PIB: Carta 2 vence! (%.2f x %.2f)\n",
               pibCarta2, pibCarta1);
    } else {
        printf("PIB: Empate! (%.2f x %.2f)\n",
               pibCarta1, pibCarta2);
    }

    /* Pontos Turísticos */
    if (pontosTuristicosCarta1 > pontosTuristicosCarta2) {
        printf("Pontos Turísticos: Carta 1 vence! (%d x %d)\n",
               pontosTuristicosCarta1, pontosTuristicosCarta2);
    } else if (pontosTuristicosCarta2 > pontosTuristicosCarta1) {
        printf("Pontos Turísticos: Carta 2 vence! (%d x %d)\n",
               pontosTuristicosCarta2, pontosTuristicosCarta1);
    } else {
        printf("Pontos Turísticos: Empate! (%d x %d)\n",
               pontosTuristicosCarta1, pontosTuristicosCarta2);
    }

    /* Densidade Populacional (menor é melhor) */
    if (densidadeCarta1 < densidadeCarta2) {
        printf("Densidade: Carta 1 vence! (%.2f hab/km² x %.2f hab/km²)\n",
               densidadeCarta1, densidadeCarta2);
    } else if (densidadeCarta2 < densidadeCarta1) {
        printf("Densidade: Carta 2 vence! (%.2f hab/km² x %.2f hab/km²)\n",
               densidadeCarta2, densidadeCarta1);
    } else {
        printf("Densidade: Empate! (%.2f hab/km² x %.2f hab/km²)\n",
               densidadeCarta1, densidadeCarta2);
    }

    /* PIB per Capita */
    if (pibPerCapitaCarta1 > pibPerCapitaCarta2) {
        printf("PIB per Capita: Carta 1 vence! (%.2f x %.2f)\n",
               pibPerCapitaCarta1, pibPerCapitaCarta2);
    } else if (pibPerCapitaCarta2 > pibPerCapitaCarta1) {
        printf("PIB per Capita: Carta 2 vence! (%.2f x %.2f)\n",
               pibPerCapitaCarta2, pibPerCapitaCarta1);
    } else {
        printf("PIB per Capita: Empate! (%.2f x %.2f)\n",
               pibPerCapitaCarta1, pibPerCapitaCarta2);
    }

    /* Super Poder */
    if (superPoderCarta1 > superPoderCarta2) {
        printf("Super Poder: Carta 1 vence! (%.2f x %.2f)\n",
               superPoderCarta1, superPoderCarta2);
    } else if (superPoderCarta2 > superPoderCarta1) {
        printf("Super Poder: Carta 2 vence! (%.2f x %.2f)\n",
               superPoderCarta2, superPoderCarta1);
    } else {
        printf("Super Poder: Empate! (%.2f x %.2f)\n",
               superPoderCarta1, superPoderCarta2);
    }

    return 0;
}

