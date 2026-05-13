/*2. José precisa de ajuda em outra funcionalidade: o cálculo da ”média perfeita”da turma. A média perfeita é a média aritmética simples das notas da turma, mas caso o resultado final seja maior que 8, ela será igual a 10. Para isso, considere as notas dos 15 alunos da turma como um vetor de 15 valores reais e desenvolva um algoritmo que resolva esse problema.
*/
#include <stdio.h>

int main() {

	float notas[15];
	float m_perfeita = 0;
	int cont = 0;

	for(int i=0; i<15; i++) {
		printf("Digite a nota do aluno %d: ", i+1);
		scanf("%f", &notas[i]);
		m_perfeita += notas[i];
		cont ++;
	}
	m_perfeita = m_perfeita/cont;

	if(m_perfeita > 8) {
		m_perfeita = 10;
		printf("A média perfeita da turma é %.2f.", m_perfeita);
	}
	else
		printf("A média perfeita da turma é %.2f.", m_perfeita);

	return 0;
}