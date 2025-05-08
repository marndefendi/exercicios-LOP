#include <stdio.h>// Biblioteca 

// Define uma estrutura 

struct Pessoa  { //estrutura 
	char nome [50];
	int idade;
	float nota;
};

int main(){ 
	struct Pessoa pessoa1 = {"ana", 25, 1.68}; //Informacoes para exibir
//leitura das informacoes da pessoa
	printf("nome: %s\n", pessoa1.nome);
	printf("idade: %d\n", pessoa1.idade);
	printf("nota:%.2f\n", pessoa1.nota);
	
return 0;// Encerra o programa retornando 0
}
