#include <stdio.h>
//@author Jediael Moura

void main(){

/* 	ATENÇÃO
	a - Estoque atual; 
	b - Estoque mínimo; 
	c - Controle de estoque;
	d - Metade.
*/	
	int a, b, c;

	
	c = 100;
	b = 40;

/*	
		printf("A quantidade aceit%cvel para este produto %c: ", 160, 130);
			scanf(" %d", &c);
	
		printf("O estoque m%cnimo deste produto %c: ", 161, 130);
			scanf(" %d", &b);
*/		
		printf("Quantidade atual do produto: ");
			scanf(" %d", &a);
	
	if ((b>0 && b>a) || (a==0)){
		printf("\nSeu estoque est%c baixo, contate o fornecedor para realizar um novo pedido.\n\a", 160);

}	else{
	printf("\nA quantidade ainda est%c acima da m%cnima exigida para um novo pedido!", 160, 161);
}

}

