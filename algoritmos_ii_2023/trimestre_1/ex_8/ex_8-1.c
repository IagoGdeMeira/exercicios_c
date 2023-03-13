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
    
    carro1.fabricante = "Munhoz&Mariano's";
    carro1.modelo = "Camaro";
    carro1.ano = 2017;
    carro1.placa = "GSH2945";
    carro1.tipo_combustivel = "G";
    carro1.preco = 512284.29;
    carro1.ipva = 20491.37;
    
    return 0;
}
