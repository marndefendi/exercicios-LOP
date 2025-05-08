#include <stdio.h> // Biblioteca

// Define uma nova estrutura chamada Produto
typedef struct {
    char nome[50];    
    float preco;      
    int quantidade;  
} Produto;

int main() {
    Produto lista[5]; // Declara um array de 5 elementos do tipo Produto

    // Repetição para cadastrar 5 produtos
    for (int i = 0; i < 5; i++) {
        printf("Digite o nome do produto %d: ", i + 1); 
        scanf(" %[^\n]", lista[i].nome);

        printf("Digite o preco do produto %d: ", i + 1); 
        scanf("%f", &lista[i].preco); 

        printf("Digite a quantidade do produto %d: ", i + 1); 
        scanf("%d", &lista[i].quantidade); 
    }

    printf("\nTotal de cada produto:\n");
    // Repetição para imprimir o total de cada produto 
    for (int i = 0; i < 5; i++) { 
        float total = lista[i].preco * lista[i].quantidade; 
        // Imprime o nome do produto e o total formatado com duas casas decimais
        printf("Produto: %s, Total: R$ %.2f\n", lista[i].nome, total);
    }

    return 0; // Encerra o programa retornando 0
}