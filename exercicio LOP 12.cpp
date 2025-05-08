#include <stdio.h>// Biblioteca 

// Define uma estrutura 

int main (){
    float numero[10];
	int i;
	
	for(i=0;i<=9;i++)//repeticao ate os numeros desejados
	{
	printf("Digite um numero\n");
	scanf("%f", &numero[i]);
	}
	float maior = numero[0], menor = numero[0];
	
	for(i=1;i<10;i++){//repeticao ate os numeros desejados
		if(numero[i]>maior){
		maior = numero[i];
		}
		if(numero[i]<menor){
		menor = numero[i];
		}
	}
	

	
	printf("o numero maior e %.2f\n", maior);
	printf("o numero menor e %.2f\n", menor);
	return 0;//encerramento
}