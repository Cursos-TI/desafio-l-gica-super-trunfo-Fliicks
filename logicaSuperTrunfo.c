#include <stdio.h>
#include <string.h>

// Estrutura para representar uma carta
struct Carta {
    char estado[3];
    char codigo[5];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidadePopulacional;
    float pibPerCapita;
};

int main() {
    struct Carta carta1, carta2;

    // --- Dados da Carta 1 ---
    printf("Digite os dados da carta 1:\n");

    printf("Estado: ");
    scanf("%s", carta1.estado);

    printf("Código: ");
    scanf("%s", carta1.codigo);

    printf("Cidade: ");
    scanf(" %[^\n]", carta1.cidade);

    printf("População: ");
    scanf("%d", &carta1.populacao);

    printf("Área (em km²): ");
    scanf("%f", &carta1.area);

    printf("PIB (em reais): ");
    scanf("%f", &carta1.pib);

    printf("Número de pontos turísticos: ");
    scanf("%d", &carta1.pontosTuristicos);

    carta1.densidadePopulacional = carta1.populacao / carta1.area;
    carta1.pibPerCapita = carta1.pib / carta1.populacao;

    // --- Dados da Carta 2 ---
    printf("\nDigite os dados da carta 2:\n");

    printf("Estado: ");
    scanf("%s", carta2.estado);

    printf("Código: ");
    scanf("%s", carta2.codigo);

    printf("Cidade: ");
    scanf(" %[^\n]", carta2.cidade);

    printf("População: ");
    scanf("%d", &carta2.populacao);

    printf("Área (em km²): ");
    scanf("%f", &carta2.area);

    printf("PIB (em reais): ");
    scanf("%f", &carta2.pib);

    printf("Número de pontos turísticos: ");
    scanf("%d", &carta2.pontosTuristicos);

    carta2.densidadePopulacional = carta2.populacao / carta2.area;
    carta2.pibPerCapita = carta2.pib / carta2.populacao;

    // --- Comparação baseada em PIB per Capita ---
    printf("\nComparação de cartas (Atributo: PIB per Capita)\n\n");
    printf("Carta 1 - %s (%s): %.2f reais\n", carta1.cidade, carta1.estado, carta1.pibPerCapita);
    printf("Carta 2 - %s (%s): %.2f reais\n", carta2.cidade, carta2.estado, carta2.pibPerCapita);

    if (carta1.pibPerCapita > carta2.pibPerCapita) {
        printf("\nResultado: Carta 1 (%s) venceu!\n", carta1.cidade);
    } else if (carta2.pibPerCapita > carta1.pibPerCapita) {
        printf("\nResultado: Carta 2 (%s) venceu!\n", carta2.cidade);
    } else {
        printf("\nResultado: Empate!\n");
    }

    return 0;
}
