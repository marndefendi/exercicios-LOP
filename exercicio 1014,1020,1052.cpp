#include <stdio.h>
#include <stdlib.h>

void consumo();
void idade();
void mes();


int main (){
	int opcao;
	do{
	system("cls");
	printf("---Opcoes de contas---\n");
	printf("1-Consumo de automovel\n");
	printf("2-Idade em dias\n");
	printf("3-Meses do ano\n");
	scanf("%d", &opcao);
	
	switch(opcao)
	{
	case 1:
	  	consumo();
		break;
		
	case 2:
	  	idade();
		break;
		
	case 3:
	  	mes();
		 break;  
		 
		 	}
	printf("\nPressione enter para continuar:");
	getchar();
	getchar();
 }while (opcao != 0);
return 0;
}

 void consumo(){
 	float v1, v2, consumo;
		printf("Digite a distancia total percorrida: ");
		scanf("%f", &v1);
		printf("Digite o total de combustivel gasto: ");
		scanf("%f", &v2);
		consumo = v1 / v2;
		printf("o consumo medio sera de %.3f km/l \n", consumo);
}
 void idade(){
 	int dia, ano,mes;
	printf("Digite sua idade em dias:          ");
		scanf("%d", &dia);
		ano = dia/365;
		dia = dia%365;
		mes = dia/30;
		dia = dia%30;
		printf("%d ano(s)\n",ano);
	   	printf("%d mes(s)\n",mes);
		printf("%d dia(s)\n",dia);

}
void mes(){
	int mes;
	 printf("Digite um mes em numero de 1 a 12: ");
		    scanf("%d", &mes);
		    if (mes == 1)
		    {
		    	printf("january!");
			}
			 else if (mes == 2)
		    {
		    	printf("february!");
		    }
		     else if (mes == 3)
		    {
		    	printf("march!");
		    }
		     else if (mes == 4)
		    {
		    	printf("april!");
		    }
		     else if (mes == 5)
		    {
		    	printf("may!");
		    }
		      else if (mes == 6)
		    {
		    	printf("june!");
		    }
		     else if (mes == 7)
		    {
		    	printf("july!");
		    }
		      else if (mes == 8)
		    {
		    	printf("august!");
		    }
		      else if (mes == 9)
		    {
		    	printf("setember!");
		    }
		      else if (mes == 10)
		    {
		    	printf("october!");
		    }
		      else if (mes == 11)
		    {
		    	printf("november!");
		    }
		      else if (mes == 12)
		    {
		    	printf("december!");
		    }else{
		    	printf("mes invalido!");
			}
		}