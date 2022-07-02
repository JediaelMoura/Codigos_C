#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	int num, maior, cont;
	maior=0;
	setlocale(LC_ALL, "Portuguese");
		
	for(cont=1;cont<=15;cont++)
	{
		printf("Digite um número: ");
		scanf("%d", &num);
	
		if(num>maior)
		{
			maior=num;
		}
	
	}
	printf("O maior número é: %d\n", maior);
	return 0;

}
