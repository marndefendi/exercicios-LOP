#include <stdio.h>// Biblioteca 

// Define uma estrutura

int main (){
	int numeros[5], i;
	
	printf("Digite 5 numeros\n");
	for (i = 0;i < 5;i++) {//repeticao ate o numero desejado
		printf("Numero %d: ", i + 1);
		scanf("%d", &numeros[i]);
	}
	
	printf("Numeros na ordem inversa: \n");
	for (i = 4; i >= 0; i--) {//repeticao ate o numero desejado
		printf("%d\n", numeros[i]);
	}
	return 0;// Encerra o programa retornando 0
	}