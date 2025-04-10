#include "carta.h"

struct carta set_carta() {
    struct carta nova;

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", &nova.cidade);  

    printf("Digite a população: ");
    scanf("%d", &nova.populacao);

    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &nova.pib);

    printf("Digite a área (em km²): ");
    scanf("%d", &nova.area);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &nova.pontosTuristicos);

    nova.densidadePopulacional = (float)nova.populacao / nova.area;
    nova.pibPerCapita = nova.pib * 1000000 / nova.populacao; // PIB em reais por pessoa

    return nova;
}

void print_carta(struct carta *c) {
    printf("\n--- Informações da Cidade ---\n");
    printf("Cidade: %s\n", c->cidade);
    printf("População: %d\n", c->populacao);
    printf("PIB: R$ %.2f bilhões\n", c->pib);
    printf("Área: %d km²\n", c->area);
    printf("Pontos turísticos: %d\n", c->pontosTuristicos);
    printf("Densidade populacional: %.2f hab/km²\n", c->densidadePopulacional);
    printf("PIB per capita: R$ %.2f\n", c->pibPerCapita);
}

