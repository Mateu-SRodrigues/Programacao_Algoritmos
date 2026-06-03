/*10. Imagine que você está organizando um encontro com amigos em uma cafeteria  movimentada. Você deseja chegar um pouco mais cedo para garantir uma mesa e  talvez fazer um pedido antecipado. Para ajudá-lo a planejar, você decide criar um  programa simples que solicita o horário em que você e seus amigos desejam chegar  à cafeteria e retorna o horário correspondente a uma hora antes.*/
#include<stdio.h>

int main()
{
    int hora, min;
    //Solicita valores de entrada
    printf("Digite o horario em que voce deseja chegar (HH MM): ");
    scanf("%d %d", &hora, &min);
    
    //Valida as horas
    while (hora < 0 || hora > 24){
        printf("Hora inválida!Digite um horario valido: ");
        scanf("%d", &hora);
    }
    //Admite 00h00 == 24h00
    if (hora == 0)
    {
        hora = 24;
    }
    //Valida os minutos
    while (min < 0){
        printf("Minuto inválido!Digite minuto valido: ");
        scanf("%d", &min);
    }
    /*Normaliza minutos >= 60: subtrai 60 a cada iteração
    e incrementa a hora correspondente.
       Exemplo: 14:75 → hora--, min = 75-60 = 15, hora = 14:15*/
    while (min >= 60){
        min -= 60;
        hora ++;
    }
    //Subtrai uma hora para obter o horário de chegada antecipado
    hora--;
    printf("Horario correspondente a uma hora antes: %d:%02d", hora, min);
    return 0;
}
