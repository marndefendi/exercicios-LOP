#include <stdio.h> // Biblioteca

// Definição da estrutura Aluno
struct Aluno {
    char nome[50];   
    float nota1;     
    float nota2;    
    float nota3;     
};

int main() {
    struct Aluno aluno; 
    float media;    
    
    // Leitura do nome do aluno
    printf("Digite o nome do aluno: "); 
    scanf("%s", aluno.nome); 
    // Armazena na variável o nome do aluno

    // Leitura da primeira nota
    printf("Digite a nota 1: ");
    scanf("%f", &aluno.nota1); 
    // Lê a primeira nota do aluno como número de ponto flutuante

    // Leitura da segunda nota
    printf("Digite a nota 2: ");
    scanf("%f", &aluno.nota2); 
    // Lê a segunda nota do aluno

    // Leitura da terceira nota
    printf("Digite a nota 3: ");
    scanf("%f", &aluno.nota3); 
    // Lê a terceira nota do aluno

    // Cálculo da média das três notas
    media = (aluno.nota1 + aluno.nota2 + aluno.nota3) / 3; 

    // Exibe a média do aluno com duas casas decimais
    printf("Média do aluno %s é: %.2f\n", aluno.nome, media);

    // Verifica se o aluno foi aprovado 
    if (media >= 6.0) {
        printf("Aluno aprovado!\n"); 
        // Caso a média seja 6 ou maior, imprime que o aluno foi aprovado
    } else {
        printf("Aluno reprovado.\n"); 
        // Caso contrário, imprime que o aluno foi reprovado
    }

    return 0; // Encerra o programa retornando 0
}