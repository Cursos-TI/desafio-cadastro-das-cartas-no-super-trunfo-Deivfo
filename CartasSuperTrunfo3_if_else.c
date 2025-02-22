#include <stdio.h>

int main() {
    
    //DADOS CARTA 1
    char estado;
    char codcarta[4]; 
    char nomecidade[20]; 
    int populacao;
    float area;
    float densidedepopulacional; //Adição de variável: densidade populacional da carta 1.
    float PIB;
    float PIBpercapita; //Adição de variável: PIBpercapita da carta 1.
    int ptsturisticos;      

    //DADOS CARTA 2
    char estado2;
    char codcarta2[4]; 
    char nomecidade2[20]; 
    int populacao2;
    float area2;
    float densidedepopulacional2; //Adição de variável: densidade populacional da carta 2.
    float PIB2;
    float PIBpercapita2; //Adição de variável: PIBpercapita da carta 2.
    int ptsturisticos2;  
    
    //Pequena mensagem de interação.
    printf("Bem vindo ao Super Trufo! \n");
  
    printf("\n");

  
    //CADASTRO DA PRIMEIRA CARTA
    printf("Comece entrando com os dados da Carta 1: \n");

    printf("\n");
    
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

    densidedepopulacional = populacao / area; //Calculo de densidade populacional da carta 1.

    printf("Digite o PIB: \n");
    scanf("%f", &PIB);

    PIBpercapita = PIB / populacao; //Cálculo de PIB percapita da carta 1.

    printf("Digite o numero de pontos turisticos: \n");
    scanf("%i", &ptsturisticos);
   
     printf("\n"); // Pequeno espaço entre uma carta e outra.

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

    densidedepopulacional2 = populacao2 / area2; //Calculo de densidade populacional da carta 2.
  
    printf("Digite o PIB: \n");
    scanf("%f", &PIB2);

    PIBpercapita2 = PIB2 / populacao2; //Cálculo de PIB percapita da carta 2.
  
    printf("Digite o numero de pontos turisticos: \n");
    scanf("%i", &ptsturisticos2);

    printf("\n"); 

    //EXIBIÇAO DADOS CARTA 1
    printf("Carta 1: \n");    
    printf("Estado: %c \n", estado); 
    printf("Codigo da carta: %s \n", codcarta); 
    printf("Nome da cidade: %s \n", nomecidade); 
    printf("Populacao: %i \n", populacao); 
    printf("Densidade Populacional: %.2f hab/km² \n", densidedepopulacional); //Adição de impressão de densidade populacional da carta 1.
    printf("Area: %.2f km² \n", area); 
    printf("PIB: %.2f \n", PIB); 
    printf("PIB per capita: %.2f \n", PIBpercapita); //Adição de impressão de PIB per capita da carta 1.
    printf("Numero de pontos turisticos: %i \n", ptsturisticos); 

    printf("\n"); 

    //EXIBIÇAO DADOS CARTA 2    
    printf("Carta 2: \n");   
    printf("Estado: %c \n", estado2); 
    printf("Codigo da carta: %s \n", codcarta2); 
    printf("Nome da cidade: %s \n", nomecidade2); 
    printf("Populacao: %i \n", populacao2); 
    printf("Densidade Populacional: %.2f hab/km² \n", densidedepopulacional2); //Adição de impressão de densidade populacional da carta 2.
    printf("Area: %.2f km² \n", area2); 
    printf("PIB: %.2f \n", PIB2); 
    printf("PIB per capita: %.2f \n", PIBpercapita2); //Adição de impressão de PIB per capita da carta 2.
    printf("Numero de pontos turisticos: %i \n", ptsturisticos2); 

    printf("\n"); 

    //COMPARAÇAO DOS SUPER PODERES
    int resultadocarta1 = 0;
    int resultadocarta2 = 0;

    //Comparando as cartas para cada propriedade e somando o "super poder"
    if (populacao > populacao2) resultadocarta1++;
    else if (populacao < populacao2) resultadocarta2++;

    if (densidedepopulacional > densidedepopulacional2) resultadocarta1++;
    else if (densidedepopulacional < densidedepopulacional2) resultadocarta2++;

    if (area > area2) resultadocarta1++;
    else if (area < area2) resultadocarta2++;

    if (PIB > PIB2) resultadocarta1++;
    else if (PIB < PIB2) resultadocarta2++;

    if (PIBpercapita > PIBpercapita2) resultadocarta1++;
    else if (PIBpercapita < PIBpercapita2) resultadocarta2++;

    if (ptsturisticos > ptsturisticos2) resultadocarta1++;
    else if (ptsturisticos < ptsturisticos2) resultadocarta2++;

    //Exibição da carta ganhadora
    printf("\n Resultado Final:\n");
    if(resultadocarta1 > resultadocarta2){
        printf("Carta 1 Venceu com %d pontos! \n", resultadocarta1);
    } else if (resultadocarta2 > resultadocarta1) {
        printf("Carta 2 venceu com %d pontos! \n", resultadocarta2);
    } else{
        printf("Empate entre as cartas! \n");
    }

    return 0;

}
