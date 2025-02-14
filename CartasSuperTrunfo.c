#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    short int codigoDaCidade;
    char nome[20];
    unsigned int populacao;
    float area;
    double pib;
    short int qtdPontosTuristicos;
    double densidadePopulacional;
    double pibPerCapita;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("*** Cadastro de Cidade ***\n");
    printf("Código da cidade: ");
    scanf("%hd", &codigoDaCidade);

    printf("Nome: ");
    scanf("%s", &nome[0]);

    printf("População: ");
    scanf("%u", &populacao);

    printf("Área: ");
    scanf("%f", &area);

    printf("PIB: ");
    scanf("%lf", &pib);

    printf("Quantidade de pontos turísticos: ");
    scanf("%hd", &qtdPontosTuristicos);

    densidadePopulacional = (double) populacao / (double) area;
    pibPerCapita = pib / (double) populacao;
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("\n\n*** Dados da Cidade Cadastrada ***\n");
    printf("Código: %d\n", codigoDaCidade);
    printf("Nome: %s\n", nome);
    printf("População: %u\n", populacao);
    printf("Área: %.3f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Pontos Turísticos: %d\n", qtdPontosTuristicos);
    printf("Densidade Populacional: %.2lf\n", densidadePopulacional);
    printf("PIB per Capita: %.2lf\n", pibPerCapita);

    return 0;
}
