#include <stdio.h>
#include <math.h>

int main() {
    float vet_v[10], vet_w[10];
    
    for(int i = 0; i < 20; i++) {
        printf("%2dº inteiro do vetor v: ", i+1);
        scanf("%f", &vet_v[i]);
        vet_w[i] = pow(vet_v[i], 2) * 1.0;
    }
    
    for(int i = 1; i <=3; i++)
        printf("\n");
    
    for(int i = 0; i < 20; i++) {
        printf("%2dº valor do vetor w: %.1f\n", i+1, vet_w[i]);
    }
    
    return 0;
}
