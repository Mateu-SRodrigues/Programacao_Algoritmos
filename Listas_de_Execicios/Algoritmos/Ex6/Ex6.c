/*6. Maria quer revisar um pouco de matemática básica e praticar programação, então ela  decidiu fazer os dois ao mesmo tempo. 
Ela precisa de um algoritmo que, lendo os 3  coeficientes a, b e c, determine, com base no delta (b² − 4*a*c), o seguinte:
        ● Caso o delta seja maior que 0: Informe que existem duas raízes −b±√(b² - 4*a*c)/2a reais 
          e diferentes e apresente apenas as raízes reais positivas da equação;
        ● Caso o delta seja igual a 0: Informe que existe uma raiz real repetida e  apresente qual é essa raiz;
        ● Caso o delta seja menor que 0: Informe que não existem raízes reais para  aquela equação.
*/
#include <stdio.h>
#include <math.h>

int main(){
        float a, b, c, del, x1, x2;

        printf("Digite o coeficiente a: ");
        scanf("%f", &a);

        printf("Digite o coeficiente b: ");
        scanf("%f", &b);

        printf("Digite o coeficiente c: ");
        scanf("%f", &c);

        del = b*b - (4*a*c);

        if (del < 0){
                printf("Não existem raizes reais!\n");
        }
        else if(del == 0){
                x1 = -b / (2*a);
                printf("Existe uma raiz real e repetida: %.2f", x1);
        }
        else{ // delta > 0
                x1 = (-b + sqrt(del))/(2*a);
                x2 = (-b - sqrt(del))/(2*a);

                if (x1 > 0 && x2 > 0){
                        printf("Existem duas raizes reais e diferentes, com x1>0 e x2>0; x1 = %.2f, x2 = %.2f", x1,x2);
                }
                else if (x1 > 0){
                        printf("Raiz positiva: x1 = %.2f\n", x1);
                }
                else if (x2 > 0){
                        printf("Raiz positiva: x2 = %.2f\n", x2);
                }
                else {
                        printf("Nenhuma das raizes e positiva.\n");
                }
        }
        return 0;
}