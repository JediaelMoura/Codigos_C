#include <stdio.h>
void main(){

float av1, av2, media;

printf("Informe a nota da AV1: \n");
	scanf(" %f", &av1);

printf("Informe a nota da AV2: \n");
	scanf(" %f", &av2);

media = (av1+av2) / 2;


if (media>=7)
{
	if(media<=10)
		printf("\nPARAB%cNS! Voc%c est%c aprovado!\n\a", 144, 136, 160);
	else 
		printf("Valor incorreto da media");

}else 
	if(media>=5){
			printf("\nVoc%c precisar%c fazer a recupera%c%co.\n", 136, 160, 135, 198);
	}else 
		if(media>=0){
			printf("\nDesta vez voc%c foi reprovado. Mas n%co desista, tente novamente.\n", 136, 160, 198);
	}else{
	
	printf("Valor incorreto da media");

}
}

