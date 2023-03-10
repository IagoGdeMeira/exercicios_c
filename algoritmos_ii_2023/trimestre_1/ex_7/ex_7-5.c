#include <stdio.h>

int main() {
    int matriz_a[4][4], matriz_b[4][4], matriz_soma[4][4];
    
    printf("MATRIZ A:\n");
    for(int x = 0; x < 4; x++) {
        for(int y = 0; y < 4; y++) {
            printf("Posição [%2d x %2d]: ", x+1, y+1);
            scanf("%d", &matriz_a[x][y]);
            matriz_soma[x][y] += matriz_a[x][y];
        }
    }
    
    for(int i = 1; i <= 3; i++)
        printf("\n");
    
    printf("MATRIZ B:\n");
    for(int x = 0; x < 4; x++) {
        for(int y = 0; y < 4; y++) {
            printf("Posição [%2d x %2d]: ", x+1, y+1);
            scanf("%d", &matriz_b[x][y]);
            matriz_soma[x][y] += matriz_b[x][y];
        }
    }
    
    for(int i = 1; i <= 3; i++)
        printf("\n");
    
    for(int x = 0; x < 3; x++) {
        for(int y = 0; y < 4; y++) {
            printf("%4d", matriz_soma[x][y]);
        }
        printf("|\n");
    }
    
    return 0;
}
