#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

int num;

	setlocale(LC_ALL, "Portuguese");

	printf("Digite um n�mero: ");
	scanf(" %d", &num);
	
while(num!=0)
{
	printf("O n�mero lido foi: %d\n\n", num);
	printf("Digite um n�mero: ");
	scanf(" %d", &num);
}

return 0;
}
