#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	int num, maior, cont;
	maior=0;
	cont=1;
	setlocale(LC_ALL, "Portuguese");
		
	while(cont<=15)
	{
		printf("Digite um n�mero: ");
		scanf("%d", &num);
	
		if(num>maior)
		{
			maior=num;
		}
		cont++;
	
	}
	printf("O maior n�mero �: %d\n", maior);
	return 0;

}
