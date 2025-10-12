#include <stdio.h>
    
int main(){
    char estado1[30];
    char codigo1[20];
    char cidade1[30];
    int populacao1;
    float area1;
    float pib1;
    int pontos1;
    char estado2[30];
    char codigo2[20];
    char cidade2[30];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;


    printf("Aqui voce colocara informacoes sobre a carta numero 1. \n Qual o seu estado ?\n");
        scanf("%s", &estado1);

    printf("qual o codigo do seu estado ?\n");
        scanf("%s", &codigo1);

    printf("qual o nome da cidade do estado ?\n");
        scanf("%s", &cidade1);

    printf("Qual o numero total da populacao do estado ?\n");
        scanf("%d", &populacao1);
    
    printf("Qual tamanho da estado em km2 ?\n");
        scanf("%f", &area1);

    printf("qual o Pib desse estado ?\n");
        scanf("%f", &pib1);
    
    
    printf("quantos pontos turisticos tem o estado ?\n");
        scanf("%d", &pontos2);
    
    printf("Parabens, voce preencheu a carta 1, vamos para a carta 2 ?\n");

    printf("Qual o seu estado ?\n");
        scanf("%s", &estado2);

    printf("qual o codigo do seu estado ?\n");
        scanf("%s", &codigo2);

    printf("qual o nome da cidade do estado ?\n");
        scanf("%s", &cidade2);

    printf("Qual o numero total da populacao do estado ?\n");
        scanf("%d", &populacao2);
    
    printf("Qual tamanho da estado em km2 ?\n");
        scanf("%f", &area2);

    printf("qual o Pib desse estado ?\n");
        scanf("%f", &pib2);
    
    
    printf("quantos pontos turisticos tem o estado ?\n");
        scanf("%d", &pontos2);
    
    printf("Voce completou as informacoes, segue abaixo as iformacoes das cartas\n");
    
    

    printf("estado da carta 1: %s\n", estado1);
    printf("codigo da carta 1: %s\n", codigo1);
    printf("cidade da carta 1: %s\n", cidade1);
    printf("populacao da carta 1: %d\n", populacao1);
    printf("tamanho da carta 1: %.2f\n", area1);
    printf("Pib da carta 1: %.2f\n", pib1);
    printf("pontos turisticos da carta 1: %d\n", pontos1);
    printf("estado da carta 2: %s\n", estado2);
    printf("estado da carta 2: %s\n", estado2);
    printf("codigo da carta 2: %s\n", codigo2);
    printf("cidade da carta 2: %s\n", cidade2);
    printf("populacao da carta 2: %d\n", populacao2);
    printf("tamanho da carta 2: %.2f\n", area2);
    printf("Pib da carta 2: %.2f\n", pib2);
    printf("pontos turisticos da carta 2: %d\n", pontos2);
    
    return 0;



}