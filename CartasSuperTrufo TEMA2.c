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

    // Pequena mensagem de interação
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

    densidedepopulacional = populacao / area; 

    printf("Digite o PIB: \n");
    scanf("%f", &PIB);

    PIBpercapita = PIB / populacao; 

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

    densidedepopulacional2 = populacao2 / area2; 
  
    printf("Digite o PIB: \n");
    scanf("%f", &PIB2);

    PIBpercapita2 = PIB2 / populacao2; 
  
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

    // Comparação por atributos população
    printf("----------------------------------------------------\n"); 
    printf("Comparação de cartas: (Atributo: População): \n");
    

    printf("\n");
    printf("Carta 1 - %s (%s): %i \n",nomecidade,codcarta,populacao);
    printf("Carta 2 - %s (%s): %i \n",nomecidade2,codcarta2,populacao2);
    if (populacao>populacao2){
        printf("Resultado: Carta 1 %s (%s) venceu! \n", nomecidade,codcarta);}
    else {
        printf("Resultado: Carta 2 %s (%s) venceu! \n", nomecidade2,codcarta2);}


    // Comparação por atributos área
    printf("----------------------------------------------------\n"); 
    printf("Comparação de cartas: (Atributo: Área): \n");
   
    printf("\n");
    printf("Carta 1 - %s (%s): %f \n",nomecidade,codcarta,area);
    printf("Carta 2 - %s (%s): %f \n",nomecidade2,codcarta2,area2);
    if (area>area2){
        printf("Resultado: Carta 1 %s (%s) venceu! \n", nomecidade,codcarta);}
    else {
        printf("Resultado: Carta 2 %s (%s) venceu! \n", nomecidade2,codcarta2);}


    // Comparação por atributos PIB
    printf("----------------------------------------------------\n"); 
    printf("Comparação de cartas: (Atributo: PIB): \n");
   
    printf("\n");
    printf("Carta 1 - %s (%s): %f \n",nomecidade,codcarta,PIB);
    printf("Carta 2 - %s (%s): %f \n",nomecidade2,codcarta2,PIB2);
    if (PIB>PIB2){
        printf("Resultado: Carta 1 %s (%s) venceu! \n", nomecidade,codcarta);}
    else {
        printf("Resultado: Carta 2 %s (%s) venceu! \n", nomecidade2,codcarta2);}

    // Comparação por atributos PIB per capita
    printf("----------------------------------------------------\n"); 
    printf("Comparação de cartas: (Atributo: PIB per capita): \n");
   
    printf("\n");
    printf("Carta 1 - %s (%s): %f \n",nomecidade,codcarta,PIBpercapita);
    printf("Carta 2 - %s (%s): %f \n",nomecidade2,codcarta2,PIBpercapita2);
    if (PIBpercapita>PIBpercapita2){
        printf("Resultado: Carta 1 %s (%s) venceu! \n", nomecidade,codcarta);}
    else {
        printf("Resultado: Carta 2 %s (%s) venceu! \n", nomecidade2,codcarta2);}

        return 0;
    }
