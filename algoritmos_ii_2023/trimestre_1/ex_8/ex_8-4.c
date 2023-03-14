#include <stdio.h>

struct passagem {
    int numeroPassagem;
    int codLocalPartida;
    int codLocalChegada;
    int numeroPoltrona;
    char tipoAssento;
};

int main() {
    struct passagem minhaPassagem;
    
    printf("Informe o número da passagem: ");
    scanf("%d", &minhaPassagem.numeroPassagem);
    printf("Informe o código do local de partida: ");
    scanf("%d", &minhaPassagem.codLocalPartida);
    printf("Informe o código do local de chegada: ");
    scanf("%d", &minhaPassagem.codLocalChegada);
    printf("Informe o número da poltrona: ");
    scanf("%d", &minhaPassagem.numeroPoltrona);
    printf("Informe o tipo de poltrona: ");
    scanf("%s", &minhaPassagem.tipoAssento);
    
    for (int i = 1; i <= 3; i++)
        printf("\n");
    
    printf("PASSAGEM: %d\n", minhaPassagem.numeroPassagem);
    printf("CÓDIGO DE PARTIDA: %d\n", minhaPassagem.codLocalPartida);
    printf("CÓDIGO DE CHEGADA: %d\n", minhaPassagem.codLocalChegada);
    printf("POLTRONA: %d\n", minhaPassagem.numeroPoltrona);
    printf("TIPO DE ASSENTO: %c\n", minhaPassagem.tipoAssento);
    
    return 0;
}
