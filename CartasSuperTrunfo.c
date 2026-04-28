#include <stdio.h>  
    
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
                scanf(" %s", &c1.codigo);

                printf("Digite o nome da sua cidade: \n");
                scanf(" %s", &c1.nomecidade);

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
                scanf(" %s", &c2.codigo);

                printf("Digite o nome da sua cidade: \n");
                scanf(" %s", &c2.nomecidade);

                printf("Digite qual e a populacao dessa cidade: \n");
                scanf(" %lu", &c2.populacao);

                printf("Agora digite quantos pontos turisticos   existem: ");
                scanf(" %i", &c2.pontosTuristicos);

                #include <stdio.h>  
    
    struct Carta {
    char estado[3];
    char codigo[5];
    char nomecidade[50];
    int populacao, pontosTuristicos;
    float area;
    float pib;
    float densidadepop;
    float pibpercapita;

};

     int main(){
            struct Carta c1, c2;

                printf("--CADASTRO DA CARTA 1--\n");

                printf("Digite o estado da cidade da sua carta: \n");
                scanf(" %s", &c1.estado);

                printf("Digite qual será o código da sua carta: \n");
                scanf(" %s", &c1.codigo);

                printf("Digite o nome da sua cidade: \n");
                scanf(" %s", &c1.nomecidade);

                printf("Digite qual é a população dessa cidade: \n");
                scanf(" %d", &c1.populacao);

                printf("Agora digite quantos pontos turísticos existem: ");
                scanf(" %i", &c1.pontosTuristicos);

                printf("Digite qual é a área dessa cidade: \n");
                scanf(" %f", &c1.area);

                printf("Por fim digite o PIB dessa cidade: \n");
                scanf( " %f", &c1.pib);

                 c1.densidadepop = (float)c1.populacao / (float) c1.area;
                 c1.pibpercapita = (float)c1.pib / (float)c1.populacao;

                while (getchar() != '\n');

                printf("--CADASTRO DA CARTA 2--\n");

                printf("Digite o estado da cidade da sua carta: \n");
                scanf(" %s", &c2.estado);

                printf("Digite qual será o código da sua carta: \n");
                scanf(" %s", &c2.codigo);

                printf("Digite o nome da sua cidade: \n");
                scanf(" %s", &c2.nomecidade);

                printf("Digite qual é a população dessa cidade: \n");
                scanf(" %d", &c2.populacao);

                printf("Agora digite quantos pontos turísticos existem: ");
                scanf(" %i", &c2.pontosTuristicos);

                printf("Digite qual é a área dessa cidade: \n");
                scanf(" %f", &c2.area);

                printf("Por fim digite o PIB dessa cidade: \n");
                scanf(" %f", &c2.pib);

                  c2.densidadepop = (float)c2.populacao / (float) c2.area;
                  c2.pibpercapita = (float)c2.pib / (float)c2.populacao;


                printf("\n===CARTA 1 REGISTRADA===\n");
                printf("Estado: %s\n", c1.estado);
                printf("Código: %s\n", c1.codigo);
                printf("Nome da Cidade: %s\n", c1.nomecidade);
                printf("População: %d\n", c1.populacao);
                printf("Quantidade de Pontos Turísticos: %i\n", c1.pontosTuristicos);
                printf("A área da cidade é: %.2f km²\n", c1.area);
                printf("O PIB da cidade é: %.2f bilhões\n", c1.pib);
                printf("A densidade populacional da cidade é: %.2f\n", c1.densidadepop);
                printf("O PIB per capita dessa cidade é: %.2f Reais\n", c1.pibpercapita);

                 printf("\n===CARTA 2 REGISTRADA===\n");
                printf("Estado: %s\n", c2.estado);
                printf("Código: %s\n", c2.codigo);
                printf("Nome da Cidade: %s\n", c2.nomecidade);
                printf("População: %d\n", c2.populacao);
                printf("Quantidade de Pontos Turísticos: %i\n", c2.pontosTuristicos);
                printf("A área da cidade é: %.2f km²\n", c2.area);
                printf("O PIB da cidade é: %.2f bilhões\n", c2.pib);
                printf("A densidade populacional da cidade é: %.2f\n", c2.densidadepop);
                printf("O PIB Per Capita dessa cidade é: %.2f Reais\n", c2.pibpercapita);

                printf("\nComparação de Cartas (Atributo: População) \n\n");
                
                printf("Carta 1 - %s (%s): %d\n", c1.nomecidade, c1.estado, c1.populacao);
                printf("Carta 2 - %s (%s): %d\n", c2.nomecidade, c2.estado, c2.populacao);

                if(c1.populacao > c2.populacao) {
                  printf("Resultado: Carta 1 (%s) venceu o duelo!", c1.nomecidade);
                }
                else if (c2.populacao > c1.populacao){
                  printf("Resultado: Carta 2 (%s) venceu o duelo!", c2.nomecidade);
                  }
                   else {
                    printf("Resultado: Empate \n");
                  }
                  

               
                
            return 0;

    }
