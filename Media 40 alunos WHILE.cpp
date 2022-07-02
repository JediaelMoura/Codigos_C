#include <stdio.h>
#include <stdlib.h>

int main(){

float av1, av2, av3, media;
int cont;
cont=1;
	while(cont<=40)
	{

		printf("Informe a nota da AV1: \n");
		scanf(" %f", &av1);
		
		printf("Informe a nota da AV2: \n");
		scanf(" %f", &av2);
	
		printf("Informe a nota da AV3: \n");
		scanf(" %f", &av3);

		media = ((av1+av2+av3) / 3);

		if (media>=7)
		{
			if(media<=10)
			printf("\nPARABENS! Voce foi aprovado e sua media e: %.2f\n\n=================================================================\n\n\a", media);
			else 
			printf("\nValor incorreto da media.\n\n=================================================================\n\n");
		}else 
			if(media>=5)
			{
			printf("\nVoce precisara fazer a recuperacao. Sua media e: %.2f\n\n=================================================================\n\n", media);
			}else 
				if(media>=0)
				{
				printf("\nDesta vez voce foi reprovado. Mas nao desista, tente novamente. Sua media: %.2f\n\n=================================================================\n\n", media);
				}else
					{
					printf("Valor incorreto da media.\n\n=================================================================\n\n");
					return 0;
					}
					cont++;
	}
	
	return 0;
}

