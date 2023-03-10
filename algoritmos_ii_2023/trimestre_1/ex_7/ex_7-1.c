#include <stdio.h>

int main() {
    int matriz[10][10];
    
    for(int x = 0; x < 10; x++) {
        for(int y = 0; y < 10; y++) {
            printf("Posição [%2d x %2d]: ", x+1, y+1);
            scanf("%d", &matriz[x][y]);
        }
    }
    
    for(int i = 1; i <= 3; i++)
        printf("\n");
    
    for(int x = 0; x < 10; x++) {
        for(int y = 0; y < 10; y++) {
            if(x == y)
                printf("Posição [%2d x %2d]: %d\n", x+1, y+1, matriz[x][y]);
        }
    }
    
    return 0;
}
