#include <stdio.h>  
#include <stdlib.h>
#include <time.h>   


    struct Carta {
    char estado[3];
    char codigo[5];
    char nomecidade[50];
    unsigned long int populacao;
    int pontosTuristicos;
    float area;
    float pib;
    float densidadepop;
    float pibpercapita;
    float superpoder;
};
     
  int main(){


            struct Carta c1, c2;

                printf("--CADASTRO DA CARTA 1--\n");

                printf("Digite o estado da cidade da sua carta: \n");
                scanf(" %s", c1.estado);

                printf("Digite qual sera o codigo da sua carta: \n");
                scanf(" %s", c1.codigo);

                printf("Digite o nome da sua cidade: \n");
                scanf(" %s", c1.nomecidade);

                printf("Digite qual e a populacao dessa cidade: \n");
                scanf(" %lu", &c1.populacao);

                printf("Agora digite quantos pontos turisticos existem: ");
                scanf(" %i", &c1.pontosTuristicos);

                printf("Digite qual e a area dessa cidade: \n");
                scanf(" %f", &c1.area);

                printf("Por fim digite o PIB dessa cidade: \n");
                scanf( " %f", &c1.pib);

                 c1.densidadepop = (float)c1.populacao / (float) c1.area;
                 c1.pibpercapita = (float)c1.pib / (float)c1.populacao;
                 c1.superpoder= (float)c1.populacao + c1.area + c1.pib + c1.pibpercapita + (float)c1.pontosTuristicos + (1.0f / c1.densidadepop);

                while (getchar() != '\n');

                printf("--CADASTRO DA CARTA 2--\n");

                printf("Digite o estado da cidade da sua carta: \n");
                scanf(" %s", c2.estado);

                printf("Digite qual sera o codigo da sua carta: \n");
                scanf(" %s", c2.codigo);

                printf("Digite o nome da sua cidade: \n");
                scanf(" %s", c2.nomecidade);

                printf("Digite qual e a populacao dessa cidade: \n");
                scanf(" %lu", &c2.populacao);

                printf("Agora digite quantos pontos turisticos   existem: ");
                scanf(" %i", &c2.pontosTuristicos);

                printf("Digite qual e a area dessa cidade: \n");
                scanf(" %f", &c2.area);

                printf("Por fim digite o PIB dessa cidade: \n");
                scanf(" %f", &c2.pib);

                  c2.densidadepop = (float)c2.populacao / (float) c2.area;
                  c2.pibpercapita = (float)c2.pib / (float)c2.populacao;
                  c2.superpoder = (float)c2.populacao + c2.area + c2.pib + c2.pibpercapita + (float)c2.pontosTuristicos + (1.0f / c2.densidadepop);



                printf("\n===CARTA 1 REGISTRADA===\n");
                printf("Estado: %s\n", c1.estado);
                printf("Codigo: %s\n", c1.codigo);
                printf("Nome da Cidade: %s\n", c1.nomecidade);
                printf("Populacao: %lu\n", c1.populacao);
                printf("Quantidade de Pontos Turisticos: %i\n", c1.pontosTuristicos);
                printf("A area da cidade e: %.2f km²\n", c1.area);
                printf("O PIB da cidade e: %.2f\n", c1.pib);
                printf("A densidade populacional da cidade e: %.2f\n", c1.densidadepop);
                printf("O PIB per capita dessa cidade e: %.2f Reais", c1.pibpercapita);

                 printf("\n===CARTA 2 REGISTRADA===\n");
                printf("Estado: %s\n", c2.estado);
                printf("Codigo: %s\n", c2.codigo);
                printf("Nome da Cidade: %s\n", c2.nomecidade);
                printf("Populacao: %lu\n", c2.populacao);
                printf("Quantidade de Pontos Turisticos: %i\n", c2.pontosTuristicos);
                printf("A area da cidade e: %.2f km²\n", c2.area);
                printf("O PIB da cidade e: %.2f\n", c2.pib);
                printf("A densidade populacional da cidade e: %.2f\n", c2.densidadepop);
                printf("O PIB Per Capita dessa cidade e: %.2f Reais", c2.pibpercapita);

                printf("===COMPARACAO DAS CARTAS===\n");
                
                printf("Populacao: %d\n", c1.populacao > c2.populacao);

                printf("Densidade Populacional: %d\n", c1.densidadepop < c2.densidadepop);

                printf("Super Poder: %d\n", c1.superpoder > c2.superpoder);

                printf("Area: %d\n", c1.area > c2.area);

                printf("PIB: %d\n", c1.pib > c2.pib);

                printf("Pontos Turisticos: %d\n", c1.pontosTuristicos > c2.pontosTuristicos);

                 printf("PIB Per Capita: %d\n", c1.pibpercapita > c2.pibpercapita);


      int opcao;
      printf("## MENU PRINCIPAL ##\n");
      printf("Escolha o atributo:\n1. Populacao\n2. Area\n3. PIB\n4. Pontos Turisticos\n5. Densidade Populacional\n6. Super Poder\n");
      scanf("%d", &opcao);

      switch (opcao)
      {
      case 1:
       printf("Comparando Populacao...\n");
       printf("%s: %lu\n", c1.nomecidade, c1.populacao);
        printf("%s: %lu\n", c2.nomecidade, c2.populacao);

        if (c1.populacao > c2.populacao){
          printf("Resultado: %s venceu!\n", c1.nomecidade);
        } else if (c1.populacao < c2.populacao){
          printf("Resultado %s venceu!\n", c2.nomecidade);
        } else {
          printf("Resultado: Empate!\n");
        }
        break;
       case 2:
        printf("Comparando Area...\n");
        printf("%s: %2.f km²\n", c1.nomecidade, c1.area);
        printf("%s: %2.f km²\n", c2.nomecidade, c2.area);

        if (c1.area > c2.area){
          printf("Resultado: %s venceu!\n", c1.nomecidade);
        } else if (c1.area < c2.area){
          printf("Resultado %s venceu!\n", c2.nomecidade);
        } else {
          printf("Resultado: Empate!\n");
        }
        break;
        case 3:
        printf("Comparando PIB...\n");
        printf("%s: %2.f Reais\n", c1.nomecidade, c1.pib);
        printf("%s: %2.f Reais\n", c2.nomecidade, c2.pib);

        if (c1.pib > c2.pib){
          printf("Resultado: %s venceu!\n", c1.nomecidade);
        } else if (c1.pib < c2.pib){
          printf("Resultado %s venceu!\n", c2.nomecidade);
        } else {
          printf("Resultado: Empate!\n");
        }
        break;
        case 4:
        printf("Comparando Pontos Turisticos...\n");
        printf("%s: %d\n", c1.nomecidade, c1.pontosTuristicos);
        printf("%s: %d\n", c2.nomecidade, c2.pontosTuristicos);

        if(c1.pontosTuristicos > c2.pontosTuristicos){
          printf("Resultado: %s venceu!\n", c1.nomecidade);
        } else if (c1.pontosTuristicos < c2.pontosTuristicos){
          printf("Resultado %s venceu!\n", c2.nomecidade);
        } else {
          printf("Resultado: Empate!\n");
        }
        break;
        case 5:
        printf("Comparando Densidade Populacional...\n");
        printf("%s: %2.f hab/km²\n", c1.nomecidade, c1.densidadepop);
        printf("%s: %2.f hab/km²\n", c2.nomecidade, c2.densidadepop);

        if(c1.densidadepop < c2.densidadepop){
          printf("Resultado: %s venceu!\n", c1.nomecidade);
        } else if (c1.densidadepop < c2.densidadepop){
          printf("Resultado %s venceu!\n", c2.nomecidade);
        } else {
          printf("Resultado: Empate!\n");
        }
        break;
        case 6:
      printf("Comparando Super Poder...\n");
        printf("%s: %2.f\n", c1.nomecidade, c1.superpoder);
        printf("%s: %2.f\n", c2.nomecidade, c2.superpoder);

        if(c1.superpoder > c2.superpoder){
          printf("Resultado: %s venceu!\n", c1.nomecidade);
        } else if (c1.superpoder < c2.superpoder){
          printf("Resultado %s venceu!\n", c2.nomecidade);
        } else {
          printf("Resultado: Empate!\n");
        }
        break;
      }

                return 0;
    }
