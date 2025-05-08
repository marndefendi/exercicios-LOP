#include <stdio.h>//blibioteca
//crie uma estrutura e coloque os nomes

int main() {
    int opcao, numero;//informacoes
//repeticao infitinas vezes que desejar
	do{
		printf("1 -ver a tabuada\n");
		printf("2 -sair\n");
		scanf("%d", &opcao);
	
	switch (opcao)
//para imprimir a tabuada do numero de desejar
	{
		case 1:
			printf("digite o numero da tabuada\n");
			scanf("%d", &numero);
			printf("%d * 1 = %d\n",numero,numero * 1);
			printf("%d * 2 = %d\n",numero,numero * 2);
			printf("%d * 3 = %d\n",numero,numero * 3);
			printf("%d * 4 = %d\n",numero,numero * 4);
			printf("%d * 5 = %d\n",numero,numero * 5);
			printf("%d * 6 = %d\n",numero,numero * 6);
			printf("%d * 7 = %d\n",numero,numero * 7);
			printf("%d * 8 = %d\n",numero,numero * 8);
	        printf("%d * 9 = %d\n",numero,numero * 9);
			printf("%d * 10 = %d\n",numero,numero * 10);
		 case 2:
		    	printf("saindo...\n");
		    	break;
		    default:
		    	printf("opcao invalida, tente novamente.\n");
		}
	}while(opcao != 0);//se for diverente de alguma opcao, o sistema ira fechar
		   
return 0;//encerramento
}