#include <stdio.h>

int main() {
    int matriz[5][5];
    
    for(int x = 0; x < 5; x++) {
        for(int y = 0; y < 5; y++) {
            printf("Posição [%2d x %2d]: ", x+1, y+1);
            scanf("%d", &matriz[x][y]);
        }
    }
    
    for(int i = 1; i <= 3; i++)
        printf("\n");
    
    for(int x = 0; x < 5; x++) {
        for(int y = 0; y < 5; y++) {
            printf("%4d", matriz[x][y]);
        }
        printf("|\n");
    }
    
    return 0;
}
