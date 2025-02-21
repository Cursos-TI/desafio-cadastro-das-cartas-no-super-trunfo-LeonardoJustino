#include <stdio.h>
#include <string.h>

int main(){
    //criações de variáveis 
    char estado[1], cidade[50],estado2[1], cidade2[50]; // caracteres
    int codigo, populacao, pontos,codigo2, populacao2, pontos2; // inteiros
    double area, pib,area2, pib2; // números com casas decimais

    // Entrada de dados - Carta 01
    printf("Carta 1: \n "); 
    printf("Estado de (A-H): \n "); 
    scanf("%s", &estado);// Armazenando dado na variável

    printf("Codigo de (1-4):\n");
    scanf("%d", &codigo);// Armazenando dado na variável

    printf("Nome da Cidade : \n ");
    scanf(" %[^\n]", cidade);// Armazenando dado na variável

    printf("População :\n ");
    scanf("%d", &populacao);// Armazenando dado na variável

    printf("Área: \n ");
    scanf("%lf", &area);// Armazenando dado na variável

    printf("PIB:\n ");
    scanf("%lf", &pib);// Armazenando dado na variável

    printf("Número de pontos turísticos: \n");
    scanf("%d", &pontos);// Armazenando dado na variável
    
    printf("\n");

    // Entrada - Carta 2
    printf("Carta 2: \n ");
    printf("Estado de (A-H): \n ");
    scanf("%s", &estado2);// Armazenando dado na variável

    printf("Codigo de (1-4):\n");
    scanf("%d", &codigo2);// Armazenando dado na variável

    printf("Nome da Cidade : \n ");
    scanf(" %[^\n]", cidade2);// Armazenando dado na variável

    printf("População :\n ");
    scanf("%d", &populacao2);// Armazenando dado na variável

    printf("Área: \n ");
    scanf("%lf", &area2);// Armazenando dado na variável

    printf("PIB:\n ");
    scanf("%lf", &pib2);// Armazenando dado na variável

    printf("Número de pontos turísticos: \n");
    scanf("%d", &pontos2);// Armazenando dado na variável
    printf("\n");

    //Saida - CARTA 1
    printf("Carta 1: \n "); 
    printf("Código: %s0%d \n",estado,codigo);
    printf("Cidade: %s \n", cidade);
    printf("População: %d \n", populacao);
    printf("Área: %.2lfkm²\n", area);
    printf("PIB: %.2lf bihões de reais\n", pib);
    printf("Números de Pontos Turísticos: %d\n", pontos);

    printf("\n");

    // Saída - Carta 2
    printf("Carta 2: \n ");
    printf("Código: %s0%d \n",estado2,codigo2);
    printf("Cidade: %s \n", cidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %.2lfkm²\n", area2);
    printf("PIB: %.2lf bihões de reais\n", pib2);
    printf("Números de Pontos Turísticos: %d\n", pontos2);


    return 0;
    
}