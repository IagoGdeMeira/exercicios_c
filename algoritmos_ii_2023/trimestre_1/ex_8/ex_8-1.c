#include <stdio.h>

struct veiculo {
    char fabricante[50];
    char modelo[50];
    int ano;
    char placa[7];
    char tipo_combustivel;
    float preco;
    float ipva;
};

int main() {
    struct veiculo carro1;
    
    printf("Nome do fabricante: ");
    scanf("%s", carro1.fabricante);
    printf("Modelo do carro: ");
    scanf("%s", carro1.modelo);
    printf("Ano do carro: ");
    scanf("%d", &carro1.ano);
    printf("Placa do carro: ");
    scanf("%s", carro1.placa);
    printf("Tipo de combustível: ");
    scanf("%s", &carro1.tipo_combustivel);
    printf("Preço do carro: ");
    scanf("%f", &carro1.preco);
    printf("Valor do IPVA: ");
    scanf("%f", &carro1.ipva);
    
    return 0;
}
