#include <stdio.h>

int main () {
    int num[15];
    
    for(int i = 0; i < 15; i++) {
        printf("Informe o %dº número: ", i+1);
        scanf("%d", &num[i]);
    }
    
    for(int i = 0; i < 15; i++) {
        if(num[i] % 2 == 0)
            printf("%d é um número par.\n", num[i]);
        else
            printf("%d é um número ímpar.\n", num[i]);
    
    return 0;
}
