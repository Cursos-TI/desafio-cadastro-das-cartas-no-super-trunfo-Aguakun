#include <stdio.h>


int main(){
    printf("Cartas Super Trunfo \n");

    int estado;
    char codigo;
    char cidade[50];
    int populacao;
    float area;
    int pontos;
    
    printf("Insira o estado: \n");
    scanf("%d", &estado);

    printf("Insira o codigo da carta: \n");
    scanf(" %c", &codigo);

    printf("Insira a cidade: \n");
    scanf("%s", &cidade);

    printf("Insira a população: \n");
    scanf(" %d", &populacao);

    
    scanf(" %f", &area);

    printf("Insira a quantidade de pontos turisticos: \n");
    scanf("%d", &pontos);

    printf("Insira a area: \n");
    scanf("%f", &area);

    printf("Código da carta: %c%d\n", codigo, estado);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %f\n", area);
    printf("Pontos: %d\n", pontos);
    
    
    
    }