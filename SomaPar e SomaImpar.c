#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*
Exerc�cio FOR
Consiste em:
-O primeiro dado � a quantidade de n�meros da lista: 5
-Na sequ�ncia, os 5 n�meros: 1 2 3 4 5
-A soma dos pares: 2 + 4 = 6
-A soma dos �mpares: 1 + 3 + 5 = 9 
*/

int main()
{
	int cont,n,num,somapar,somaimpar;
	
	somapar=0;
	somaimpar=0;
	
	setlocale(LC_ALL,"Portuguese");
	
	printf ("Digite a quantidade de n�meros da lista: ");
	scanf("%d",&n);

for (cont=1;cont<=n;cont++)
{
	printf ("Digite um n�mero: ");
	scanf("%d",&num);
	
	if (num%2==0)
		somapar=somapar+num;

	else
		somaimpar=somaimpar+num;
}

	printf ("A soma dos n�meros pares = %d\n",somapar);
	printf ("A soma dos n�meros �mpares = %d\n",somaimpar);

return 0;
}
