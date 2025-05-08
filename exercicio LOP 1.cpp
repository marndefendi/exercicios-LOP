#include <stdio.h>

int main (){
    int numero;
	int opcmenu, par, impar;
	
	
	printf("\n Digite um numero\n");
	scanf("%d", &numero);
	
	if (numero %2 == 0) //USAMOS O IF PARA TERMOS DUAS OPCOES
	printf("o numero e par\n", par);
	
	
	else //USAMOS O ELSE PARA MOSTRAMOS QUE TEM MAIS UMA OPCAO INCLUSA. NAO PRECISAMOS ESPECIFICAR NADA POIS ELE SABE QUE SE FOR DIFERENTE DE "IF" JÁ É A OUTRA RESPOSTA
	printf("o numero e impar\n", impar);
	
	
	
	return 0;	
}