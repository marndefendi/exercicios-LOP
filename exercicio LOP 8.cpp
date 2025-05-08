#include <stdio.h>//blibioteca
//crie uma estrutura e coloque os nomes
int main()
{
    int i, soma = 0;
    
    for (i=0; i<=200; i++){ //Conta ate 200
        if (i % 2 == 0){ 
        soma += i ; 
        }
    }
    printf("A soma dos 100 primeiros numeros pares de 1 a 200 e : %d", soma);

    return 0;//encerramento
}