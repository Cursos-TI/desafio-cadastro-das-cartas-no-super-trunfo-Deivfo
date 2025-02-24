#include <stdio.h>

int main() {
    
    // DADOS CARTA 1
    char estado;
    char codcarta[4]; 
    char nomecidade[20]; 
    int populacao;
    float area;
    float densidedepopulacional;
    float PIB;
    float PIBpercapita;
    int ptsturisticos;      

    // DADOS CARTA 2
    char estado2;
    char codcarta2[4]; 
    char nomecidade2[20]; 
    int populacao2;
    float area2;
    float densidedepopulacional2;
    float PIB2;
    float PIBpercapita2;
    int ptsturisticos2;  

    // PEQUENA MENSAGEM DE BOAS VINDAS
    printf("Bem vindo ao Super Trufo! \n\n");

    // CADASTRO DA PRIMEIRA CARTA
    printf("Comece entrando com os dados da Carta 1: \n");

    printf("Digite o Codigo do estado: \n"); 
    scanf(" %c", &estado); 

    printf("Digite o Codigo da carta: \n"); 
    scanf("%3s", codcarta); 

    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]s", nomecidade);

    printf("Digite o numero populacional: \n");
    scanf("%i", &populacao);

    printf("Digite a area: \n");
    scanf("%f", &area);

    densidedepopulacional = populacao / area; // CÁLCULO DE DENSIDADE POPULACIONAL DA CARTA 1

    printf("Digite o PIB: \n");
    scanf("%f", &PIB);

    PIBpercapita = PIB / populacao; // CÁLCULO DE PIB PER CAPITA DA CARTA 1

    printf("Digite o numero de pontos turisticos: \n");
    scanf("%i", &ptsturisticos);
   
    printf("\n"); 

    // CADASTRO DA SEGUNDA CARTA
    printf("Entre com os dados da Carta 2: \n");    

    printf("Digite o Codigo do estado: \n"); 
    scanf(" %c", &estado2); 
  
    printf("Digite o Codigo da carta: \n"); 
    scanf("%3s", codcarta2); 
  
    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]s", nomecidade2);
  
    printf("Digite o numero populacional: \n");
    scanf("%i", &populacao2);
  
    printf("Digite a area: \n");
    scanf("%f", &area2);

    densidedepopulacional2 = populacao2 / area2; // CÁLCULO DE DENSIDADE POPULACIONAL DA CARTA 2
  
    printf("Digite o PIB: \n");
    scanf("%f", &PIB2);

    PIBpercapita2 = PIB2 / populacao2; // CÁLCULO DE PIB PER CAPITA DA CARTA 2
  
    printf("Digite o numero de pontos turisticos: \n");
    scanf("%i", &ptsturisticos2);

    printf("\n");

    //Adição de variavel de super poder
    float superpoder = populacao + area + (1.0 / densidedepopulacional) + PIB + PIBpercapita + ptsturisticos;
    float superpoder2 = populacao2 + area2 + (1.0 / densidedepopulacional2) + PIB2 + PIBpercapita2 + ptsturisticos2;

    // EXIBIÇÃO DOS DADOS 
    printf("------Carta 1------ \n");    
    printf("Estado: %c \n", estado); 
    printf("Codigo da carta: %s \n", codcarta); 
    printf("Nome da cidade: %s \n", nomecidade); 
    printf("Populacao: %i \n", populacao); 
    printf("Densidade Populacional: %.2f hab/km² \n", densidedepopulacional);
    printf("Area: %.2f km² \n", area); 
    printf("PIB: %.2f \n", PIB); 
    printf("PIB per capita: %.2f \n", PIBpercapita);
    printf("Numero de pontos turisticos: %i \n", ptsturisticos); 
    printf("Numero de pontos Super Poder: %.2f \n", superpoder); 

    printf("\n");

    printf("------Carta 2------ \n");   
    printf("Estado: %c \n", estado2); 
    printf("Codigo da carta: %s \n", codcarta2); 
    printf("Nome da cidade: %s \n", nomecidade2); 
    printf("Populacao: %i \n", populacao2); 
    printf("Densidade Populacional: %.2f hab/km² \n", densidedepopulacional2);
    printf("Area: %.2f km² \n", area2); 
    printf("PIB: %.2f \n", PIB2); 
    printf("PIB per capita: %.2f \n", PIBpercapita2);
    printf("Numero de pontos turisticos: %i \n", ptsturisticos2); 
    printf("Numero de pontos Super Poder: %.2f \n", superpoder2); 

    printf("\n");

    // Resultado por atributo... 1 para carta1 e 0 para carta2
    printf("------Resultado por atributo------ \n");
    printf("População: (%d) \n", populacao > populacao2);
    printf("Área: (%d) \n", area > area2);
    printf("Densidade: (%d) \n", densidedepopulacional < densidedepopulacional2);
    printf("PIB: (%d) \n", PIB > PIB2);
    printf("PIB per capita: (%d) \n", PIBpercapita > PIBpercapita2);
    printf("Número de pontos turísticos: (%d) \n", ptsturisticos > ptsturisticos2);
    printf("Super poder: (%d) \n", superpoder > superpoder2);

    printf("\n");

    // DECLARAÇÃO DA CARTA VENCEDORA 
    printf("------Resultado final------ \n");
    printf("Carta %d vencedora \n", (superpoder < superpoder2) + 1);
    printf("\n");
    
    return 0;
}

