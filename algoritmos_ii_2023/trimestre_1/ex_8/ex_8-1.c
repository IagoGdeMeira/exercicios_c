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
    struct veiculo camaro;
    
    camaro.fabricante = "Munhoz&Mariano's";
    
    return 0;
}