#include <stdio.h>//blibioteca
//crie uma estrutura e coloque os nomes

int main (){
	int voto, idade;//informaçoes
	
	printf("qual a sua idade?\n");
	scanf("%d", &idade);
	
	if (idade <=18)
	{
		printf("voce nao vota.");
	}
	else if (idade >=70)
	{
		printf("seu voto e facultativo");
	}
	else 
	{
		printf("seu voto e obrigatorio");
	}
	
	return 0;//encerramento
	

	}