/*5. Um médico está realizando uma pesquisa sobre saúde e deseja calcular o IMC (Índice  de Massa Corporal) de seus pacientes. Ele tem as seguintes informações:

O IMC é calculado pela fórmula:  
        IMC = peso(kg)/altura(m)² 
O peso dos pacientes é dado em quilogramas (kg) e a altura em metros (m).

Crie um algoritmo que, dado o peso e a altura de um paciente, calcule o IMC e forneça  uma classificação de acordo com a tabela abaixo: 
    IMC abaixo de 18.5: Abaixo do peso 
    IMC entre 18.5 e 24.9: Peso normal 
    IMC entre 25.0 e 29.9: Sobrepeso 
    IMC acima de 30.0: Obesidade
*/
#include <stdio.h>

int main()
{
    float kg, m, IMC;
    printf("Digite o seu peso em kg: ");
    scanf("%f", &kg);
    printf("Digite a sua altura em m: ");
    scanf("%f", &m);

    IMC = kg / (m*m);
    printf("O IMC = %.2f \n", IMC);

    if (IMC < 18.5)
    {
        printf("Voce esta abaixo do peso.");
    }
    else if (IMC >= 18.5 && IMC <= 24.9)
    {
        printf("Voce esta com o peso normal.");
    }
    else if (IMC >= 25 && IMC <= 29.9)
    {
        printf("Voce esta com o sobrepeso.");
    }
    else if (IMC >= 30)
    {
        printf("Voce esta com obesidade.");
    }

    return 0;
}
