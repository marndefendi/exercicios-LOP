#include <stdio.h>// Biblioteca 

// Define uma estrutura 

int main (){
int par,valores[10],i;

for(i=0;i<=9;i++){//repeticao ate os numeros desejados
scanf("%d", &valores[i]);
if(valores[i] %2 == 0){
	par++;
}
}
printf("%d valores pares", par);

    return 0;// Encerra o programa retornando 0
}