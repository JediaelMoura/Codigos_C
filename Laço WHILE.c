#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

int num;

	setlocale(LC_ALL, "Portuguese");

	printf("Digite um número: ");
	scanf(" %d", &num);
	
while(num!=0)
{
	printf("O número lido foi: %d\n\n", num);
	printf("Digite um número: ");
	scanf(" %d", &num);
}

return 0;
}
