#include <stdio.h>
    
int main(){
    char estado1[30];
    char codigo1[20];
    char cidade1[30];
    int populacao1;
    float area1;
    float pib1;
    int pontos1;
    float densidade1;
    float percapta1;
    char estado2[30];
    char codigo2[20];
    char cidade2[30];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;
    float densidade2;
    float percapta2;
    

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

        densidade1=populacao1/area1;
        densidade2=populacao2/area2;
        percapta1= pib1/populacao1;
        percapta2= pib2/populacao2;



    printf("Voce completou as informacoes, segue abaixo as iformacoes das cartas\n");  
    printf("Estado da carta 1: %s\n", estado1);
    printf("Codigo da carta 1: %s\n", codigo1);
    printf("Cidade da carta 1: %s\n", cidade1);
    printf("Populacao da carta 1: %d\n", populacao1);
    printf("Tamanho da carta 1: %.2f\n", area1);
    printf("Pib da carta 1: %.2f\n", pib1);
    printf("Pontos turisticos da carta 1: %d\n", pontos1);
    printf("Densidade populacional carta 1: %.2f\n", densidade1);
    printf("Pib per capta carta 1: %.2f\n", percapta1);
    printf("Estado da carta 2: %s\n", estado2);
    printf("Estado da carta 2: %s\n", estado2);
    printf("Codigo da carta 2: %s\n", codigo2);
    printf("Cidade da carta 2: %s\n", cidade2);
    printf("Populacao da carta 2: %d\n", populacao2);
    printf("Tamanho da carta 2: %.2f\n", area2);
    printf("Pib da carta 2: %.2f\n", pib2);
    printf("pontos turisticos da carta 2: %d\n", pontos2);
    printf("Densidade populacional carta 1: %.2f\n", densidade2);
    printf("Pib per capta carta 2: %.2f\n", percapta2);
        
    
    if (pib1 > pib2) {
    printf("carta 1 venceu com o pib de %.2f\n", pib1);
  } else {
    printf("carta 2 venceu com o pib de %.2f\n", pib2);
  }
    return 0;
    }    
    

