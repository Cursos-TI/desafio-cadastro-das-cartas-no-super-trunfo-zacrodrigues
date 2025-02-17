#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    short int codigoDaCidade1;
    char nomeDaCidade1[20];
    unsigned int populacaoDaCidade1;
    float areaDaCidade1;
    double pibDaCidade1;
    short int qtdPontosTuristicosDaCidade1;
    double densidadePopulacionalDaCidade1;
    double pibPerCapitaDaCidade1;
    double superPoderDaCidade1;

    short int codigoDaCidade2;
    char nomeDaCidade2[20];
    unsigned int populacaoDaCidade2;
    float areaDaCidade2;
    double pibDaCidade2;
    short int qtdPontosTuristicosDaCidade2;
    double densidadePopulacionalDaCidade2;
    double pibPerCapitaDaCidade2;
    double superPoderDaCidade2;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("*** Cadastro da Primera Cidade ***\n");
    printf("Código da cidade: ");
    scanf("%hd", &codigoDaCidade1);
    printf("Nome: ");
    scanf("%s", &nomeDaCidade1[0]);
    printf("População: ");
    scanf("%u", &populacaoDaCidade1);
    printf("Área: ");
    scanf("%f", &areaDaCidade1);
    printf("PIB: ");
    scanf("%lf", &pibDaCidade1);
    printf("Quantidade de pontos turísticos: ");
    scanf("%hd", &qtdPontosTuristicosDaCidade1);

    densidadePopulacionalDaCidade1 = (double) populacaoDaCidade1 / (double) areaDaCidade1;
    pibPerCapitaDaCidade1 = pibDaCidade1 / (double) populacaoDaCidade1;

    superPoderDaCidade1 = (double) populacaoDaCidade1 + (double) areaDaCidade1 + pibDaCidade1 + (double) qtdPontosTuristicosDaCidade1 + densidadePopulacionalDaCidade1 + pibPerCapitaDaCidade1;

    printf("\n\n*** Cadastro da Segunda Cidade ***\n");
    printf("Código da cidade: ");
    scanf("%hd", &codigoDaCidade2);
    printf("Nome: ");
    scanf("%s", &nomeDaCidade2[0]);
    printf("População: ");
    scanf("%u", &populacaoDaCidade2);
    printf("Área: ");
    scanf("%f", &areaDaCidade2);
    printf("PIB: ");
    scanf("%lf", &pibDaCidade2);
    printf("Quantidade de pontos turísticos: ");
    scanf("%hd", &qtdPontosTuristicosDaCidade2);

    densidadePopulacionalDaCidade2 = (double) populacaoDaCidade2 / (double) areaDaCidade2;
    pibPerCapitaDaCidade2 = pibDaCidade2 / (double) populacaoDaCidade2;
    
    superPoderDaCidade2 = (double) populacaoDaCidade2 + (double) areaDaCidade2 + pibDaCidade2 + (double) qtdPontosTuristicosDaCidade2 + densidadePopulacionalDaCidade2 + pibPerCapitaDaCidade2;

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("\n\n*** Dados da Primeira Cidade Cadastrada ***\n");
    printf("Código: %d\n", codigoDaCidade1);
    printf("Nome: %s\n", nomeDaCidade1);
    printf("População: %u\n", populacaoDaCidade1);
    printf("Área: %.3f\n", areaDaCidade1);
    printf("PIB: %.2f\n", pibDaCidade1);
    printf("Pontos Turísticos: %d\n", qtdPontosTuristicosDaCidade1);
    printf("Densidade Populacional: %.2lf\n", densidadePopulacionalDaCidade1);
    printf("PIB per Capita: %.2lf\n", pibPerCapitaDaCidade1);
    printf("Super Poder: %.2lf\n", superPoderDaCidade1);

    printf("\n\n*** Dados da Segunda Cidade Cadastrada ***\n");
    printf("Código: %d\n", codigoDaCidade2);
    printf("Nome: %s\n", nomeDaCidade2);
    printf("População: %u\n", populacaoDaCidade2);
    printf("Área: %.3f\n", areaDaCidade2);
    printf("PIB: %.2f\n", pibDaCidade2);
    printf("Pontos Turísticos: %d\n", qtdPontosTuristicosDaCidade2);
    printf("Densidade Populacional: %.2lf\n", densidadePopulacionalDaCidade2);
    printf("PIB per Capita: %.2lf\n", pibPerCapitaDaCidade2);
    printf("Super Poder: %.2lf\n", superPoderDaCidade2);
    
    printf("\n\n*** Comparação entre os dados das duas cidades ***\n");
    printf("%s tem maior população que %s? %d\n", nomeDaCidade1, nomeDaCidade2, populacaoDaCidade1 > populacaoDaCidade2);
    printf("%s tem uma área maior que %s? %d\n", nomeDaCidade1, nomeDaCidade2, areaDaCidade1 > areaDaCidade2);
    printf("%s tem o PIB maior que %s? %d\n", nomeDaCidade1, nomeDaCidade2, pibDaCidade1 > pibDaCidade2);
    printf("%s tem mais pontos turísticos que %s? %d\n", nomeDaCidade1, nomeDaCidade2, qtdPontosTuristicosDaCidade1 > qtdPontosTuristicosDaCidade2);
    printf("%s tem menos densidade populacional que %s? %d\n", nomeDaCidade1, nomeDaCidade2, densidadePopulacionalDaCidade1 < densidadePopulacionalDaCidade2);
    printf("%s tem o PIB per Capita maior que %s? %d\n", nomeDaCidade1, nomeDaCidade2, pibPerCapitaDaCidade1 > pibPerCapitaDaCidade2);
    printf("%s tem o Super Poder maior que %s? %d\n", nomeDaCidade1, nomeDaCidade2, superPoderDaCidade1 > superPoderDaCidade1);
    
    return 0;
}
