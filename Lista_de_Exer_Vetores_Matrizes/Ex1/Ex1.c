/*1. José está enfrentando dificuldades em uma outra funcionalidade de seu sistema escolar. Ele precisa calcular a ”média funcional” da turma, composta por 10 alunos. A média funcional é a média das notas de todos os alunos que não foram reprovados, ou seja, os alunos que obtiveram nota maior que 4. Para isso, considere as notas dos 10 alunos da turma como um vetor de 10 valores reais e desenvolva um algoritmo que resolva esse problema.*/
#include <stdio.h>

int main(){

float notas[10];
float media = 0;
int cont = 0;

//Utiliza um contador para solicitar uma determinada entrada 10 vezes
for(int i=0; i<10;i++){
    //Solicita a nota de um determinado aluno e armazena dentro do vetor notas
    printf("Digite a nota do aluno %d: ", i+1);
    scanf("%f", &notas[i]);
        //Percorre o vetor, procurando por um índice que satisfaça a condição
        if(notas[i] > 4){
        //Incrementa o valor do índice à media
        media += notas[i];
        // Variável contador recebi 1 cada vez que a condição é satisfeita
        cont ++;
        }
}
//Calcula a média
media = media/cont;
//Exibi a média com duas casas após a vírgula
printf("A média funcional da turma é %.2f.", media);
return 0;
}