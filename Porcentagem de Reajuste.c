#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Exercício de FOR

*Consiste em: 
1
-Ler a % de reajuste;
2
-Inicializar com zero a variável maiorsal.
3
-Repetir 40x
-Ler o salário do funcionário; 
-Calcular o salario reajustado, aplicando a % de aumento lido;
-Se salarioreajustado > maiorsalario
maiorsalario = salarioreajustado;
4
-Exibir o conteúdo da variável maiorsalario*/


int main()
{
	float percreaj,salario,salarioreaj,maiorsal;
	int cont;
	
	maiorsal=0;
	
	//A bibiteca "locale.h" junto ao "setlocale(LC_ALL,"Portuguese")" - seleciona a linguagem em que será mostrada e lida pelo sistema.
		setlocale(LC_ALL,"Portuguese");
		
		printf("Percentual de reajuste salarial:");
		scanf ("%f",&percreaj);
		
	for (cont=1;cont<=50;cont++)
{
		printf("Informe o salário do funcionário:");
		scanf("%f",&salario);

		salarioreaj=salario+(salario*percreaj/100);

		printf("O salário reajustado é: %.2f \n\n",salarioreaj);
	if (salarioreaj>maiorsal)
 		maiorsal=salarioreaj;
}
	printf("O maior salário reajustado é : %.2f",maiorsal);
return 0;
}
