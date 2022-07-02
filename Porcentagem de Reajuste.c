#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Exerc�cio de FOR

*Consiste em: 
1
-Ler a % de reajuste;
2
-Inicializar com zero a vari�vel maiorsal.
3
-Repetir 40x
-Ler o sal�rio do funcion�rio; 
-Calcular o salario reajustado, aplicando a % de aumento lido;
-Se salarioreajustado > maiorsalario
maiorsalario = salarioreajustado;
4
-Exibir o conte�do da vari�vel maiorsalario*/


int main()
{
	float percreaj,salario,salarioreaj,maiorsal;
	int cont;
	
	maiorsal=0;
	
	//A bibiteca "locale.h" junto ao "setlocale(LC_ALL,"Portuguese")" - seleciona a linguagem em que ser� mostrada e lida pelo sistema.
		setlocale(LC_ALL,"Portuguese");
		
		printf("Percentual de reajuste salarial:");
		scanf ("%f",&percreaj);
		
	for (cont=1;cont<=50;cont++)
{
		printf("Informe o sal�rio do funcion�rio:");
		scanf("%f",&salario);

		salarioreaj=salario+(salario*percreaj/100);

		printf("O sal�rio reajustado �: %.2f \n\n",salarioreaj);
	if (salarioreaj>maiorsal)
 		maiorsal=salarioreaj;
}
	printf("O maior sal�rio reajustado � : %.2f",maiorsal);
return 0;
}
