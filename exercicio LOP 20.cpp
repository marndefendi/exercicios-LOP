#include <stdio.h> // Biblioteca 

// Define uma estrutura 
typedef struct {
    char nome[15];   // Nome 
    float media;     // Média final do aluno
} Aluno;

int main() { // Função principal 
    Aluno alunos[3];
    char nome_busca[15]; 
    int encontrado; 
    char opcao; 

 // Cadastro dos 3 alunos
    for (int i = 0; i < 3; i++) {
        // Solicita o nome do aluno
        printf("Digite o nome do aluno %d: ", i + 1);
        scanf("%s", alunos[i].nome); // Lê o nome do aluno

        // Solicita a média final do aluno
        printf("Digite a média final do aluno %d: ", i + 1);
        scanf("%f", &alunos[i].media);
    }
#include <stdio.h> // Biblioteca 

int main() { 
    float media, soma = 0.0, medgeral; 
    
    // Loop de 5 vezes, uma para cada aluno
    for (int i = 0; i < 5; i++) {
        // Solicita ao usuário que digite a média final do aluno atual
        printf("Digite a média final do aluno %d: ", i + 1);
        // Lê a média digitada pelo usuário e a armazena na variável 'media'
        scanf("%f", &media);
        // Adiciona a média do aluno atual à soma total
        soma += media;
    }
    // Calcula a média geral dividindo a soma das médias pelo número total de alunos (5)
    medgeral = soma / 5;
    // Exibe a média geral da turma com uma casa decimal
    printf("Média geral da turma: %.1f\n", medgeral);
    return 0; // Encerra o programa retornando 0
}
