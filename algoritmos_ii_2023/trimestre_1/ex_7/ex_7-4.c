#include <stdio.h>

int main() {
    int matriz_a[3][4], matriz_b[3][4];
    
    for(int x = 0; x < 3; x++) {
        for(int y = 0; y < 4; y++) {
            printf("Posição [%2d x %2d]: ", x+1, y+1);
            scanf("%d", &matriz_a[x][y]);
            matriz_b[x][y] = matriz_a[x][y] * 3;
        }
    }
    
    for(int i = 1; i <= 3; i++)
        printf("\n");
    
    for(int x = 0; x < 3; x++) {
        for(int y = 0; y < 4; y++) {
            printf("%4d", matriz_b[x][y]);
        }
        printf("|\n");
    }
    
    return 0;
}
