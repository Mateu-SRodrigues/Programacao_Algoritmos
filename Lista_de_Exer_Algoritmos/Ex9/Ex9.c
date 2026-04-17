/*9. Elize é dona de um restaurante e está enfrentando um problema com o termostato de seu freezer, que possui apenas uma configuração em graus Celsius. No entanto, todo  o seu estoque de mantimentos está etiquetado com uma temperatura recomendada  em Fahrenheit, e fazer a conversão a cada vez que ela vai armazenar um novo item, é bastante trabalhoso. Portanto, ela precisa de um algoritmo que, dada uma  temperatura em Fahrenheit, diga seu equivalente em Celsius. Para checar os valores, ela também precisa que o mesmo algoritmo, dada uma temperatura em Celsius, diga seu equivalente em Fahrenheit. Observe que a conversão de graus Fahrenheit para Celsius é obtida por F = (5/9) * (C − 32). Deduza a fórmula de conversão de graus Celsius para Fahrenheit.*/
#include <stdio.h>

int main()
{
    float F, C;

    printf("Digite a temperatura em Celsius:  ");
    scanf("%f", &C);
    F = C * (9.0/5.0) + 32;
    printf("%.2f graus C = %.2f graus F.", C, F);

    printf("Digite a temperatura em Fahrenheit:  ");
    scanf("%f", &F);
    C = (5.0/9.0) * (F - 32);
    printf("%.2f graus F = %.2f graus C.", F, C);
    
    return 0;
}