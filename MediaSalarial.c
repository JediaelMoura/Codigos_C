#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Exercício de FOR
*Consiste em: Entrada dos valores de salário de 10 pessoas,
*realizar o calculo da média e mostrar o maior salário e a média salarial da empresa.*/

int main()
{
	int cont;
	float maiorsalario, somasalarial, mediasalarial, salario;
	maiorsalario = somasalarial = 0;
	
	for(cont=1;cont<=5;cont++)
	{
		//A bibiteca "locale.h" junto ao "setlocale(LC_ALL,"Portuguese")" - seleciona a linguagem em que será mostrada e lida pelo sistema.
		setlocale(LC_ALL,"Portuguese");
		
		printf("Digite o salário do funcionário: \n");
		scanf(" %f", &salario);
		somasalarial=somasalarial+salario;
	
		if(salario>maiorsalario)
		{
		maiorsalario=salario;
		}
	}
	mediasalarial=somasalarial/5;
	printf ("O maior salário da empresa é: %.2f \n", maiorsalario);
	printf ("A media salarial da empresa é: %.2f \n", mediasalarial);
	return 0;
}
