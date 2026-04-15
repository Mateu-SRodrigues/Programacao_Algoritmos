/*2. Henrique conseguiu um novo emprego como desenvolvedor, que paga muito bem,  mas agora ele precisa pagar imposto de renda. Faça um algoritmo que leia o salário  dele e mostre o salário após a retirada do imposto de renda, com base na tabela  abaixo: 
        Até R$ 2.259,20: 0%
        De R$ 2.259,20 até R$ 2.826,65: 7%
        De R$2.826,65 até R$ 3.751,05: 15%
        De R$ 3.751,06 até R$ 4.664,68: 22%
        Acima de R$ 4.664,68: 27% */
#include<stdio.h>

int main()
{
    float sal;
    printf("Digite o valor do salario: ");
    scanf("%f", &sal);

    if (sal <= 2259.20)
    {
        printf("Seu salario e de %.2f, com desconto.", sal);
    }
    else if (sal > 2259.20 || sal < 2826.65)
    {
        sal = sal * 0.93;
        printf("Seu salario e de %.2f, com desconto.", sal);
    }
    else if (sal > 2826.65 || sal < 3751.05)
    {
        sal = sal * 0.85;
        printf("Seu salario e de %.2f, com desconto.", sal);
    }
    else if (sal > 3751.05 || sal < 4664.68)
    {
        sal = sal * 0.78;
        printf("Seu salario e de %.2f, com desconto.", sal);
    }
    else if (sal > 4664.68)
    {
        sal = sal * 0.73;
        printf("Seu salario e de %.2f, com desconto.", sal);
    }

    return 0;
}
