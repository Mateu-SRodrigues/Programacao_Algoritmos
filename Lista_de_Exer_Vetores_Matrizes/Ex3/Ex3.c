/*3. Roberto é o dono de uma empresa com 20 filiais e precisa de ajuda para criar um algoritmo. Ele possui
    um vetor com 20 valores reais, onde valores positivos representam filiais lucrativas e valores negativos
    representam filiais que dão prejuízo. Você deve desenvolver um algoritmo que faça o seguinte:
    (a) Imprima o índice no vetor de todas as empresas que dão lucro;
    (b) Calcule a média dos lucros, desconsiderando todas as filiais que dão prejuízo.
*/
#include<stdio.h>

int main() {
	float filiais[20];
	float media = 0;
	int cont  = 0;

	for(int i = 0; i<20; i++) {
		printf("Digite o lucro da filial %d: ", i+1);
		scanf("%f", &filiais[i]);
	}
	for(int j = 0; j<20; j++) {
		if(filiais[j] > 0) {
			printf("Empresas que dao lucro (filial %f): %f", filiais[j]);
			media += filiais[j];
			cont++;
		}
	}
	if (cont == 0){
		printf("Nenhum lucro registrado!");
	}
	else{
		media = media/cont;
    	printf("A média dos lucros é: %.2f", media);
	}
    
}