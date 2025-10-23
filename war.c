
#include <stdio.h>
#include <string.h> 

struct Territorio {
    char nome[30]; 
    char cor[10]; 
    int tropas;    
};

int main() {
   
    struct Territorio territorios[5];
    int i; 

    printf("=== Sistema de Cadastro de Territórios (WAR) ===\n");
    printf("Por favor, cadastre 5 territórios.\n\n");

  
    for (i = 0; i < 5; i++) {
        printf("--- Território %d ---\n", i + 1);

        // Leitura do Nome
    
        printf("Digite o nome: ");
        scanf(" %[^\n]", territorios[i].nome);

        // Leitura da Cor
        printf("Digite a cor do exército: ");
        scanf(" %[^\n]", territorios[i].cor);

        // Leitura das Tropas
      
        printf("Digite a quantidade de tropas: ");
        scanf("%d", &territorios[i].tropas);

        printf("\n"); 
    }

    // 5. Exibição dos dados
  
    printf("==============================================\n");
    printf("===         Territórios Cadastrados        ===\n");
    printf("==============================================\n\n");

    for (i = 0; i < 5; i++) {
        printf("--- Território %d ---\n", i + 1);
        printf("  Nome:   %s\n", territorios[i].nome);
        printf("  Cor:    %s\n", territorios[i].cor);
        printf("  Tropas: %d\n", territorios[i].tropas);
        printf("\n"); 
    }

    return 0; 
}
