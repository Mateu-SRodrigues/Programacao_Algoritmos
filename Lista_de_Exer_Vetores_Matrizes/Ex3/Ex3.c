/*3. Roberto é o dono de uma empresa com 20 filiais e precisa de ajuda para criar um algoritmo. Ele possui
    um vetor com 20 valores reais, onde valores positivos representam filiais lucrativas e valores negativos
    representam filiais que dão prejuízo. Você deve desenvolver um algoritmo que faça o seguinte:
    (a) Imprima o índice no vetor de todas as empresas que dão lucro;
    (b) Calcule a média dos lucros, desconsiderando todas as filiais que dão prejuízo.
*/
#include<stdio.h>

int main() {
	//Declara o array filiais[] e as variáveis média e cont, a serem calculadas
	float filiais[20];
	float media = 0;
	int cont  = 0;

	//Laço for que solicita e armazena, por índice, o lucro de cada uma das filiais
	for(int i = 0; i<20; i++) {
		printf("Digite o lucro da filial %d: ", i+1);
		scanf("%f", &filiais[i]);
	}
	//Laço for que verifica e exibe as filiais que dão lucro
	for(int j = 0; j<20; j++) {
		//Percorre o vetor e verifica a condição índice por índice
		if(filiais[j] > 0) {
			//Imprime o valor do índice se ele for > 0 
			printf("Empresas que dao lucro (filial %d): %.2f \n", j+1, filiais[j]);
			//media recebe esses valores de lucro
			media += filiais[j];
			//cont registra +1 a cada lucro positivo
			cont++;
		}
	}
	//Condição que verifica se cont registrou nenhum lucro, se sim exibe uma mensagem correspondente
	if (cont == 0){
		printf("Nenhum lucro registrado!");
	}
	//Se não, exibe a média dos lucros
	else{
		//A media cossiste na divisão da soma dos valores positivos/quantidade desses valores
		media = media/cont;
    	printf("A média dos lucros é: %.2f", media);
	}
    return 0;
}