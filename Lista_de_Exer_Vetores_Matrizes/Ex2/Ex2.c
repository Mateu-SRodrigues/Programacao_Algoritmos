/*2. José precisa de ajuda em outra funcionalidade: o cálculo da ”média perfeita”da turma. A média perfeita é a média aritmética simples das notas da turma, mas caso o resultado final seja maior que 8, ela será igual a 10. Para isso, considere as notas dos 15 alunos da turma como um vetor de 15 valores reais e desenvolva um algoritmo que resolva esse problema.
*/
#include <stdio.h>

int main() {

    //Declaração de variáveis
	float notas[15];
	float m_perfeita = 0;
	int cont = 0;

    //Laço de repetição para solicitar as notas dos 15 alunos
	for(int i = 0; i<15; i++) {
        //No bloco do{} (Faça), o programa solicita e registra uma entrada no array enquanto , enquanto, no bloco while{} (Enquanto), testa a condição 'notas[i] < 0'
        do{
            //O bloco solicita uma entrada e armazena no array
            printf("Digite a nota do aluno %d: ", i+1);
            scanf("%f", &notas[i]);

            //Condição que invalída notas < 0 e solicita novamente a entrada
            if (notas[i] < 0)
                printf("Nota inválida! Digite-a novamente: ");
        } while (notas[i] < 0); /*Enquanto a condição for V: o programa volta para o do{} e repete o processo.
                                  Se a condição for F: o laço é encerrado e o código segue adiante.;*/

        //m_perfeita recebe somente as notas > 0 de acordo com o índice [i]
        m_perfeita += notas[i];
        //cont é incrementado
        cont ++;
    }
    //Calcula a média perfeita após o laço for ter rodado 15 vezes
	m_perfeita = m_perfeita/cont;

    //Arredonda a média perfeita para 10 se ela for maior que 8
	if(m_perfeita > 8)
		m_perfeita = 10;
	printf("A média perfeita da turma é %.2f.", m_perfeita);

	return 0;
}