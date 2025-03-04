#include <stdio.h>

int main() {
    // Variaveis
    char estado1, estado2;
    char codigo1[5], codigo2[5];
    char nomeCidade1[60], nomeCidade2[60];
    int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pontos1, pontos2;

    //  Carta 1
    printf("Cadastro da Carta 1:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);  
    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo1);  
    printf("Nome da Cidade: ");
    scanf(" %[^\n]%*c", nomeCidade1);  // 
    printf("População: ");
    scanf("%d", &populacao1);  
    printf("Área (km²): ");
    scanf("%f", &area1);  
    printf("PIB (bilhões): ");
    scanf("%f", &pib1);  
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos1);  

    // informações da Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos1);

    //  Carta 2
    printf("\nCadastro da Carta 2:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);  
    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo2);  
    printf("Nome da Cidade: ");
    scanf(" %[^\n]%*c", nomeCidade2);  
    printf("População: ");
    scanf("%d", &populacao2);  
    printf("Área (km²): ");
    scanf("%f", &area2);  
    printf("PIB (bilhões): ");
    scanf("%f", &pib2);  
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos2); 

    //informações da Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos2);

    return 0;
}