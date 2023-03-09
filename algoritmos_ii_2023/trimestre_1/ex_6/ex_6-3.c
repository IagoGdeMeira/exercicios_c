#include <stdio.h>

int main() {
    int vet_x[20], vet_y[20];
    
    for(int i = 0; i < 20; i++) {
        printf("VETOR X, %dº inteiro: ", i+1);
        scanf("%d", &vet_x[i]);
    }
    
    printf("\n");
    
    for(int i = 0; i < 20; i++) {
        printf("VETOR Y, %dº inteiro: ", i+1);
        scanf("%d", &vet_y[i]);
    }
    
    printf("\n");
    
    for(int i = 0; i < 20; i++) {
        for(int j = 0; j < 20; j++) {
            if(vet_x[i] == vet_y[j])
                printf("- O %dº inteiro do vetor x é igual ao %dº inteiro do vetor y.\n", i+1, j+1);
        }
    }
    
    return 0;
}
