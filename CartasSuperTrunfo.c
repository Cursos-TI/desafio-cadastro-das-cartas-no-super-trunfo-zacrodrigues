#include <stdio.h>

int main() {
    char estadoDaCidade1;
    char codigoDaCidade1[3];
    char nomeDaCidade1[20];
    int populacaoDaCidade1;
    float areaDaCidade1;
    double pibDaCidade1;
    int qtdPontosTuristicosDaCidade1;
    float densidadePopulacionalDaCidade1;
    float pibPerCapitaDaCidade1;
    // double superPoderDaCidade1;

    char estadoDaCidade2;
    char codigoDaCidade2[3];
    char nomeDaCidade2[20];
    int populacaoDaCidade2;
    float areaDaCidade2;
    double pibDaCidade2;
    int qtdPontosTuristicosDaCidade2;
    float densidadePopulacionalDaCidade2;
    float pibPerCapitaDaCidade2;
    // double superPoderDaCidade2;
    
    printf("*** Cadastro da Primeira Carta ***\n");
    printf("Estado: ");
    scanf("%c", &estadoDaCidade1);
    printf("Código da Carta: ");
    scanf("%s", codigoDaCidade1);
    printf("Nome da Cidade: ");
    scanf("%s", nomeDaCidade1);
    printf("População: ");
    scanf("%d", &populacaoDaCidade1);
    printf("Área (em km²): ");
    scanf("%f", &areaDaCidade1);
    printf("PIB: ");
    scanf("%lf", &pibDaCidade1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &qtdPontosTuristicosDaCidade1);

    densidadePopulacionalDaCidade1 = (float) populacaoDaCidade1 / areaDaCidade1;
    pibPerCapitaDaCidade1 = (float) pibDaCidade1 / (float) populacaoDaCidade1;
    // superPoderDaCidade1 = (double) populacaoDaCidade1 + (double) areaDaCidade1 + pibDaCidade1 + (double) qtdPontosTuristicosDaCidade1 + densidadePopulacionalDaCidade1 + pibPerCapitaDaCidade1;

    printf("\n*** Carta 1 ***\n");
    printf("Estado: %c\n", estadoDaCidade1);
    printf("Código: %s\n", codigoDaCidade1);
    printf("Nome da Cidade: %s\n", nomeDaCidade1);
    printf("População: %d\n", populacaoDaCidade1);
    printf("Área: %.3f km²\n", areaDaCidade1);
    printf("PIB: %.2f bilhões de reais\n", pibDaCidade1);
    printf("Número de Pontos Turísticos: %d\n", qtdPontosTuristicosDaCidade1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacionalDaCidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapitaDaCidade1);
    // printf("Super Poder: %.2lf\n", superPoderDaCidade1);

    printf("\n*** Cadastro da Segunda Carta ***\n");
    printf("Estado: ");
    scanf(" %c", &estadoDaCidade2);
    printf("Código da Carta: ");
    scanf("%s", codigoDaCidade2);
    printf("Nome: ");
    scanf("%s", nomeDaCidade2);
    printf("População: ");
    scanf("%d", &populacaoDaCidade2);
    printf("Área (em km²): ");
    scanf("%f", &areaDaCidade2);
    printf("PIB: ");
    scanf("%lf", &pibDaCidade2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &qtdPontosTuristicosDaCidade2);

    densidadePopulacionalDaCidade2 = (float) populacaoDaCidade2 / areaDaCidade2;
    pibPerCapitaDaCidade2 = (float) pibDaCidade2 / (float) populacaoDaCidade2;
    // superPoderDaCidade2 = (double) populacaoDaCidade2 + (double) areaDaCidade2 + pibDaCidade2 + (double) qtdPontosTuristicosDaCidade2 + densidadePopulacionalDaCidade2 + pibPerCapitaDaCidade2;

    printf("\n*** Carta 2 ***\n");
    printf("Estado: %c\n", estadoDaCidade2);
    printf("Código: %s\n", codigoDaCidade2);
    printf("Nome da Cidade: %s\n", nomeDaCidade2);
    printf("População: %d\n", populacaoDaCidade2);
    printf("Área: %.3f km²\n", areaDaCidade2);
    printf("PIB: %.2f bilhões de reais\n", pibDaCidade2);
    printf("Número de Pontos Turísticos: %d\n", qtdPontosTuristicosDaCidade2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacionalDaCidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapitaDaCidade2);
    // printf("Super Poder: %.2lf\n", superPoderDaCidade2);
    
    // printf("\n*** Comparação entre os dados das duas cidades ***\n");
    // printf("%s tem maior população que %s? %d\n", nomeDaCidade1, nomeDaCidade2, populacaoDaCidade1 > populacaoDaCidade2);
    // printf("%s tem uma área maior que %s? %d\n", nomeDaCidade1, nomeDaCidade2, areaDaCidade1 > areaDaCidade2);
    // printf("%s tem o PIB maior que %s? %d\n", nomeDaCidade1, nomeDaCidade2, pibDaCidade1 > pibDaCidade2);
    // printf("%s tem mais pontos turísticos que %s? %d\n", nomeDaCidade1, nomeDaCidade2, qtdPontosTuristicosDaCidade1 > qtdPontosTuristicosDaCidade2);
    // printf("%s tem menos densidade populacional que %s? %d\n", nomeDaCidade1, nomeDaCidade2, densidadePopulacionalDaCidade1 < densidadePopulacionalDaCidade2);
    // printf("%s tem o PIB per Capita maior que %s? %d\n", nomeDaCidade1, nomeDaCidade2, pibPerCapitaDaCidade1 > pibPerCapitaDaCidade2);
    // printf("%s tem o Super Poder maior que %s? %d\n", nomeDaCidade1, nomeDaCidade2, superPoderDaCidade1 > superPoderDaCidade1);
    
    return 0;
}
