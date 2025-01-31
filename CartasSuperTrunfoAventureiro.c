#include <stdio.h>


int main(){
    printf("Cartas Super Trunfo \n");

    int estado;
    char codigo;
    char cidade[50];
    float populacao;
    float area;
    int lugares;
    float pib, percapita, densidade;
    
    printf("Insira o estado: \n");
    scanf("%d", &estado);

    printf("Insira o codigo da carta: \n");
    scanf(" %c", &codigo);

    printf("Insira a cidade: \n");
    scanf(" %s", &cidade);

    printf("Insira a população: \n");
    scanf(" %f", &populacao);

    printf("Insira a quantidade de pontos turisticos: \n");
    scanf("%d", &lugares);

    printf("Insira a area: \n");
    scanf("%f", &area);

    printf("Insira o PIB da cidade:} \n");
    scanf("%f", &pib);

    densidade = populacao / area;
    percapita = pib / populacao;

    printf("*** CARTAS SUPERTRUNFO *** \n");
    printf("Código da carta: %c%d\n", codigo, estado);
    printf("Cidade: %s\n", cidade);
    printf("População: %f\n", populacao);
    printf("Área: %.3f\n", area);
    printf("Pontos: %d\n", lugares);
    printf("Densidade Populacional: %f\n", densidade);
    printf("PIB PER CAPITA: %f\n", percapita);
    
   
    
    }