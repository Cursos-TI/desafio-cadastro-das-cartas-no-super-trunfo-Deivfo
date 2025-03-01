#include <stdio.h>

int main() {
    
    // DADOS CARTAS 1 E 2
    char estado, estado2;
    char codcarta[4], codcarta2[4]; 
    char nomecidade[20], nomecidade2[20]; 
    int populacao, populacao2;
    float area, area2;
    float densidedepopulacional, densidedepopulacional2;
    float PIB, PIB2;
    float PIBpercapita, PIBpercapita2;
    int ptsturisticos, ptsturisticos2;      

    // ADIÇÃO DE MSG INICIAL
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

    densidedepopulacional = populacao / area;  //CALCULO DE DENSIDADE.

    printf("Digite o PIB: \n");
    scanf("%f", &PIB);

    PIBpercapita = PIB / populacao; //CALCULO DE PIBpercapita.

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

    densidedepopulacional2 = populacao2 / area2; //CALCULO DE DENSIDADE
  
    printf("Digite o PIB: \n");
    scanf("%f", &PIB2);

    PIBpercapita2 = PIB2 / populacao2; //CALCULO DE PIBpercapita.
  
    printf("Digite o numero de pontos turisticos: \n");
    scanf("%i", &ptsturisticos2);

    printf("\n");

    printf("_________________________________________________________________\n"); //ACRESCENTADO ALGUNS DETALHES NO VISUAL DE IMPRESSÃO

    printf("\n");

    //ADIÇÃO DE VARIÁVEL DE SUPERPODER QUE É A SOMA DE TODAS AS CARTA E O INVERSO DE DENSIDADE.
    float superpoder = populacao + area + (1.0 / densidedepopulacional) + PIB + PIBpercapita + ptsturisticos;
    float superpoder2 = populacao2 + area2 + (1.0 / densidedepopulacional2) + PIB2 + PIBpercapita2 + ptsturisticos2;
    
    // EXIBIÇÃO DOS DADOS DA CATA 1
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

    // EXIBIÇÃO DOS DADOS DA CATA 2
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

    printf("_________________________________________________________________\n");
    
    //INSERIDO VARIAVEL DE PONTUAÇÃO DAS CARTAS PARA COMPARAÇÃO FINAL
    int ptscarta1=0;
    int ptscarta2=0;

    //MENU DE ESCOLHA DO ATRIBUTO

    int resultadoescolha1; // ADIÇÃO DE VARIAVEL PARA ARMAZENAMENTO DOS DADOS DO MENU
    printf("Agora vamos escolher os atributos a serem comparados. \n");
    printf("_________________________________________________________________\n");
    printf("\n");

    printf("--- Escolha o primeiro atributo a ser comparado --- \n");
    printf("\n");
    printf("1. População \n");
    printf("2. Densidade populacional \n");
    printf("3. Área \n");
    printf("4. PIB \n");
    printf("5. PIB per capita \n");
    printf("6. Número de pontos turisticos \n");
    printf("7. Super Poder \n");
    scanf("%d", &resultadoescolha1);

    printf("\n");

    

    switch (resultadoescolha1)
    {
    case 1:
    printf("----------------------------------------------------\n"); 
    printf("Atributo: População \n");
    printf("\n");
    printf("Carta 1 - %s (%s): %i \n",nomecidade,codcarta,populacao);
    printf("Carta 2 - %s (%s): %i \n",nomecidade2,codcarta2,populacao2);

    if (populacao > populacao2){
        printf("Resultado: Carta 1 %s (%s) venceu! \n", nomecidade,codcarta);
        ptscarta1++; 

    } else {
        if (populacao2 > populacao) {
            printf("Resultado: Carta 2 %s (%s) venceu! \n", nomecidade2,codcarta2);
            ptscarta2++;            
        }else 
        printf("Empate \n"); } 

    printf("----------------------------------------------------\n");
        break;  
        
    case 2:
        printf("----------------------------------------------------\n"); 
        printf("Atributo: Densidade Populacional \n");
        printf("\n");
        printf("Carta 1 - %s (%s): %f \n",nomecidade,codcarta,densidedepopulacional);
        printf("Carta 2 - %s (%s): %f \n",nomecidade2,codcarta2,densidedepopulacional2);
    
        if (densidedepopulacional < densidedepopulacional2){
            printf("Resultado: Carta 1 %s (%s) venceu! \n", nomecidade,codcarta);
            ptscarta1++;

        } else {
            if (densidedepopulacional2 < densidedepopulacional) {
                printf("Resultado: Carta 2 %s (%s) venceu! \n", nomecidade2,codcarta2);
                ptscarta2++;
            }else 
            printf("Empate \n"); } 

        printf("----------------------------------------------------\n");
            break;
    
    case 3:
         printf("----------------------------------------------------\n"); 
         printf("Atributo: Área \n");
         printf("\n");
         printf("Carta 1 - %s (%s): %f \n",nomecidade,codcarta,area);
         printf("Carta 2 - %s (%s): %f \n",nomecidade2,codcarta2,area2);
    
         if (area > area2){
             printf("Resultado: Carta 1 %s (%s) venceu! \n", nomecidade,codcarta);
             ptscarta1++;

         } else {
             if (area2 > area) {
                 printf("Resultado: Carta 2 %s (%s) venceu! \n", nomecidade2,codcarta2);
                 ptscarta2++;

             }else 
             printf("Empate \n"); } 

         printf("----------------------------------------------------\n");
             break;  

    case 4:
        printf("----------------------------------------------------\n"); 
        printf("Atributo: PIB \n");
        printf("\n");
        printf("Carta 1 - %s (%s): %f \n",nomecidade,codcarta,PIB);
        printf("Carta 2 - %s (%s): %f \n",nomecidade2,codcarta2,PIB2);
    
        if (PIB > PIB2){
            printf("Resultado: Carta 1 %s (%s) venceu! \n", nomecidade,codcarta);
            ptscarta1++;

        } else {
            if (PIB2 > PIB) {
                printf("Resultado: Carta 2 %s (%s) venceu! \n", nomecidade2,codcarta2);
                ptscarta2++;
            }else 
            printf("Empate \n"); } 

        printf("----------------------------------------------------\n");
            break;  
        
    case 5:
            printf("----------------------------------------------------\n"); 
            printf("Atributo: PIB per capita \n");
            printf("\n");
            printf("Carta 1 - %s (%s): %f \n",nomecidade,codcarta,PIBpercapita);
            printf("Carta 2 - %s (%s): %f \n",nomecidade2,codcarta2,PIBpercapita2);
        
            if (PIBpercapita > PIBpercapita2){
                printf("Resultado: Carta 1 %s (%s) venceu! \n", nomecidade,codcarta);
                ptscarta1++;

            } else {
                if (PIBpercapita2 > PIBpercapita) {
                    printf("Resultado: Carta 2 %s (%s) venceu! \n", nomecidade2,codcarta2);
                    ptscarta2++;

                }else 
                printf("Empate \n"); } 

            printf("----------------------------------------------------\n");
                break;     
          
    case 6:
            printf("----------------------------------------------------\n"); 
            printf("Atributo: Número de pontos turísticos \n");
            printf("\n");
            printf("Carta 1 - %s (%s): %i \n",nomecidade,codcarta,ptsturisticos);
            printf("Carta 2 - %s (%s): %i \n",nomecidade2,codcarta2,ptsturisticos2);
        
            if (ptsturisticos > ptsturisticos2){
                printf("Resultado: Carta 1 %s (%s) venceu! \n", nomecidade,codcarta);
                ptscarta1++;

            } else {
                if (ptsturisticos2 > ptsturisticos) {
                    printf("Resultado: Carta 2 %s (%s) venceu! \n", nomecidade2,codcarta2);
                    ptscarta2++;
                    
                }else 
                printf("Empate \n"); } 

            printf("----------------------------------------------------\n");
                break;   
                
    case 7:
            printf("----------------------------------------------------\n"); 
            printf("Atributo: Super poder \n");
            printf("\n");
            printf("Carta 1 - %s (%s): %f \n",nomecidade,codcarta,superpoder);
            printf("Carta 2 - %s (%s): %f \n",nomecidade2,codcarta2,superpoder2);
                
            if (superpoder > superpoder2){
                printf("Resultado: Carta 1 %s (%s) venceu! \n", nomecidade,codcarta);
                ptscarta1++;

            } else {
                if (superpoder2 > superpoder) {
                    printf("Resultado: Carta 2 %s (%s) venceu! \n", nomecidade2,codcarta2);                    
                    ptscarta2++;
                }else 
                printf("Empate \n"); } 

            printf("----------------------------------------------------\n");
                break;     
            
    default:
        printf("### Este número não condiz com os da opção ###.");
        break;
    }

    printf("\n");

     int resultadoescolha2; // ADIÇÃO DE VARIAVEL PARA ARMAZENAMENTO DOS DADOS DO MENU

    printf("\n");

    printf("--- Escolha o segundo atributo a ser comparado --- \n");
    printf("\n");
    printf("1. População \n");
    printf("2. Densidade populacional \n");
    printf("3. Área \n");
    printf("4. PIB \n");
    printf("5. PIB per capita \n");
    printf("6. Número de pontos turisticos \n");
    printf("7. Super Poder \n");
    scanf("%d", &resultadoescolha2);

    printf("\n");

    if (resultadoescolha1 == resultadoescolha2) //LÓGICA PARA O CASO DE ESCOLHA DO MESMO ATRIBUTO
    {
        printf("Escolha outro atributo para comparação! \n"); // MSG CASO SEJA ESCOLHIDO O MSM ATRIBUTO
        resultadoescolha1=0;
    } else {
       
    
    switch (resultadoescolha2)
    {
    case 1:
    printf("----------------------------------------------------\n"); 
    printf("Atributo: População \n");
    printf("\n");
    printf("Carta 1 - %s (%s): %i \n",nomecidade,codcarta,populacao);
    printf("Carta 2 - %s (%s): %i \n",nomecidade2,codcarta2,populacao2);

    if (populacao > populacao2){
        printf("Resultado: Carta 1 %s (%s) venceu! \n", nomecidade,codcarta);
        ptscarta1++;

    } else {
        if (populacao2 > populacao) {
            printf("Resultado: Carta 2 %s (%s) venceu! \n", nomecidade2,codcarta2);
            ptscarta2++;            
        }else 
        printf("Empate \n"); } 

    printf("----------------------------------------------------\n");
        break;  
        
    case 2:
        printf("----------------------------------------------------\n"); 
        printf("Atributo: Densidade Populacional \n");
        printf("\n");
        printf("Carta 1 - %s (%s): %f \n",nomecidade,codcarta,densidedepopulacional);
        printf("Carta 2 - %s (%s): %f \n",nomecidade2,codcarta2,densidedepopulacional2);
    
        if (densidedepopulacional < densidedepopulacional2){
            printf("Resultado: Carta 1 %s (%s) venceu! \n", nomecidade,codcarta);
            ptscarta1++;

        } else {
            if (densidedepopulacional2 < densidedepopulacional) {
                printf("Resultado: Carta 2 %s (%s) venceu! \n", nomecidade2,codcarta2);
                ptscarta2++;
            }else 
            printf("Empate \n"); } 

        printf("----------------------------------------------------\n");
            break;
    
    case 3:
         printf("----------------------------------------------------\n"); 
         printf("Atributo: Área \n");
         printf("\n");
         printf("Carta 1 - %s (%s): %f \n",nomecidade,codcarta,area);
         printf("Carta 2 - %s (%s): %f \n",nomecidade2,codcarta2,area2);
    
         if (area > area2){
             printf("Resultado: Carta 1 %s (%s) venceu! \n", nomecidade,codcarta);
             ptscarta1++;

         } else {
             if (area2 > area) {
                 printf("Resultado: Carta 2 %s (%s) venceu! \n", nomecidade2,codcarta2);
                 ptscarta2++;

             }else 
             printf("Empate \n"); } 

         printf("----------------------------------------------------\n");
             break;  

    case 4:
        printf("----------------------------------------------------\n"); 
        printf("Atributo: PIB \n");
        printf("\n");
        printf("Carta 1 - %s (%s): %f \n",nomecidade,codcarta,PIB);
        printf("Carta 2 - %s (%s): %f \n",nomecidade2,codcarta2,PIB2);
    
        if (PIB > PIB2){
            printf("Resultado: Carta 1 %s (%s) venceu! \n", nomecidade,codcarta);
            ptscarta1++;

        } else {
            if (PIB2 > PIB) {
                printf("Resultado: Carta 2 %s (%s) venceu! \n", nomecidade2,codcarta2);
                ptscarta2++;
            }else 
            printf("Empate \n"); } 

        printf("----------------------------------------------------\n");
            break;  
        
    case 5:
            printf("----------------------------------------------------\n"); 
            printf("Atributo: PIB per capita \n");
            printf("\n");
            printf("Carta 1 - %s (%s): %f \n",nomecidade,codcarta,PIBpercapita);
            printf("Carta 2 - %s (%s): %f \n",nomecidade2,codcarta2,PIBpercapita2);
        
            if (PIBpercapita > PIBpercapita2){
                printf("Resultado: Carta 1 %s (%s) venceu! \n", nomecidade,codcarta);
                ptscarta1++;

            } else {
                if (PIBpercapita2 > PIBpercapita) {
                    printf("Resultado: Carta 2 %s (%s) venceu! \n", nomecidade2,codcarta2);
                    ptscarta2++;

                }else 
                printf("Empate \n"); } 

            printf("----------------------------------------------------\n");
                break;     
          
    case 6:
            printf("----------------------------------------------------\n"); 
            printf("Atributo: Número de pontos turísticos \n");
            printf("\n");
            printf("Carta 1 - %s (%s): %i \n",nomecidade,codcarta,ptsturisticos);
            printf("Carta 2 - %s (%s): %i \n",nomecidade2,codcarta2,ptsturisticos2);
        
            if (ptsturisticos > ptsturisticos2){
                printf("Resultado: Carta 1 %s (%s) venceu! \n", nomecidade,codcarta);
                ptscarta1++;

            } else {
                if (ptsturisticos2 > ptsturisticos) {
                    printf("Resultado: Carta 2 %s (%s) venceu! \n", nomecidade2,codcarta2);
                    ptscarta2++;
                    
                }else 
                printf("Empate \n"); } 

            printf("----------------------------------------------------\n");
                break;   
                
    case 7:
            printf("----------------------------------------------------\n"); 
            printf("Atributo: Super poder \n");
            printf("\n");
            printf("Carta 1 - %s (%s): %f \n",nomecidade,codcarta,superpoder);
            printf("Carta 2 - %s (%s): %f \n",nomecidade2,codcarta2,superpoder2);
                
            if (superpoder > superpoder2){
                printf("Resultado: Carta 1 %s (%s) venceu! \n", nomecidade,codcarta);
                ptscarta1++;

            } else {
                if (superpoder2 > superpoder) {
                    printf("Resultado: Carta 2 %s (%s) venceu! \n", nomecidade2,codcarta2);                    
                    ptscarta2++;
                }else 
                printf("Empate \n"); } 

            printf("----------------------------------------------------\n");
                break;     
            
    default:
        printf("### Este número não condiz com os da opção ###.");
        break;
    }

    printf("\n------Resultado final------ \n");
    
    printf("Pontos da carta 1: %i \n",ptscarta1);
    printf("Pontos da carta 2: %i \n",ptscarta2);

   if (ptscarta1 > ptscarta2)
   {
    printf("Carta 1 Venceu o jogo com %i pontos! \n",ptscarta1);
   }else if (ptscarta2 > ptscarta1)
   {
    printf("Carta 2 Venceu o jogo com %i pontos! \n",ptscarta2);
   }else
   {
    printf("\n");
    printf("Houve um empate entre as cartas! \n");
   }
    }
    

    return 0;
}
