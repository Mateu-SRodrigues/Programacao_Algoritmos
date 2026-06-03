/*8. Em uma partida de RPG, o mestre está determinando o resultado de uma batalha  para um jogador usando um dado. Escreva um algoritmo que receba um número  inteiro como entrada e, com base nesse número, determine se o jogador ganhou ou  perdeu a batalha. Se o número for par, o jogador vence; se for ímpar, o jogador perde.*/
#include <stdio.h>

int main(){
    char nome [100];
    int n;

    printf("Digite o nome do jogador: ");
    scanf("%s", &nome);

    printf("Digite o número do jogador: ");
    scanf("%s", &n);

    if(n%2 == 0){
        printf("0 jogador %s VENCEU!", nome);
    }
    else{
        printf("0 jogador %s PERDEU!", nome);
    } 

    return 0;
}