#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
// Teste larissa

int main()
{
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char nomeCidade1[30], nomeCidade2[30];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    // Carta 1
    printf("Carta 1 - Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Carta 1 - Código (ex: A01): ");
    scanf("%3s", codigo1);
    printf("Carta 1 - Nome da cidade: ");
    scanf(" %29[^\n]", nomeCidade1);
    printf("Carta 1 - População: ");
    scanf("%d", &populacao1);
    printf("Carta 1 - Área (km²): ");
    scanf("%f", &area1);
    printf("Carta 1 - PIB (em bilhões): ");
    scanf("%f", &pib1);
    printf("Carta 1 - Pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);
    printf("\n");

    // Carta 2
    printf("Carta 2 - Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Carta 2 - Código (ex: A01): ");
    scanf("%3s", codigo2);
    printf("Carta 2 - Nome da cidade: ");
    scanf(" %29[^\n]", nomeCidade2);
    printf("Carta 2 - População: ");
    scanf("%d", &populacao2);
    printf("Carta 2 - Área (km²): ");
    scanf("%f", &area2);
    printf("Carta 2 - PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Carta 2 - Pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);
    printf("\n");

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("--- Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("\n");

    printf("--- Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}
