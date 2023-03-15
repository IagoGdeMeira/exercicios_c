#include <stdio.h>

struct tecidos {
    int codNumerico;
    char descricaoTecido[251];
    float precoPorMetro;
    int qntdEstoque;
};

int main() {
    int qntdTecidos = 30;
    struct tecidos bichoDaSeda[2];
    
    for(int i = 0; i < qntdTecidos; i++) {
        printf("Informe o código numérico do tecido: ");
        scanf("%d", &bichoDaSeda[i].codNumerico);
        printf("Descreve o tecido: ");
        scanf("%s", bichoDaSeda[i].descricaoTecido);
        printf("Preço do tecido por metro: R$");
        scanf("%f", &bichoDaSeda[i].precoPorMetro);
        printf("Metros do tecido em estoque: ");
        scanf("%d", &bichoDaSeda[i].qntdEstoque);
        printf("\n");
    }
    
    for(int i = 1; i < 2; i++)
        printf("\n");
    
    for(int i = 0; i < qntdTecidos; i++) {
        printf("CÓDIGO: %d\n", bichoDaSeda[i].codNumerico);
        printf("PREÇO POR METRO: R$%.2f\n", bichoDaSeda[i].precoPorMetro);
        printf("METROS EM ESTOQUE: %d\n", bichoDaSeda[i].qntdEstoque);
        printf("DESCRIÇÃO: \n%s\n", bichoDaSeda[i].descricaoTecido);
        printf("\n");
    }
    
    for(int i = 1; i < 2; i++)
        printf("\n");
    
    printf("Tecidos com menos de 50 metros em estoque:\n");
    for(int i = 0; i < qntdTecidos; i++) {
        if(bichoDaSeda[i].qntdEstoque < 50)
            printf("- %d\n", bichoDaSeda[i].codNumerico);
    }
    
    for(int i = 1; i < 3; i++)
        printf("\n");
    
    printf("Tecidos custando menos de R$0,60 o metro:\n");
    for(int i = 0; i < qntdTecidos; i++) {
        if(bichoDaSeda[i].precoPorMetro < 0.60)
            printf("- %d\n", bichoDaSeda[i].codNumerico);
    }

    return 0;
}
