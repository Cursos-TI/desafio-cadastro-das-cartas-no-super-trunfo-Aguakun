#include <stdio.h>


int main(){
    printf("--- Cartas Super Trunfo --- \n");

    int estado, lugares, lugares2, opcao, regras;
    char codigo;
    char cidade[50];
    float pib, percapita, densidade, superpoder, area, populacao;
    float pib2, percapita2, densidade2, superpoder2, area2, populacao2;
   


    printf(" *** Menu Principal ***\n");
    printf("1. Iniciar Jogo\n");
    printf("2. Ver Regras\n");
    printf("3. Sair\n");
    printf("Escolha uma opção:\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
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
        printf("\n");

         densidade = populacao / area;
         percapita = pib / populacao;

         superpoder = (float) lugares + area + pib;

    printf("*** CARTA 1 ***\n");
    printf("Código da carta: %c%d\n", codigo, estado);
    printf("Cidade: %s\n", cidade);
    printf("População: %f\n", populacao);
    printf("Área: %.3f\n", area);
    printf("Pontos: %d\n", lugares);
    printf("Densidade Populacional: %f\n", densidade);
    printf("PIB PER CAPITA: %f\n", percapita);
    printf("Super poder: %f\n", superpoder);
    printf("\n");

        printf("Insira os dados da carta 2\n");
        printf("Insira o estado: \n");
        scanf("%d", &estado);

        printf("Insira o codigo da carta: \n");
        scanf(" %c", &codigo);

        printf("Insira a cidade: \n");
        scanf(" %s", &cidade);

        printf("Insira a população: \n");
        scanf(" %f", &populacao2);

        printf("Insira a quantidade de pontos turisticos: \n");
        scanf(" %d", &lugares2);

        printf("Insira a area: \n");
        scanf(" %f", &area2);

        printf("Insira o PIB da cidade: \n");
        scanf("%f", &pib2);
        printf("\n");

    densidade2 = populacao2 / area2;
    percapita2 = pib2 / populacao2;

    superpoder2 = (float) lugares2 + area2 + pib2;

    printf("*** CARTA 2 *** \n");
    printf("Código da carta: %c%d\n", codigo, estado);
    printf("Cidade: %s\n", cidade);
    printf("População: %f\n", populacao2);
    printf("Área: %.3f\n", area2);
    printf("Pontos: %d\n", lugares2);
    printf("Densidade Populacional: %f\n", densidade2);
    printf("PIB PER CAPITA: %f\n", percapita2);
    printf("Super poder: %f\n", superpoder2);

        break;
    case 2:
        printf("### Regras do Jogo ###\n");
        printf("Vence a carta que tiver maior pontuação, exceto na densidade populacional, onde vence a menor.\n");
        break;
    case 3:
        printf("Saindo do jogo...\n");
        break;
        default:
        printf("Opção inválida!\n");
    }
   
    

   if(superpoder > superpoder2){
         printf("No Super Poder - Carta 1 Venceu!!!\n");
    }else{
        printf("No Super Poder - Carta 2 Venceu!!!\n");
}
    if(populacao > populacao2){
        printf("Na População - Carta 1 Venceu!!!\n");
    }else{
        printf("Na População - Carta 2 Venceu!!!\n");

    }

    if (densidade < densidade2){
        printf("Na Densidade - Carta 1 Venceu!!!\n");
    }else{
        printf("Na Densidade - Carta 2 Venceu!!!\n");
    }
    
   
}