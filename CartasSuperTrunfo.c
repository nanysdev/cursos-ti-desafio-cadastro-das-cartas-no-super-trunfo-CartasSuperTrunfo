#include <stdio.h>
#include <string.h>

int main() {
    // Declaração de variaveis carta 1 e 2
    char estado1, estado2;
    char cod_carta1[5], cod_carta2[5]; // Codigo da carta (Letra do Estado + 0 + nº da Cidade) -> Ex: A01, A02...
    char cidade1[50], cidade2[5]; // Nome da cidade
    unsigned long int populacao1, populacao2; // Habitantes da cidade
    float area1, area2; // Area da cidade em km²
    float pib1, pib2; // Produto Interno Bruto da cidade
    int ponto_tur1, ponto_tur2; // Quantidade de pontos turisticos
    float densid_pop1, densid_pop2; // Densidade populacional
    float pib_percapita1, pib_percapita2; // PIB per capita
    float poder1, poder2; // Poder da carta

    // Cadastro de informacoes CARTA 1
    printf("\n----CADASTRO DA CARTA 1----\n");

    printf("Digite o Estado (Uma letra de A a H): \n");
    scanf("%c", &estado1);

    printf("Digite o codigo da Carta 1 (Ex: A01): \n");
    scanf("%s", &cod_carta1);

    printf("Digite o nome da Cidade:\n");
    getchar();
    fgets(cidade1, 50, stdin); // Lê o nome da cidade com espaços
    cidade1[strcspn(cidade1, "\n")] = 0; // Remove o caractere de nova linha, se presente


    printf("Digite a populacao da Cidade:\n"); //
    scanf("%lu", &populacao1);

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
    scanf("%lu", &populacao2);

    printf("Digite a area (km2) da Cidade:\n");
    scanf("%f", &area2);

    printf("Digite o PIB da Cidade:\n");
    scanf("%f", &pib2);

    printf("Digite quantidade de pontos turisticos da Cidade: \n");
    scanf("%d", &ponto_tur2);


    // Cálculo da densidade populacional e PIB per capita para carta 1 e 2
    densid_pop1 = populacao1 / area1;
    densid_pop2 = populacao2 / area2;
    pib_percapita1 = pib1 / populacao1;
    pib_percapita2 = pib2 / populacao2;
    
    
    // Impressão dos dados cadastrados 
    // DADOS CARTA 1
    printf("\n");
    printf("===============\n");
    printf("--- CARTA 1 ---\n");
    printf("===============\n");

    printf("Estado: %c\n", estado1);
    printf("Codigo Carta: %s\n", cod_carta1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: R$ %.2f\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", ponto_tur1);
    printf("Densidade Populacional: %.2f hab/km2\n", densid_pop1);
    printf("PIB per Capita: R$ %.2f\n", pib_percapita1);


    // DADOS CARTA 2
    printf("\n");
    printf("===============\n");
    printf("--- CARTA 2 ---\n");
    printf("===============\n");

    printf("Estado: %c\n", estado2);
    printf("Codigo Carta: %s\n", cod_carta2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: R$ %.2f\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", ponto_tur2);
    printf("Densidade Populacional: %.2f hab/km2\n", densid_pop2);
    printf("PIB per Capita: R$ %.2f\n", pib_percapita2);

    // Comparação dos atributos e determinação do vencedor em cada categoria
    // Cálculo do poder da carta 1 e 2

    poder1 = (float)((1/densid_pop1) + populacao1 + area1 + pib1 + ponto_tur1 + pib_percapita1);
    poder2 = (float)((1/densid_pop2) + populacao2 + area2 + pib2 + ponto_tur2 + pib_percapita2);

    // Apresentação dos vencedores em cada categoria
    printf("\n---Resultado da batalha entre as cartas 1 e 2 :---\n");
    printf("Populacao: Carta %d venceu!\n", populacao1 > populacao2 ? 1 : 2); // Atribui verdadeiro a 1 e falso a 2
    printf("Area: Carta %d venceu!\n", area1 > area2 ? 1 : 2);
    printf("PIB: Carta %d venceu!\n", pib1 > pib2 ? 1 : 2);
    printf("Pontos Turisticos: Carta %d venceu!\n", ponto_tur1 > ponto_tur2 ? 1 : 2);
    printf("Densidade Populacional: Carta %d venceu!\n", densid_pop1 < densid_pop2 ? 1 : 2);
    printf("PIB per Capita: Carta %d venceu!\n", pib_percapita1 > pib_percapita2 ? 1 : 2);
    printf("Super Poder: Carta %d venceu!\n", poder1 > poder2 ? 1 : 2);
    return 0;
}