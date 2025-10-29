#include   <stdio.h>
#include   <stdlib.h>
#include   <string.h>

#define MAX_LIVROS 50
#define TAM_STRING 100


struct  Livros
{
    char titulo[TAM_STRING];
    char autor[TAM_STRING];
    char editora[TAM_STRING];
    int edicao;

};

void  limparBuffer()
{
    int  c;

    while ((c = getchar()) != '\n' && c != EOF);
}

int main()
{
    struct Livros biblioteca[MAX_LIVROS];
    int  totalLivros = 0;
    char opcao;
    do
    {
        printf("==============================\n");
        printf("  Biblioteca - Menu Principal \n");
        printf("==============================\n");
        printf("a) Cadastrar um novo Livro\n");
        printf("b) Listar todos os Livros\n");
        printf("c) Sair\n");
        printf("Carregado...);");
        printf("Escolha uma opcao: ");
        
        scanf(" %c", &opcao);
        limparBuffer();

        switch (opcao)
        {
            case 'a':
                if (totalLivros < MAX_LIVROS)
                {
                    printf("Digite o titulo do livro: ");
                    fgets(biblioteca[totalLivros].titulo, TAM_STRING, stdin);
                    biblioteca[totalLivros].titulo[strcspn(biblioteca[totalLivros].titulo, "\n")] = 0;

                    printf("Digite o autor do livro: ");
                    fgets(biblioteca[totalLivros].autor, TAM_STRING, stdin);
                    biblioteca[totalLivros].autor[strcspn(biblioteca[totalLivros].autor, "\n")] = 0;

                    printf("Digite a editora do livro: ");
                    fgets(biblioteca[totalLivros].editora, TAM_STRING, stdin);
                    biblioteca[totalLivros].editora[strcspn(biblioteca[totalLivros].editora, "\n")] = 0;

                    printf("Digite a edicao do livro: ");
                    scanf("%d", &biblioteca[totalLivros].edicao);
                    limparBuffer();

                    totalLivros++;
                    printf("Livro cadastrado com sucesso!\n");
                }
                else
                {
                    printf("Capacidade maxima de livros atingida!\n");
                }
                break;

            case 'b':
                if (totalLivros == 0)
                {
                    printf("Nenhum livro cadastrado.\n");
                }
                else
                {
                    printf("Lista de Livros Cadastrados:\n");
                    for (int i = 0; i < totalLivros; i++)
                    {
                        printf("Livro %d:\n", i + 1);
                        printf("Titulo: %s\n", biblioteca[i].titulo);
                        printf("Autor: %s\n", biblioteca[i].autor);
                        printf("Editora: %s\n", biblioteca[i].editora);
                        printf("Edicao: %d\n", biblioteca[i].edicao);
                       
                    }
                     printf("--------------------------\n");
                }
                break;

            case 'c':
                printf("Saindo do programa...\n");
                break;

            default:
                printf("Opcao invalida! Tente novamente.\n");
        }
    } while (opcao != 'c');

    return 0;
}

        
    
    

 