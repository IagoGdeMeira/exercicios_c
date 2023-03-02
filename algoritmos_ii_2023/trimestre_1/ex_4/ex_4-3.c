#include <stdio.h>

int main () {
    int vet_int[8];
    
    for(int i = 0; i < 8; i++) {
        printf("Informe o %dº número: ", i+1);
        scanf("%d", &vet_int[i]);
    }
    
    for(int i = 0; i < 8; i++) {
        if(vet_int[i] % 6 == 0)
            printf("%d é múltiplo de 6.\n", vet_int[i]);
    }
    
    return 0;
}
