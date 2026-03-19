#include <stdio.h>

int main() {

// Variaveis Carta 1
    char estado; 
    char codigocarta[4]; 
    char cidade[50];

    unsigned long int populacao;
    int nturista;

    float area;
    float pib;

// Variaveis Carta 2
    char estado2; 
    char codigocarta2[4]; 
    char cidade2[50];

    unsigned long int populacao2;
    int nturista2;

    float area2;
    float pib2;

    //////////////// Entrada De Dados Carta 1

    printf("Digite uma letra de A a H representando um estado: \n");
    scanf(" %c", &estado);
    printf("Digite a letra do estado seguidade um numero de 01 a 04 (ex: A01, B03): \n");
    scanf("%s", codigocarta);
    printf("Digite a Cidade: \n");
    scanf(" %[^\n]", cidade);
    printf("Digite o Numero de habitantes da cidade: \n");
    scanf("%lu", &populacao);

    printf("Digite a área da cidade em quilômetros quadrados: \n");
    scanf("%f", &area);
    printf("Digite o Produto Interno Bruto da cidade: \n");
    scanf(" %f", &pib);

    printf("Digite a quantidade de pontos turísticos na cidade: \n");
    scanf("%d", &nturista);

    ////// Transiçao Para Cadastro Carta 2
    printf("\n>>Faça outra CARTA<<\n");

    //////////// Entrada de Dados Carta 2

    printf("\nDigite uma letra de A a H representando um estado: \n");
    scanf(" %c", &estado2);
    printf("Digite a letra do estado seguidade um numero de 01 a 04 (ex: A01, B03): \n");
    scanf("%s", codigocarta2);
    printf("Digite a Cidade: \n");
    scanf(" %[^\n]", cidade2);
    printf("Digite o Numero de habitantes da cidade: \n");
    scanf("%lu", &populacao2);

    printf("Digite a área da cidade em quilômetros quadrados: \n");
    scanf("%f", &area2);
    printf("Digite o Produto Interno Bruto da cidade: \n");
    scanf(" %f", &pib2);

    printf("Digite a quantidade de pontos turísticos na cidade: \n");
    scanf("%d", &nturista2);

// Após Entrada Dos Dados Calcular:

    float pibpercapita = (pib * 1000000000.0f) / populacao;  
    float densidadep = populacao / area;
    float pibpercapita2 = (pib2 * 1000000000.0f) / populacao2;  
    float densidadep2 = populacao2 / area2;
    float superpoder = (float) populacao + area + pib + nturista + pibpercapita + (1.0f / densidadep);
    float superpoder2 = (float) populacao2 + area2 + pib2 + nturista2 + pibpercapita2 + (1.0f / densidadep2);
    int resultado = superpoder > superpoder2;
///////////////////////// Print Das Informaçoes Carta 1 

    printf("Carta 1: \n");
    printf("\nEstado: %c\n", estado);
    printf("Codigo: %s\n", codigocarta);
    printf("Nome da Cidade: %s \n", cidade);
    printf("Populacao: %lu\n", populacao);
    printf("Area: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Numero de Pontos Turisticos: %d\n", nturista);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadep);
    printf("PIB per Capita: %.2f reais\n", pibpercapita);

///////////////////////// Print Das Informaçoes Carta 2

    printf("\nCarta 2: \n");
    printf("\nEstado: %c\n", estado2);
    printf("Codigo: %s\n", codigocarta2);
    printf("Nome da Cidade: %s \n", cidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", nturista2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadep2);
    printf("PIB per Capita: %.2f reais\n", pibpercapita2);

///////////////////////// Comparação de Cartas

    printf("\n>>>>Duelo de Cartas<<<<\n");
    printf("\nPopulação: Carta 1 venceu (%d)\n", populacao > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib > pib2);
    printf("Ponto Turistico: Carta 1 venceu (%d)\n", nturista > nturista2);
    printf("Densidade Populacional: Carta 2 venceu (%d)\n", densidadep < densidadep2);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibpercapita > pibpercapita2);
    printf("Super Poder : Carta 1 Venceu (%d)\n", resultado);
    


        return 0; 



}