#include <stdio.h>//blibioteca
//crie uma estrutura e coloque os nomes

int main (){
int numero1, numero2, operacao; //informacoes

printf("digite seu primeiro numero\n");
scanf("%d", &numero1);
printf("digite seu segundo numero\n");
scanf("%d", &numero2);
//menu inicial para escolher 
printf("escolha sua opercao\n");
printf("1-multiplicacao\n");
printf("2-divisao\n");
printf("3-subtracao\n");
printf("4-adicao\n");
scanf("%d", &operacao);
//opcoes das operacoes
switch(operacao){
	case 1: 	{
		printf("%d * %d = %d", numero1, numero2, numero1 * numero2 );
		break;
	}
	case 2: 	{
		printf("%d / %d = %d", numero1, numero2, numero1 / numero2);
		break;
	}
	case 3: 	{
		printf("%d - %d", numero1, numero2, numero1 - numero2);
		break;
	}
	case 4: 	{
		printf("%d + %d", numero1, numero2, numero1+ numero2);
		break;
	}
}

return 0;//encerramento


}


