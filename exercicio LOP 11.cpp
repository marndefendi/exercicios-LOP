#include <stdio.h>// Biblioteca 

// Define uma estrutura 

int main()
{
	int numero[10], i, media, soma;
	 for(i=0;i<=9;i++){//repeticao ate o numero desejado
	 printf("digite um numero:\n");
	 scanf("%d", &numero[i]);
	 soma +=numero[i];
}
	 media = soma/10;

	 printf("sua media e de %d", media);
	 
	 return 0;//encarramento
	 
}
	 
	 
	 