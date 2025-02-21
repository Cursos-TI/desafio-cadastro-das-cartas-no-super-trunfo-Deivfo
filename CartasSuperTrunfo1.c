#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    //DADOS CARTA 1
    char estado;
    char codcarta[4]; 
    char nomecidade[20]; 
    int populacao;
    float area;
    float PIB;
    int ptsturisticos;      

    //DADOS CARTA 2
    char estado2;
    char codcarta2[4]; 
    char nomecidade2[20]; 
    int populacao2;
    float area2;
    float PIB2;
    int ptsturisticos2;  
    
    //Pequena mensagem de interação.
    printf("Bem vindo ao Super Trufo! \n");
  
    printf("\n");

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

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

    printf("Digite o PIB: \n");
    scanf("%f", &PIB);

    printf("Digite o numero de pontos turisticos: \n");
    scanf("%i", &ptsturisticos);
   
 
    printf("\n");

    printf("Comece entrando com os dados da Carta 2: \n");
    
      // Exibição dos Dados das Cartas:
      // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
      // Exiba os valores inseridos para cada atributo da cidade, um por linha.

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
  
      printf("Digite o PIB: \n");
      scanf("%f", &PIB2);
  
      printf("Digite o numero de pontos turisticos: \n");
      scanf("%i", &ptsturisticos2);

      printf("\n");

      //EXIBIÇAO DADOS CARTA 1
      printf("Carta 1: \n");    
      printf("Estado: %c \n", estado); 
      printf("Codigo da carta: %s \n", codcarta); 
      printf("Nome da cidade: %s \n", nomecidade); 
      printf("Populacao: %i \n", populacao); 
      printf("Area: %.2f km² \n", area); 
      printf("PIB: %.2f \n", PIB); 
      printf("Numero de pontos turisticos: %i \n", ptsturisticos); 

      printf("\n");

      //EXIBIÇAO DADOS CARTA 2    
      printf("Carta 2: \n");   
      printf("Estado: %c \n", estado2); 
      printf("Codigo da carta: %s \n", codcarta2); 
      printf("Nome da cidade: %s \n", nomecidade2); 
      printf("Populacao: %i \n", populacao2); 
      printf("Area: %.2f km² \n", area2); 
      printf("PIB: %.2f \n", PIB2); 
      printf("Numero de pontos turisticos: %i \n", ptsturisticos2); 

    return 0;

}
