#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Exerc�cio: Sequ�ncia de n�meros inteiros terminada 
em zero e mostre cada n�mero lido (exceto o zero).*/

int main(){
	
	int num;
	scanf(" %d", &num);
	
	while (num!=0)
{
	printf("O n�mero lido foi = %d\n\n", num);
}
	

}
