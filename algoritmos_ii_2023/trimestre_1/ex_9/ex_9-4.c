#include <stdio.h>

struct livro {
    char nomeLivro[50];
    char nomeEditora[50];
    char isbn[18];
    int anoEdicao;
    int qntdPaginas;
    float precoLivro;
};

int main() {
    float mediaPaginas = 0.0;
    int qntdLivros = 5;
    struct livro vetLivros[qntdLivros];
    
    for(int i = 0; i < qntdLivros; i++) {
        printf("Informe o nome do livro: ");
        scanf("%s", vetLivros[i].nomeLivro);
        printf("Informe o nome da editora: ");
        scanf("%s", vetLivros[i].nomeEditora);
        printf("Informe o ISBN do livro: ");
        scanf("%s", vetLivros[i].isbn);
        printf("Informe o ano da edição do livro: ");
        scanf("%d", &vetLivros[i].anoEdicao);
        printf("Informe a quantidade de páginas do livro: ");
        scanf("%d", &vetLivros[i].qntdPaginas);
        printf("Informe o preço do livro: R$");
        scanf("%f", &vetLivros[i].precoLivro);
        printf("\n");
        
        mediaPaginas += vetLivros[i].qntdPaginas / (qntdLivros * 1.0);
    }
    
    for(int i = 1; i <= 2; i++)
        printf("\n");
    
    printf("Média de livros: %.2f", mediaPaginas);
    
    return 0;
}
