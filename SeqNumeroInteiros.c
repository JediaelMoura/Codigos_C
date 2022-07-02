#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Exercício: Sequência de números inteiros terminada 
em zero e mostre cada número lido (exceto o zero).*/

int main(){
	
	int num;
	scanf(" %d", &num);
	
	while (num!=0)
{
	printf("O número lido foi = %d\n\n", num);
}
	

}
