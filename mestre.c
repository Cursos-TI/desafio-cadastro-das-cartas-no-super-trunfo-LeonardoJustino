#include <stdio.h>
#include <string.h>

int main(){
    //criações de variáveis 
    char estado[2], cidade[50],estado2[2], cidade2[50]; // caracteres
    int codigo, pontos,codigo2, pontos2; // inteiros
    float area, pib,area2, pib2; // números com casas decimais
    float densPopu,pibPerCap,densPopu2, pibPerCap2,pibMult,pibMult2;
    unsigned long int populacao,populacao2;
    float superPoder, superPoder2;
    float invertValue, result;

 
    // Entrada de dados - Carta 01
    printf("Carta 1: \n ");
    printf("==========\n"); 
    printf("Estado de (A-H): \n "); 
    scanf("%s", &estado);// Armazenando dado na variável

    printf("Codigo de (1-4):\n");
    scanf("%d", &codigo);// Armazenando dado na variável

    printf("Nome da Cidade : \n ");
    scanf(" %[^\n]", cidade);// Armazenando dado na variável

    printf("População :\n ");
    scanf("%u", &populacao);// Armazenando dado na variável

    printf("Área: \n ");
    scanf("%f", &area);// Armazenando dado na variável

    printf("PIB:\n ");
    scanf("%f", &pib);// Armazenando dado na variável

    printf("Número de pontos turísticos: \n");
    scanf("%d", &pontos);// Armazenando dado na variável
    
    printf("\n"); // Quebra de linha
    printf("\n"); // Quebra de linha

    // Entrada - Carta 2
    printf("Carta 2: \n ");
    printf("==========\n");
    printf("Estado de (A-H): \n ");
    scanf("%s", &estado2);// Armazenando dado na variável

    printf("Codigo de (1-4):\n");
    scanf("%d", &codigo2);// Armazenando dado na variável

    printf("Nome da Cidade : \n ");
    scanf(" %[^\n]", cidade2);// Armazenando dado na variável

    printf("Populacao :\n ");
    scanf("%u", &populacao2);// Armazenando dado na variável

    printf("area: \n ");
    scanf("%f", &area2);// Armazenando dado na variável

    printf("PIB:\n ");
    scanf("%f", &pib2);// Armazenando dado na variável

    printf("Número de pontos turísticos: \n");
    scanf("%d", &pontos2);// Armazenando dado na variável
    printf("\n");


    // Variáveis que vão armazenar calculos
    pibMult = pib * 1000000000;
    pibMult2 = pib2 * 1000000000;
    pibPerCap = pibMult / populacao; 
    pibPerCap2 = pibMult2 / populacao2; 
    densPopu = populacao / area;
    densPopu2 = populacao2 / area2;
    invertValue = 1 / densPopu;
    superPoder = (unsigned long int)populacao + (float)area + (float)pib + pontos + (float)pibPerCap + (float)invertValue;
    result = superPoder2 > superPoder;
    //Saida - CARTA 1

    printf("Carta 1: \n "); 
    printf("==========\n");
    printf("Código: %s0%d \n",estado,codigo);
    printf("Cidade: %s \n", cidade);
    printf("Populacao: %u \n", populacao);
    printf("Área: %.2fkm²\n", area);
    printf("PIB: %.2f bihões de reais\n", pib);
    printf("Números de Pontos Turísticos: %d\n", pontos);
    printf("Densidade Populacional: %.2f  hab/km²\n", densPopu);
    printf("PIB per Capita: %.2f reais \n", pibPerCap);

    printf("\n"); // Quebra de linha
    printf("\n"); // Quebra de linha

    // Saída - Carta 2
    printf("Carta 2: \n ");
    printf("==========\n");
    printf("Código: %s0%d \n",estado2,codigo2);
    printf("Cidade: %s \n", cidade2);
    printf("População: %u \n", populacao2);
    printf("Área: %.2fkm²\n", area2);
    printf("PIB: %.2f bihões de reais\n", pib2);
    printf("Números de Pontos Turísticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km²\n ", densPopu2);
    printf("PIB per Capita: %.2f reais \n", pibPerCap2);

    printf("\n"); // Quebra de linha
    printf("\n"); // Quebra de linha

    printf("Comparação de Cartas:\n");
    printf("População: A carta 1 venceu (%d)!\n", (populacao > populacao2));
    printf("Área: A carta 1 venceu (%d)!\n", (area > area2));
    printf("PIB: Carta 1 venceu (%d)!\n",(pib > pib2));
    printf("Pontos Turísticos: A carta 1 venceu (%d)!\n", (pontos > pontos2));
    printf("Densidade Populacional: A Carta 2 venceu (%d)!\n",(densPopu < densPopu2));
    printf("PIB per Capita: A carta 1 venceu (%d)!\n", (pibMult > pibMult2));
    printf("Super Poder: A Carta 1 venceu (%d)!\n", (superPoder > superPoder2));
    
    return 0;
    
}