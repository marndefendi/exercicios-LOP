#include <stdio.h>// Biblioteca 

// Define uma estrutura 

int main()
{
    int num, i, fatorial = 1;
    
    printf("Digite um numero para ver sua fatoracao: ");
    scanf("%d", &num);
    
    for(i=1;i<=num;i++){  //faz um loop ate o numero selecionado
        fatorial *= i; //vai multipilcar o fatorial pelo i
    }
    printf("O fatorial de %d é %d\n", num, fatorial);
    
    return 0;
}