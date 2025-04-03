#include <stdio.h>
#include <stdlib.h>

void limparBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main() {

    char codigo1[4];
    int populacao1;
    float area1, pib1;
    int pontosTuristicos1;

    char codigo2[4];
    int populacao2;
    float area2, pib2;
    int pontosTuristicos2;

    printf("\n---- CADASTRO DA CARTA 1 ----\n");
    printf("Código: ");
    scanf("%3s", codigo1);
    limparBuffer();
    printf("População: ");
    while (scanf("%d", &populacao1) != 1) {
        printf("Entrada inválida. Digite um número inteiro: ");
        limparBuffer();
    }
    printf("Área (km²): ");
    while (scanf("%f", &area1) != 1) {
        printf("Entrada inválida. Digite um número decimal: ");
        limparBuffer();
    }
    printf("PIB (bilhões USD): ");
    while (scanf("%f", &pib1) != 1) {
        printf("Entrada inválida. Digite um número decimal: ");
        limparBuffer();
    }
    printf("Número de pontos turísticos: ");
    while (scanf("%d", &pontosTuristicos1) != 1) {
        printf("Entrada inválida. Digite um número inteiro: ");
        limparBuffer();
    }

    printf("\n---- CADASTRO DA CARTA 2 ----\n");
    printf("Código: ");
    scanf("%3s", codigo2);
    limparBuffer();
    printf("População: ");
    while (scanf("%d", &populacao2) != 1) {
        printf("Entrada inválida. Digite um número inteiro: ");
        limparBuffer();
    }
    printf("Área (km²): ");
    while (scanf("%f", &area2) != 1) {
        printf("Entrada inválida. Digite um número decimal: ");
        limparBuffer();
    }
    printf("PIB (bilhões USD): ");
    while (scanf("%f", &pib2) != 1) {
        printf("Entrada inválida. Digite um número decimal: ");
        limparBuffer();
    }
    printf("Número de pontos turísticos: ");
    while (scanf("%d", &pontosTuristicos2) != 1) {
        printf("Entrada inválida. Digite um número inteiro: ");
        limparBuffer();
    }

    printf("\n==== CARTA 1 ====\n");
    printf("Código: %s\n", codigo1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões USD\n", pib1);
    printf("Pontos turísticos: %d\n", pontosTuristicos1);

    printf("\n==== CARTA 2 ====\n");
    printf("Código: %s\n", codigo2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões USD\n", pib2);
    printf("Pontos turísticos: %d\n", pontosTuristicos2);

    return 0;
}
