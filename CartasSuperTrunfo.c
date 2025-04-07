#include <stdio.h>

int main() {
    int Carta = 1;
    char estado[10];
    char codigo[3];
    char cidade[10];
    int populacao;
    float area;
    int turisticos;
    

    printf("Digite seu estado: ");
    scanf("%s", estado);
    printf("Estado: %s\n ", estado);

    
    printf("Digite o código:\n ");
    scanf("%s", &codigo);
    printf("Código: %s\n ", codigo);

    printf("Digite sua cidade: \n");
    scanf("%s", cidade);
    printf("Cidade: %s\n", cidade);

    printf("Digite a população:\n");
    scanf("%d", &populacao);
    printf("População: %d\n", populacao);
    
    printf("Digite sua Área: \n");
    scanf("%f", &area);
    printf("Área: %f\n", area);

    printf("Digite os pontos turisticos: \n");
    scanf("%d", &turisticos);
    printf("Números de Pontos Turísticos: \n");


}