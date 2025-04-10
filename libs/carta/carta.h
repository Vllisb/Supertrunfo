#ifndef CARTA_H
#define CARTA_H

#include <stdio.h>

struct carta
{
    /* Informacoes da carta conforme atividade */
    /* com informações detalhadas sobre as cidades, utilizando variáveis, 
    operadores e funções de entrada e saída. Cada carta conterá dados essenciais 
    como: estado, código, nome da cidade, população, PIB, área e número de pontos
     turísticos. Além disso, você também calculará e adicionará propriedades derivadas, 
     como densidade populacional e PIB per capita,*/

     // MAior cidade com 27 caracteres no nome
    char cidade[27];
    int populacao;
    float pib;
    int area;
    int pontosTuristicos;
    float densidadePopulacional;
    float pibPerCapita;

};

struct carta set_carta();
void print_carta(struct carta *carta);

#endif

