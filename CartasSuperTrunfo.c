#include <stdio.h>
int main ()
{
    char estado1[50], cidade1[50], cod1[50], estado2[50], cidade2[50], cod2[50];
    int pop1, pop2, npt1, npt2;
    float pib1, pib2, area1, area2;

    printf("estado 1:"); //entrada do estado da primeira carta
    scanf(" %s", estado1);

    printf("cidade 1:"); //entrada da cidade da primeira carta
    scanf(" %s", cidade1);

    printf("codigo da cidade 1:"); // entrada do codigo da primeira carta
    scanf(" %s", cod1);

    printf("populacao 1:"); // entrada da populacao da primeira carta
    scanf(" %d", &pop1);

    printf("area 1:"); // entrada da area da primeira carta
    scanf(" %f", &area1);

    printf("pib 1:"); // entrada do pib da primeira carta
    scanf(" %f", &pib1);

    printf("numero de pontos turisticos 1:"); //   entrada do numero de pontos turisticos da primeira carta
    scanf(" %d", &npt1);

    printf("estado 2:"); // entrada do estado da segunda carta
    scanf(" %s", estado2);

    printf("cidade 2:"); // entrada da cidade da segunda carta
    scanf(" %s", cidade2);

    printf("codigo da cidade 2:"); // entrada do codigo da segunda carta
    scanf(" %s", cod2);

    printf("populacao 2:"); // entrada da populacao da segunda carta
    scanf(" %d", &pop2);

    printf("area 2:"); // entrada da area da segunda carta
    scanf(" %f", &area2);

    printf("pib 2:"); // entrada do pib da segunda carta 
    scanf(" %f",&pib2);

    printf("numero de pontos turisticos 2:"); // entrada do numero de pontos turisticos da segunda carta
    scanf(" %d", &npt2);

    printf("=======carta-1=======\n"); //saida da primeira carta
    printf("estado: %s\n", estado1);
    printf("codigo: %s\n", cod1);
    printf("nome da cidade: %s\n", cidade1);
    printf("populacao: %d\n", pop1);
    printf("area: %.2f km2\n", area1);
    printf("pib: %.2f bilhoes de reais\n", pib1);
    printf("pontos turisticos %d\n",npt1);
    printf("densidade populacional: %.2f hab/km2\n", pop1/area1);
    printf("pib per capita: %.2f reais\n", pib1/pop1);

    printf("=======carta-2=======\n"); //saida da segunda carta
    printf("estado: %s\n", estado2);
    printf("codigo: %s\n", cod2);
    printf("nome da cidade: %s\n", cidade2);
    printf("populacao: %d\n", pop2);
    printf("area: %.2f km2\n", area2);
    printf("pib: %.2f bilhoes de reais\n", pib2);
    printf("pontos turisticos %d\n",npt2);
    printf("densidade populacional: %.2f hab/km2\n", pop2/area2);
    printf("pib per capita: %.2f reais\n", pib2/pop2);

    int carta1 = 0, carta2 = 0;
    printf("=======comparacao_das_cartas=======\n"); //saida do comparativo entre as duas cartas
    if (pop1>pop2)
    printf("populacao: carta 1 venceu (1)\n", carta1++);
    else if (pop2>pop1)
    printf("populacao: carta 2 venceu (0)\n", carta2++);
    if (area1>area2)
    printf("area: carta 1 venceu (1)\n", carta1++);
    else if (area2>area1)
    printf("area: carta 2 venceu (0)\n", carta2++);
    if (pib1>pib2)
    printf("PIB: carta 1 venceu (1)\n", carta1++);
    else if (pib2>pib1)
    printf("PIB: carta 2 venceu (0)\n", carta2++);
    if (npt1>npt2)
    printf("pontos turisticos: carta 1 venceu (1)\n", carta1++);
    else if (npt2>npt1)
    printf("pontos turisticos: carta 2 venceu (0)\n", carta2++);
    if ((pop1/area1)>(pop2/area2))
    printf("densidade populacional: carta 1 venceu (1)\n", carta1++);
    else if ((pop2/area2)>(pop1/area1))
    printf("densidade populacional: carta 2 venceu (0)\n", carta2++);
    if ((pib1/pop1)>(pib2/pop2))
    printf("PIB per capita: carta 1 venceu (1)\n", carta1++);
    else if ((pib2/pop2)>(pib1/pop1))
    printf("PIB per capita: carta 2 venceu (0)\n", carta2++);
    float super_poder1 = (float)(pop1+npt1+area1+pib1)/(float)(pop1/area1);
    float super_poder2 = (float)(pop2+npt2+area2+pib2)/(float)(pop2/area2);
    if (super_poder1>super_poder2)
    printf("super poder: carta 1 venceu (1)\n", carta1++);
    else if (super_poder2>super_poder1)
    printf("super poder: carta 2 venceu (0)\n", carta2++);
    printf("resultado final: carta 1 (%d) x carta 2 (%d)\n", carta1, carta2);
    return(0);
}
