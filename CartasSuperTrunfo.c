#include <stdio.h>

int main() {

//carta 1
    char estado; 
    char codigocarta[4]; 
    char cidade[50];

    int populacao;
    int nturista;

    float area;
    float pib;
//carta 2
    char estado2; 
    char codigocarta2[4]; 
    char cidade2[50];

    int populacao2;
    int nturista2;

    float area2;
    float pib2;

    printf("Digite uma letra de A a H representando um estado: \n");
    scanf(" %c", &estado);
    printf("Digite a letra do estado seguidade um numero de 01 a 04 (ex: A01, B03): \n");
    scanf("%s", codigocarta);
    printf("Digite a Cidade: \n");
    scanf(" %[^\n]", cidade);
    printf("Digite o Numero de habitantes da cidade: \n");
    scanf("%d", &populacao);
    printf("Digite a quantidade de pontos turísticos na cidade: \n");
    scanf("%d", &nturista);

    printf("Digite a área da cidade em quilômetros quadrados: \n");
    scanf("%f", &area);
    printf("Digite o Produto Interno Bruto da cidade:");
    scanf(" %f", &pib);

    //Transição
    printf("\n>>Faça outra CARTA<<\n");
    //carta 2

    printf("\nDigite uma letra de A a H representando um estado: \n");
    scanf(" %c", &estado2);
    printf("Digite a letra do estado seguidade um numero de 01 a 04 (ex: A01, B03): \n");
    scanf("%s", codigocarta2);
    printf("Digite a Cidade: \n");
    scanf(" %[^\n]", cidade2);
    printf("Digite o Numero de habitantes da cidade: \n");
    scanf("%d", &populacao2);
    printf("Digite a quantidade de pontos turísticos na cidade: \n");
    scanf("%d", &nturista2);

    printf("Digite a área da cidade em quilômetros quadrados: \n");
    scanf("%f", &area2);
    printf("Digite o Produto Interno Bruto da cidade:");
    scanf(" %f", &pib2);

    printf("Carta 1: \n");
    printf("\nEstado: %c\n", estado);
    printf("Codigo: %s\n", codigocarta);
    printf("Nome da Cidade: %s \n", cidade);
    printf("Populacao: %d\n", populacao);
    printf("Area: %.2f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Numero de Pontos Turisticos: %d\n", nturista);

    printf("\nCarta 2: \n");
    printf("\nEstado: %c\n", estado2);
    printf("Codigo: %s\n", codigocarta2);
    printf("Nome da Cidade: %s \n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", nturista2);


        return 0;



}