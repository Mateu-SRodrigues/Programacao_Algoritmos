/*Ex1. Laura está criando um programa para um projeto de pesquisa sobre o envelhecimento  humano e precisa de ajuda.

    a. Desenvolva um algoritmo que calcule a idade de uma pessoa de acordo com sua data de nascimento. Ex: Fulano nasceu 15 de agosto de 1999 Fulano tem 25 anos
    b. Na verdade, ela precisa de um algoritmo que converta a data de nascimento, fornecida em anos, meses e dias, para o formato de dias. Não se preocupe com ano bissextos e considere que todos os meses têm 30 dias. 
    Ex: Fulano nasceu 15 de agosto de 1999 
        Fulano tem 9380 dias de vida.*/
#include <stdio.h>

int main(){
    char nome[100];
    int diaNasc, mesNasc, anoNasc, dia, mes, ano;
    int idade;
    int dias = 0;
    
    printf("Digite o nome da pessoa: ");
    scanf("%s", nome);
    printf("Digite o dia de nascimento: ");
    scanf("%2d", &diaNasc);
    printf("Digite o mês de nascimento: ");
    scanf("%2d", &mesNasc);
    printf("Digite o ano de nascimento: ");
    scanf("%4d", &anoNasc);

    printf("Digite o dia atual: ");
    scanf("%2d", &dia);
    printf("Digite o mês atual: ");
    scanf("%2d", &mes);
    printf("Digite o ano atual: ");
    scanf("%4d", &ano);

    idade = ano - anoNasc;
    printf("%s tem %d anos.\n", nome, idade);

    dias += (ano * 365) + (mes * 30) + dia;//Convertendo data atual para dias
    dias -=  (anoNasc * 365) + (mesNasc * 30) + diaNasc;

    printf("%s tem %d dias de vida.", nome, dias);
    return 0;
}