#include <stdio.h>

int main(){
char sexo;

printf("Qual %c o seu sexo? (f/m) ", 130);
scanf(" %c", &sexo);

	if(sexo == 'f' || sexo == 'F'){
			printf("Voc%c %c do sexo feminino. ", 136, 130);
	} 
	else if(sexo == 'm' || sexo == 'M'){
				printf("Voc%c %c do sexo masculino. ", 136, 130);
	} 
		else {
			printf("Voc%c digitou um valor de sexo invalido. ", 136);
}
}
