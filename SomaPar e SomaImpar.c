#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*
Exercício FOR
Consiste em:
-O primeiro dado é a quantidade de números da lista: 5
-Na sequência, os 5 números: 1 2 3 4 5
-A soma dos pares: 2 + 4 = 6
-A soma dos ímpares: 1 + 3 + 5 = 9 
*/

int main()
{
	int cont,n,num,somapar,somaimpar;
	
	somapar=0;
	somaimpar=0;
	
	setlocale(LC_ALL,"Portuguese");
	
	printf ("Digite a quantidade de números da lista: ");
	scanf("%d",&n);

for (cont=1;cont<=n;cont++)
{
	printf ("Digite um número: ");
	scanf("%d",&num);
	
	if (num%2==0)
		somapar=somapar+num;

	else
		somaimpar=somaimpar+num;
}

	printf ("A soma dos números pares = %d\n",somapar);
	printf ("A soma dos números ímpares = %d\n",somaimpar);

return 0;
}
