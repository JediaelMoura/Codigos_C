#include <stdio.h>
#include <stdlib.h>

/*Exercício de FOR
*Contagem até 15x de entradas de diferentes numeros e indicar
*qual foi o maior número digitado dentre os 15.*/

int main()
{
	int num, maior, cont;
	maior=0;
	for(cont=1;cont<=15;cont++)
	{
		printf("Digite um numero: \n");
		scanf(" %d", &num);
		if (num>maior)
		{
			maior=num;
		}
	}
	printf("O maior dos números lidos = %d\n",maior);
	return 0;
}
