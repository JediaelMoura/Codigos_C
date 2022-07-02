 #include <stdio.h>
 #include <locale.h>
 
 int main(void){


	char vg[5];
	int i;
	
	setlocale(LC_ALL, "Portuguese");
    for(i=0;i<=4;i++){

      printf("Insira a posição %i: ",i);

      scanf("%s",vg);

    }

    for(i=0;i<5;i=i+1){

      printf("%i: %s | ",i,vg);

    }

  return 0;



}
