#include <stdio.h>

int main() {
    char estado1 [50];
    char codigo1 [50];
    char cidade1 [50];
    int populacao1;
    float area1;
    int turisticos1;

    char estado2 [50];
    char codigo2 [50];
    char cidade2 [50];
    int populacao2;
    float area2;
    int turisticos2;


    printf("Carta1\n");
    
    printf("Digite seu estado: ");
    scanf("%s", estado1);
    printf("Estado: %s\n ", estado1);

    printf("Digite o código:\n ");
    scanf("%s", &codigo1);
    printf("Código: %s\n ", codigo1);

    printf("Digite sua cidade: \n");
    scanf("%s", cidade1);
    printf("Cidade: %s\n", cidade1);

    printf("Digite a população:\n");
    scanf("%d", &populacao1);
    printf("População: %d\n", populacao1);
    
    printf("Digite sua Área: \n");
    scanf("%f", &area1);
    printf("Área: %f\n", area1);

    printf("Digite os pontos turisticos: \n");
    scanf("%d", &turisticos1);
    printf("Números de Pontos Turísticos: %d\n", turisticos1);



    printf("Carta2\n");
    
    printf("Digite seu estado: ");
    scanf("%s", estado2);
    printf("Estado: %s\n ", estado2);

    printf("Digite o código:\n ");
    scanf("%s", &codigo2);
    printf("Código: %s\n ", codigo2);

    printf("Digite sua cidade: \n");
    scanf("%s", cidade2);
    printf("Cidade: %s\n", cidade2);

    printf("Digite a população:\n");
    scanf("%d", &populacao2);
    printf("População: %d\n", populacao2);
    
    printf("Digite sua Área: \n");
    scanf("%f", &area2);
    printf("Área: %f\n", area2);

    printf("Digite os pontos turisticos: \n");
    scanf("%d", &turisticos2);
    printf("Números de Pontos Turísticos: %d \n", turisticos2);

}