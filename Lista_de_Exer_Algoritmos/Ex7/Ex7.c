/*7. Ricardo ainda precisa de uma última ajuda. Dadas três notas diferentes, ele precisa  de um programa que compare as notas e determine, e por fim, imprima: ● A menor nota; 
                  ● A maior nota; 
                  ● A nota média.
*/
#include <stdio.h>

int main()
{
    float av1, tb1, tb2, menor, maior, meio;

    printf("Digite a nota da Avaliacao 1: ");
    scanf("%f", &av1);
    printf("Digite a nota do Trabalho 1: ");
    scanf("%f", &tb1);
    printf("Digite a nota do Trabalho 2: ");
    scanf("%f", &tb2);

    // Encontrando o menor valor:
    menor = av1;
    if (tb1 < menor) menor = tb1;
    if (tb2 < menor) menor = tb2;

    // Encontrando o maior valor:
    maior = av1;
    if (tb1 > maior) maior = tb1;
    if (tb2 > maior) maior = tb2;

    // Calculando valor intermediário:
    meio = av1 + tb1 + tb2 - maior - menor;

    printf("\nMenor nota: %.2f", menor);
    printf("\nMaior nota: %.2f", maior);
    printf("\nNota intermediária: %.2f\n", meio);

    return 0;
}