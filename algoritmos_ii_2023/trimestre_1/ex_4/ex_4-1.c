#include <stdio.h>

int main () {
    int vet_x[5], vet_y[5], soma[5];
    
    for(int i = 0; i < 5; i++) {
        printf("Informe o %dº valor do vetor x: ", i+1);
        scanf("%d", &vet_x[i]);
        soma[i] += vet_x[i];
    }
    
    for(int i = 0; i < 5; i++) {
        printf("Informe o %dº valor do vetor y: ", i+1);
        scanf("%d", &vet_y[i]);
        soma[i] += vet_y[i];
    }
    
    for(int i = 0; i < 5; i++)
        printf("%d + %d = %d\n", vet_x[i], vet_y[i], soma[i]);
    
    return 0;
}
