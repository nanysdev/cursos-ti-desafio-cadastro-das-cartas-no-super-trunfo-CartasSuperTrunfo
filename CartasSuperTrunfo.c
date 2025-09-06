#include <stdio.h>
#include <string.h>

int main() {
    // Declaração de variaveis carta 1
    char estado1;
    char cod_carta1[5]; // Codigo da carta (Letra do Estado + 0 + nº da Cidade) -> Ex: A01, A02...
    char cidade1[50]; // Nome da cidade
    int populacao1; // Habitantes da cidade
    float area1; // Area da cidade em km²
    float pib1; // Produto Interno Bruto da cidade
    int ponto_tur1; // Quantidade de pontos turisticos 

    // Declaração de variaveis carta 2
    char estado2;
    char cod_carta2[5];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int ponto_tur2;


    // Cadastro de informacoes CARTA 1
    printf("----CADASTRO DA CARTA 1----\n");

    printf("Digite o Estado (Uma letra de A a H): \n");
    scanf("%c", &estado1);

    printf("Digite o codigo da Carta 1 (Ex: A01): \n");
    scanf("%s", &cod_carta1);

    printf("Digite o nome da Cidade:\n");
    getchar();
    fgets(cidade1, 50, stdin); // Lê o nome da cidade com espaços
    cidade1[strcspn(cidade1, "\n")] = 0; // Remove o caractere de nova linha, se presente


    printf("Digite a populacao da Cidade:\n"); //
    scanf("%d", &populacao1);

    printf("Digite a area (km2) da Cidade:\n");
    scanf("%f", &area1);

    printf("Digite o PIB da Cidade:\n");
    scanf("%f", &pib1);

    printf("Digite quantidade de pontos turisticos da Cidade: \n");
    scanf("%d", &ponto_tur1);



    // Cadastro de informacoes CARTA 2
    printf("\n----CADASTRO DA CARTA 2----\n");

    printf("Digite o Estado (Uma letra de A a H): \n");
    getchar();
    scanf("%c", &estado2);

    printf("Digite o codigo da Carta 2 (Ex: A01): \n");
    scanf("%s", &cod_carta2);

    printf("Digite o nome da Cidade:\n");
    getchar();
    fgets(cidade2, 50, stdin); // Lê o nome da cidade com espaços
    cidade2[strcspn(cidade2, "\n")] = 0; // Remove o caractere de nova linha, se presente

    printf("Digite a populacao da Cidade:\n");
    scanf("%d", &populacao2);

    printf("Digite a area (km2) da Cidade:\n");
    scanf("%f", &area2);

    printf("Digite o PIB da Cidade:\n");
    scanf("%f", &pib2);

    printf("Digite quantidade de pontos turisticos da Cidade: \n");
    scanf("%d", &ponto_tur2);



    // Impressão dos dados cadastrados 
    // DADOS CARTA 1
    printf("\n");
    printf("===============\n");
    printf("--- CARTA 1 ---\n");
    printf("===============\n");

    printf("Estado: %c\n", estado1);
    printf("Codigo Carta: %s\n", cod_carta1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: R$ %.2f\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", ponto_tur1);


    // DADOS CARTA 2
    printf("\n");
    printf("===============\n");
    printf("--- CARTA 2 ---\n");
    printf("===============\n");

    printf("Estado: %c\n", estado2);
    printf("Codigo Carta: %s\n", cod_carta2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: R$ %.2f\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", ponto_tur2);

    return 0;
}
