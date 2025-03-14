#include <stdio.h>

int main()
{
  // Definindo as variáveis para as duas cartas
  char estadoDaCidade1;
  char codigoDaCidade1[3];
  char nomeDaCidade1[10];
  unsigned long int populacaoDaCidade1;
  float areaDaCidade1;
  double pibDaCidade1;
  int qtdPontosTuristicosDaCidade1;
  float densidadePopulacionalDaCidade1;
  float pibPerCapitaDaCidade1;
  double superPoderDaCidade1;

  char estadoDaCidade2;
  char codigoDaCidade2[3];
  char nomeDaCidade2[10];
  unsigned long int populacaoDaCidade2;
  float areaDaCidade2;
  double pibDaCidade2;
  int qtdPontosTuristicosDaCidade2;
  float densidadePopulacionalDaCidade2;
  float pibPerCapitaDaCidade2;
  double superPoderDaCidade2;

  int atributoDeComparacao;

  // Entrada de dados da primeira carta
  printf("*** Cadastro da Primeira Carta ***\n");
  printf("Estado: ");
  scanf("%c", &estadoDaCidade1);
  printf("Código da Carta: ");
  scanf("%s", codigoDaCidade1);
  printf("Nome: ");
  scanf("%s", nomeDaCidade1);
  printf("População: ");
  scanf("%ld", &populacaoDaCidade1);
  printf("Área (em km²): ");
  scanf("%f", &areaDaCidade1);
  printf("PIB: ");
  scanf("%lf", &pibDaCidade1);
  printf("Número de Pontos Turísticos: ");
  scanf("%d", &qtdPontosTuristicosDaCidade1);

  // Cálculos de Densidade Populacional, PIB per Capita e Super Poder da primeira carta
  densidadePopulacionalDaCidade1 = (float)populacaoDaCidade1 / areaDaCidade1;
  pibPerCapitaDaCidade1 = (float)pibDaCidade1 / (float)populacaoDaCidade1;
  superPoderDaCidade1 = (double)populacaoDaCidade1 + (double)areaDaCidade1 + pibDaCidade1 + (double)qtdPontosTuristicosDaCidade1 - (double)densidadePopulacionalDaCidade1 + (double)pibPerCapitaDaCidade1;

  // Exibindo dados da primeira carta
  printf("\n*** Carta 1 ***\n");
  printf("Estado: %c\n", estadoDaCidade1);
  printf("Código: %s\n", codigoDaCidade1);
  printf("Nome da Cidade: %s\n", nomeDaCidade1);
  printf("População: %ld\n", populacaoDaCidade1);
  printf("Área: %.3f km²\n", areaDaCidade1);
  printf("PIB: %.2f bilhões de reais\n", pibDaCidade1);
  printf("Número de Pontos Turísticos: %d\n", qtdPontosTuristicosDaCidade1);
  printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacionalDaCidade1);
  printf("PIB per Capita: %.2f reais\n", pibPerCapitaDaCidade1);
  printf("Super Poder: %.2lf\n", superPoderDaCidade1);

  // Entrada de dados da segunda carta
  printf("\n*** Cadastro da Segunda Carta ***\n");
  printf("Estado: ");
  scanf(" %c", &estadoDaCidade2);
  printf("Código da Carta: ");
  scanf("%s", codigoDaCidade2);
  printf("Nome: ");
  scanf("%s", nomeDaCidade2);
  printf("População: ");
  scanf("%ld", &populacaoDaCidade2);
  printf("Área (em km²): ");
  scanf("%f", &areaDaCidade2);
  printf("PIB: ");
  scanf("%lf", &pibDaCidade2);
  printf("Número de Pontos Turísticos: ");
  scanf("%d", &qtdPontosTuristicosDaCidade2);

  // Cálculos de Densidade Populacional, PIB per Capita e Super Poder da segunda carta
  densidadePopulacionalDaCidade2 = (float)populacaoDaCidade2 / areaDaCidade2;
  pibPerCapitaDaCidade2 = (float)pibDaCidade2 / (float)populacaoDaCidade2;
  superPoderDaCidade2 = (double)populacaoDaCidade2 + (double)areaDaCidade2 + pibDaCidade2 + (double)qtdPontosTuristicosDaCidade2 - (double)densidadePopulacionalDaCidade2 + (double)pibPerCapitaDaCidade2;

  // Exibindo dados da segunda carta
  printf("\n*** Carta 2 ***\n");
  printf("Estado: %c\n", estadoDaCidade2);
  printf("Código: %s\n", codigoDaCidade2);
  printf("Nome da Cidade: %s\n", nomeDaCidade2);
  printf("População: %ld\n", populacaoDaCidade2);
  printf("Área: %.3f km²\n", areaDaCidade2);
  printf("PIB: %.2f bilhões de reais\n", pibDaCidade2);
  printf("Número de Pontos Turísticos: %d\n", qtdPontosTuristicosDaCidade2);
  printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacionalDaCidade2);
  printf("PIB per Capita: %.2f reais\n", pibPerCapitaDaCidade2);
  printf("Super Poder: %.2lf\n", superPoderDaCidade2);

  // Realizando comparação das cartas
  printf("\n*** Comparação de Cartas ***\n");
  printf("Escolha um atributo para comparação:\n");
  printf("1. População\n");
  printf("2. Área\n");
  printf("3. PIB\n");
  printf("4. Pontos Turísticos\n");
  printf("5. Densidade Demográfica\n");
  printf("Escolha: ");
  scanf("%d", &atributoDeComparacao);

  switch (atributoDeComparacao)
  {
  case 1:
    printf("\n... Comparando População ...\n");

    if (populacaoDaCidade1 > populacaoDaCidade2)
    {
      printf("\n*** Resultado: Carta 1 (%s) venceu! ***\n", nomeDaCidade1);
    }
    else if (populacaoDaCidade1 < populacaoDaCidade2)
    {
      printf("\n*** Resultado: Carta 2 (%s) venceu! ***\n", nomeDaCidade2);
    }
    else
    {
      printf("\n*** Resultado: Empate! ***\n");
    }

    break;
  case 2:
    printf("\n... Comparando Área ...\n");

    if (areaDaCidade1 > areaDaCidade2)
    {
      printf("\n*** Resultado: Carta 1 (%s) venceu! ***\n", nomeDaCidade1);
    }
    else if (areaDaCidade1 < areaDaCidade2)
    {
      printf("\n*** Resultado: Carta 2 (%s) venceu! ***\n", nomeDaCidade2);
    }
    else
    {
      printf("\n*** Resultado: Empate! ***\n");
    }

    break;
  case 3:
    printf("\n... Comparando PIB ...\n");

    if (pibDaCidade1 > pibDaCidade2)
    {
      printf("\n*** Resultado: Carta 1 (%s) venceu! ***\n", nomeDaCidade1);
    }
    else if (pibDaCidade1 < pibDaCidade2)
    {
      printf("\n*** Resultado: Carta 2 (%s) venceu! ***\n", nomeDaCidade2);
    }
    else
    {
      printf("\n*** Resultado: Empate! ***\n");
    }

    break;
  case 4:
    printf("\n... Comparando Pontos Turísticos ...\n");

    if (qtdPontosTuristicosDaCidade1 > qtdPontosTuristicosDaCidade2)
    {
      printf("\n*** Resultado: Carta 1 (%s) venceu! ***\n", nomeDaCidade1);
    }
    else if (qtdPontosTuristicosDaCidade1 < qtdPontosTuristicosDaCidade2)
    {
      printf("\n*** Resultado: Carta 2 (%s) venceu! ***\n", nomeDaCidade2);
    }
    else
    {
      printf("\n*** Resultado: Empate! ***\n");
    }

    break;
  case 5:
    printf("\n... Comparando Densidade Demográfica ...\n");

    if (densidadePopulacionalDaCidade1 < densidadePopulacionalDaCidade2)
    {
      printf("\n*** Resultado: Carta 1 (%s) venceu! ***\n", nomeDaCidade1);
    }
    else if (densidadePopulacionalDaCidade1 > densidadePopulacionalDaCidade2)
    {
      printf("\n*** Resultado: Carta 2 (%s) venceu! ***\n", nomeDaCidade2);
    }
    else
    {
      printf("\n*** Resultado: Empate! ***\n");
    }

    break;
  default:
    printf("\n!!! Opção inválida !!!\n");
    return 0;
    break;
  }

  return 0;
}
