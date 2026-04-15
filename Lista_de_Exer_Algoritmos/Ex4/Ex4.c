/*4. Um aluno de Ciências da Computação da UECE está com dificuldade na cadeira de  Geometria Analítica e cansado de calcular o produto interno de dois vetores. Faça um  algoritmo que receba as coordenadas de dois vetores e calcule o produto interno, de  acordo com as anotações do aluno:
    "Se a=(a1,a2,a3) e b=(b1,b2,b3) são vetores tridimensionais, então o produto escalar entre a e b pode ser expresso como:
                a*b = a1*b1 + a2*b2 + a3*b3" */
#include <stdio.h>

int main()
{
    int a, b, A[3], B[3];
    int prod = 0;

    for (int i = 0; i < 3; i++)
    {
        printf("Digite a coordenada %d do vetor a: ", i+1);
        scanf("%d", &a);
        A[i] = a;
    }
    for (int i = 0; i < 3; i++)
    {
        printf("Digite a coordenada %d do vetor b: ", i+1);
        scanf("%d", &b);
        B[i] = b;
    }
    for (int j = 0; j < 3; j++)
    {
        prod += A[j]*B[j];
    }
    printf("A x B = %d", prod);

    return 0;
}
