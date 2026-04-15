#include <stdio.h>  
    
    struct Carta {
    char estado[3];
    char codigo[5];
    char nomecidade[50];
    int populacao, pontosTuristicos;
    float area;
    float pib;
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


                printf("\n===CARTA 1 REGISTRADA===\n");
                printf("Estado: %s\n", c1.estado);
                printf("Código: %s\n", c1.codigo);
                printf("Nome da Cidade: %s\n", c1.nomecidade);
                printf("População: %d\n", c1.populacao);
                printf("Quantidade de Pontos Turísticos: %i\n", c1.pontosTuristicos);
                printf("A área da cidade é: %.2f km²\n", c1.area);
                printf("O PIB da cidade é: %.2f bilhões\n", c1.pib);

                 printf("\n===CARTA 2 REGISTRADA===\n");
                printf("Estado: %s\n", c2.estado);
                printf("Código: %s\n", c2.codigo);
                printf("Nome da Cidade: %s\n", c2.nomecidade);
                printf("População: %d\n", c2.populacao);
                printf("Quantidade de Pontos Turísticos: %i\n", c2.pontosTuristicos);
                printf("A área da cidade é: %.2f km²\n", c2.area);
                printf("O PIB da cidade é: %.2f bilhões\n", c2.pib);

    }