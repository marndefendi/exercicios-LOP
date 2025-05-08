#include <stdio.h> // Biblioteca

// Definição da estrutura Pessoa
struct Pessoa {
    char nome[20];
    int idade;    
};

int main() { 
    struct Pessoa pessoa1, pessoa2; // Declaração de duas variáveis do tipo Pessoa

    // Leitura dos dados da primeira pessoa
    printf("Digite a inicial do nome da primeira pessoa: "); 
    scanf(" %c", &pessoa1.nome[0]); 
    printf("Digite a idade da primeira pessoa: "); 
    scanf("%d", &pessoa1.idade); 

    // Leitura dos dados da segunda pessoa
    printf("Digite a inicial do nome da segunda pessoa: "); 
    scanf(" %c", &pessoa2.nome[0]); 
    printf("Digite a idade da segunda pessoa: "); 
    scanf("%d", &pessoa2.idade); 

    // Comparação das idades
    if (pessoa1.idade > pessoa2.idade) { // Verifica se a primeira pessoa é mais velha
        printf("Pessoa %c é mais velha que Pessoa %c.\n", pessoa1.nome[0], pessoa2.nome[0]);
    } else if (pessoa1.idade < pessoa2.idade) { // Verifica se a segunda pessoa é mais velha
        printf("Pessoa %c é mais velha que Pessoa %c.\n", pessoa2.nome[0], pessoa1.nome[0]); 
    } else { // Se as idades forem iguais
        printf("Pessoa %c e Pessoa %c têm a mesma idade.\n", pessoa1.nome[0], pessoa2.nome[0]); // Imprime que têm a mesma idade
    }

    return 0; // Encerra o programa retornando 0
}
