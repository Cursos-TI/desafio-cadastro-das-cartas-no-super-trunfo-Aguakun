#include <stdio.h>


int main(){
    printf("Cartas Super Trunfo \n");

    int estado;
    char codigo;
    char cidade[50];
    float populacao;
    float area;
    int lugares;
    float pib, percapita, densidade, superpoder;

    printf("Insira os dados da carta 1\n");
    
    printf("Insira o estado: \n");
    scanf("%d", &estado);

    printf("Insira o codigo da carta: \n");
    scanf(" %c", &codigo);

    printf("Insira a cidade: \n");
    scanf(" %s", &cidade);

    printf("Insira a população: \n");
    scanf(" %f", &populacao);

    printf("Insira a quantidade de pontos turisticos: \n");
    scanf(" %d", &lugares);

    printf("Insira a area: \n");
    scanf(" %f", &area);

    printf("Insira o PIB da cidade: \n");
    scanf("%f", &pib);


    densidade = populacao / area;
    percapita = pib / populacao;

    superpoder = (float) lugares + area + pib;

    printf("*** CARTA 1 *** \n");
    printf("Código da carta: %c%d\n", codigo, estado);
    printf("Cidade: %s\n", cidade);
    printf("População: %f\n", populacao);
    printf("Área: %.3f\n", area);
    printf("Pontos: %d\n", lugares);
    printf("Densidade Populacional: %f\n", densidade);
    printf("PIB PER CAPITA: %f\n", percapita);
    printf("Super poder: %f\n", superpoder);

    printf("\n");

    //ABAIXO COMEÇA A CARTA 2

    int estado2;
    char codigo2;
    char cidade2[50];
    float populacao2;
    float area2;
    int lugares2;
    float pib2, percapita2, densidade2, superpoder2;


    printf("Insira os dados da carta 2 \n");
    
    printf("Insira o estado: \n");
    scanf("%d", &estado2);

    printf("Insira o codigo da carta: \n");
    scanf(" %c", &codigo2);

    printf("Insira a cidade: \n");
    scanf("%s", &cidade2);

    printf("Insira a população: \n");
    scanf("%f", &populacao2);

    printf("Insira a quantidade de pontos turisticos: \n");
    scanf("%d", &lugares2);

    printf("Insira a area: \n");
    scanf("%f", &area2);

    printf("Insira o PIB da cidade:} \n");
    scanf("%f", &pib2);


    densidade2 = populacao2 / area2;
    percapita2 = pib2 / populacao2;

    superpoder2 = (float) lugares2 + area2 + pib2;

    printf("*** CARTA 2 *** \n");
    printf("Código da carta: %c%d\n", codigo2, estado2);
    printf("Cidade: %s\n", cidade);
    printf("População: %.3f\n", populacao2);
    printf("Área: %.3f\n", area2);
    printf("Pontos: %d\n", lugares2);
    printf("Densidade Populacional: %f\n", densidade2);
    printf("PIB PER CAPITA: %f\n", percapita2);
    printf("Super poder: %f\n", superpoder2);
    
    printf("\n");

    printf("Carta 1 tem menor densidade: %d\n", densidade < densidade2);
    printf("Carta 1 tem maior super poder: %d\n", superpoder > superpoder2);
    
    
    
    
    }