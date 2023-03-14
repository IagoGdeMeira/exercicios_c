#include <stdio.h>

struct imovel {
    int numeroCadastro;
    float valorIPTU;
    int mesesAtrasados;
};

int main() {
    int numImoveis = 3;
    struct imovel listaImoveis[numImoveis];
    
    for (int i = 0; i < numImoveis; i++) {
        printf("Informe o número de cadastro do imóvel: ");
        scanf("%d", &listaImoveis[i].numeroCadastro);
        printf("Informe o valor do IPTU: ");
        scanf("%f", &listaImoveis[i].valorIPTU);
        printf("Informe os meses de IPTU atrasados: ");
        scanf("%d", &listaImoveis[i].mesesAtrasados);
        printf("\n");
    }
    
    for (int i = 1; i <= 2; i++)
        printf("\n");
    
    for (int i = 0; i < numImoveis; i++) {
        printf("CADASTRO: %d\n", listaImoveis[i].numeroCadastro);
        printf("IPTU: R$%.2f\n", listaImoveis[i].valorIPTU);
        printf("MESES ATRASADOS: %d\n", listaImoveis[i].mesesAtrasados);
        printf("MULTA: R$%.2f\n", listaImoveis[i].mesesAtrasados * 10.00);
        printf("\n");
    }
    
    return 0;
}
