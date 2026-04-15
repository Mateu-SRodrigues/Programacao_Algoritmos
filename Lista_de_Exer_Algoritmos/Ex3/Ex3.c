/*3. Depois de um longo dia dando aulas, Ricardo precisa de sua ajuda para calcular as  médias finais de seus alunos. 
    Sabendo que a média final é calculada pela fórmula  abaixo, construa um algoritmo que, dadas as notas, calcule a nota final. NF (nota final),  Av1 (avaliação 1), Tb1 (trabalho 1) e Tb2 (trabalho 2). 
    ���� =����1 + (����1 + ����2)
*/
#include <stdio.h>

int main()
{
    float av1, tb1, tb2, NF;

    printf("Digite a nota da Avaliação 1: ");
    scanf("%f", &av1);
    printf("Digite a nota do Trabalho 1: ");
    scanf("%f", &tb1);
    printf("Digite a nota do Trabalho 2: ");
    scanf("%f", &tb2);

    NF = av1 + (tb1 + tb2)/2;
    printf("A nota final e %f", NF);

    return 0;
}
