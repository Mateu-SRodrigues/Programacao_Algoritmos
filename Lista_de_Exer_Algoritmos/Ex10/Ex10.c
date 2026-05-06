/*10. Imagine que você está organizando um encontro com amigos em uma cafeteria  movimentada. Você deseja chegar um pouco mais cedo para garantir uma mesa e  talvez fazer um pedido antecipado. Para ajudá-lo a planejar, você decide criar um  programa simples que solicita o horário em que você e seus amigos desejam chegar  à cafeteria e retorna o horário correspondente a uma hora antes.*/
#include<stdio.h>

int main()
{
    int hora, min;

    printf("Digite o horario em que voce deseja chegar (HH MM): ");
    scanf("%d %d", &hora, &min);
    
    hora--;
    if (hora < 0){
        hora = 23;
    }
    
    printf("Horario correspondente a uma hora antes: %d:%d", hora, min);

    return 0;
}
