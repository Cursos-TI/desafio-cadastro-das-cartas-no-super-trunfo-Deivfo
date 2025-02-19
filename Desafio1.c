#include <stdio.h>

int main() {
    char estado;
    char codcarta[4]; 
    char nomecidade[20]; 
    int populacao;
    float area;
    float PIB;
    int ptsturisticos;       

    // Entrada de dados
    printf("Digite o Codigo do estado: \n"); 
    scanf(" %c", &estado); 

    printf("Digite o Codigo da carta: \n"); 
    scanf("%3s", codcarta); 

    printf("Digite o nome da cidade: \n");
    scanf("%s",nomecidade);

    printf("Digite o numero populacional: \n");
    scanf("%i", &populacao);

    printf("Digite a area: \n");
    scanf("%f", &area);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB);

    printf("Digite o numero de pontos turisticos: \n");
    scanf("%i", &ptsturisticos);

    // Exibição dos dados
    printf("Estado: %c \n", estado); 
    printf("Codigo da carta: %s \n", codcarta); 
    printf("Nome da cidade: %s \n", nomecidade); 
    printf("Populacao: %i \n", populacao); 
    printf("Area: %.2f km² \n", area); 
    printf("PIB: %.2f \n", PIB); 
    printf("Numero de pontos turisticos: %i \n", ptsturisticos); 
 
    return 0;
}
