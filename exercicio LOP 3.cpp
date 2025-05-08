#include <stdio.h>//blibioteca
//crie uma estrutura e coloque os nomes
int main (){
	
int media, nota1, nota2, i;//usamos para repetir um mesmo comando 

printf("digite sua primeira nota\n");
scanf("%d", &nota1);
printf("digite sua segunda nota\n");
scanf("%d", &nota2);

media = (nota1 * nota2) /2;


if (media >=7)
{
	printf("voce esta aprovado", media);
}

else 
{
	printf("voce esta reprovado.", media);
}

return 0;
}