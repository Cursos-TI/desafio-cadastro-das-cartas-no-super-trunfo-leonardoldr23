#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
int main() {
    char estado1 = 0, estado2 = 0;
    char codigoCarta1[20] = "", codigoCarta2[20] = "";
    char nomeCidade1[100] = "", nomeCidade2[100] = "";
    int populacao1 = 0, populacao2 = 0;
    float area1 = 0, area2 = 0;
    float pib1 = 0, pib2 = 0;
    int pontosTuristicos1 = 0, pontosTuristicos2 = 0;

    // Solicitar os dados da primeira carta
    printf("Primeira carta\n");
    printf("Digite o Estado: ");
    scanf("%s", &estado1);
    printf("Digite o Codigo: ");
    scanf("%s", codigoCarta1);
    getchar(); // Limpar o \n do buffer
    printf("Digite o Nome da Cidade: ");
    fgets(nomeCidade1, 100, stdin);
    nomeCidade1[strcspn(nomeCidade1, "\n")] = 0; // Limpar o \n da string lida
    printf("Digite o Populacao: ");
    scanf("%d", &populacao1);
    printf("Digite a Area: ");
    scanf("%f", &area1);
    printf("Digite o Pib: ");
    scanf("%f", &pib1);
    printf("Digite o Numero de Pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // Solicitar os dados da segunda carta
    printf("\n\nSegunda carta\n");
    printf("Digite o Estado: ");
    scanf("%s", &estado2);
    printf("Digite o Codigo: ");
    scanf("%s", codigoCarta2);
    getchar(); // Limpar o \n do buffer
    printf("Digite o Nome da Cidade: ");
    fgets(nomeCidade2, 100, stdin);
    nomeCidade2[strcspn(nomeCidade2, "\n")] = 0; // Limpar o \n da string lida
    printf("Digite o Populacao: ");
    scanf("%d", &populacao2);
    printf("Digite a Area: ");
    scanf("%f", &area2);
    printf("Digite o Pib: ");
    scanf("%f", &pib2);
    printf("Digite o Numero de Pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // Exibir as duas cartas sequencialmente
    // Carta 1:
    printf("\n\nDados informados:\n\n");
    printf("Carta 1:\n");
    printf("Estado: %c \n", estado1);
    printf("Codigo: %s \n", codigoCarta1);
    printf("Nome da Cidade: %s \n", nomeCidade1);
    printf("Populacao: %d \n", populacao1);
    printf("Area: %.2f \n", area1);
    printf("PIB: %.2f \n", pib1);
    printf("Numero de Pontos Turisticos: %d \n\n", pontosTuristicos1);
    // Carta 2:
    printf("Carta 2:\n");
    printf("Estado: %c \n", estado2);
    printf("Codigo: %s \n", codigoCarta2);
    printf("Nome da Cidade: %s \n", nomeCidade2);
    printf("Populacao: %d \n", populacao2);
    printf("Area: %.2f \n", area2);
    printf("PIB: %.2f \n", pib2);
    printf("Numero de Pontos Turisticos: %d \n", pontosTuristicos2);

    return 0;
}
