#include <stdio.h>

struct cliente {
    char nomeCliente[51];
    int codAgencia;
    char dataNascimento[11];
    float saldoAtual;
    char situacao;
};

int main() {
    struct cliente cliente1;
    
    printf("Nome do cliente: ");
    scanf("%s", cliente1.nomeCliente);
    printf("Código da agência: ");
    scanf("%d", &cliente1.codAgencia);
    printf("Data de nascimento do cliente: ");
    scanf("%s", cliente1.dataNascimento);
    printf("Saldo atual do cliente: ");
    scanf("%f", &cliente1.saldoAtual);
    printf("Situação do cliente: ");
    scanf("%s", &cliente1.situacao);
    
    return 0;
}
