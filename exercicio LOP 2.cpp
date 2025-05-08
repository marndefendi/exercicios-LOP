#include <stdio.h>

int main (){
    float numero[2];
	int i;
	
	for(i=0;i<=1;i++) //USAMOS PARA REPETIR UM COMANDO SEM PRECISAR ESCREVER VARIAS VEZES
	{
	printf("Digite um numero\n");
	scanf("%f", &numero[i]);
	}
	float maior = numero[0], menor = numero[0];
	
	for(i=1;i<2;i++){ //USAMOS PARA REPETIR UM COMANDO SEM PRECISAR ESCREVER VARIAS VEZES
		if(numero[i]>maior){
		maior = numero[i];
		}
		if(numero[i]<menor){
		menor = numero[i];
		}
	}
	

	
	printf("o numero maior e %.2f\n", maior);
	printf("o numero menor e %.2f\n", menor);
	return 0;	
}