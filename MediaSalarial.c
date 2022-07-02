#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Exerc�cio de FOR
*Consiste em: Entrada dos valores de sal�rio de 10 pessoas,
*realizar o calculo da m�dia e mostrar o maior sal�rio e a m�dia salarial da empresa.*/

int main()
{
	int cont;
	float maiorsalario, somasalarial, mediasalarial, salario;
	maiorsalario = somasalarial = 0;
	
	for(cont=1;cont<=5;cont++)
	{
		//A bibiteca "locale.h" junto ao "setlocale(LC_ALL,"Portuguese")" - seleciona a linguagem em que ser� mostrada e lida pelo sistema.
		setlocale(LC_ALL,"Portuguese");
		
		printf("Digite o sal�rio do funcion�rio: \n");
		scanf(" %f", &salario);
		somasalarial=somasalarial+salario;
	
		if(salario>maiorsalario)
		{
		maiorsalario=salario;
		}
	}
	mediasalarial=somasalarial/5;
	printf ("O maior sal�rio da empresa �: %.2f \n", maiorsalario);
	printf ("A media salarial da empresa �: %.2f \n", mediasalarial);
	return 0;
}
