#include <stdio.h>

int main() {
    char estado1 [50];
    char codigo1 [50];
    char cidade1 [50];
    int populacao1;
    float area1;
    float pib1;
    int turisticos1;
    float densidade_pop1;
    float pib_per_capita1;
    float inverso_densidade_pop1;
    inverso_densidade_pop1 = 1 / densidade_pop1;
    long double super_poder1;
    super_poder1 = populacao1 + area1 + pib1 + (float) turisticos1 +
    pib_per_capita1 + inverso_densidade_pop1;


    char estado2 [50];
    char codigo2 [50];
    char cidade2 [50];
    int populacao2;
    float area2;
    float pib2;
    int turisticos2;
    float densidade_pop2;
    float pib_per_capita2;
    float inverso_densidade_pop2;
    inverso_densidade_pop2 = 1 / densidade_pop2;
    long double super_poder2;
    super_poder2 = populacao2 + area2 + pib2 + (float) turisticos2 +
    pib_per_capita2 + inverso_densidade_pop2;

    printf("Carta1\n");
    
    printf("Digite seu estado: ");
    scanf("%s", estado1);

    printf("Digite o código:\n ");
    scanf("%s", &codigo1);

    printf("Digite sua cidade: \n");
    scanf("%s", cidade1);

    printf("Digite a população:\n");
    scanf("%d", &populacao1);
    
    printf("Digite sua Área: \n");
    scanf("%f", &area1);

    printf("Digite seu PIB: \n");
    scanf("%f", &pib1);
    

    printf("Digite os pontos turisticos: \n");
    scanf("%d", &turisticos1);
    

    densidade_pop1 = (populacao1 / area1);

    pib_per_capita1 = (pib1 / populacao1);

    printf("Super Poder: %.3lf pontos\n", super_poder1);


    printf("Carta2\n");
    
    printf("Digite seu estado: ");
    scanf("%s", estado2);
    

    printf("Digite o código:\n ");
    scanf("%s", &codigo2);

    printf("Digite sua cidade: \n");
    scanf("%s", cidade2);
    

    printf("Digite a população:\n");
    scanf("%d", &populacao2);
    
    
    printf("Digite sua Área: \n");
    scanf("%f", &area2);
    

    printf("Digite seu PIB: \n");
    scanf("%f", &pib2);
    

    printf("Digite os pontos turisticos: \n");
    scanf("%d", &turisticos2);
    

    densidade_pop2 = (populacao2 / area2);
    printf("Densidade Populacional: %f \n", densidade_pop2);

    pib_per_capita2 = (pib2 / populacao2);
    printf("PIB per Capita: %f \n", pib_per_capita2);

    printf("Super Poder: %.3lf pontos\n", super_poder2);

     // Exibição dos Dados das Cartas:

     printf("\n--- Dados da Carta 1 ---\n");

     printf("Estado: %s\n", estado1);
 
     printf("Código: %s\n", codigo1);
 
     printf("Cidade: %s\n", cidade1);
 
     printf("População: %d\n", populacao1);
 
     printf("Área: %.2f\n", area1);
 
     printf("PIB: %.2f\n", pib1);
 
     printf("Pontos Turísticos: %d\n", turisticos1);

     printf ("Densidade Populacional: %f \n", densidade_pop1);

     printf("PIB per Capita: %f \n", pib_per_capita1);

     printf("Super Poder: %.3lf pontos\n", super_poder1);



 
 
 
     printf("\n--- Dados da Carta 2 ---\n");
 
     printf("Estado: %s\n", estado2);
 
     printf("Código: %s\n", codigo2);
 
     printf("Cidade: %s\n", cidade2);
 
     printf("População: %d\n", populacao2);
 
     printf("Área: %.2f\n", area2);
 
     printf("PIB: %.2f\n", pib2);
 
     printf("Pontos Turísticos: %d\n", turisticos2);
 
 
 
     return 0;

}