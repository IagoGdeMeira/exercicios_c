#include <stdio.h>

int main() {
    int vet_int[30];
    
    for(int i = 0; i < 30; i++) {
        printf("Informe o %2dº inteiro: ", i+1);
        scanf("%d", &vet_int[i]);
    }
    
    for(int i = 1; i <= 3; i++)
        printf("\n");
        
    for(int i = 29; i >= 0; i--)
        printf("%2dº valor do conjunto: %d\n", i, vet_int[i]);
    
    return 0;
}
