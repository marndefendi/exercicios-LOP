#include <stdio.h>// Biblioteca 

// Define uma estrutura 

int main()
{
	int opcmenu, numero1, numero2;	
	do{
  printf("\n\n1-somar\n");
  printf("2-subtrair\n");
  printf("3-sair\n");
  scanf("%d", &opcmenu);

  switch (opcmenu)
  {
  	case 1: 
  	printf("digite o primeiro numero\n");
    scanf("%d", &numero1);
    printf("digite o segundo numero\n");
    scanf("%d", &numero2);
  	printf("%d + %d = %d", numero1, numero2, numero1 + numero2);
  	break;
  	case 2:printf(" digite o primeiro numero\n");
    scanf("%d", &numero1);
    printf("digite o segundo numero\n");
    scanf("%d", &numero2);
  	
  	printf("%d - %d = %d", numero1, numero2, numero1 - numero2);
  	break;
  	case 3:
  	opcmenu = 3;
  	printf("saindo...");
  	break;
  	default:
  		printf("Selecione uma opcao valida!");
  }
}while(opcmenu!=3);
  
  return 0;//encerramento
}