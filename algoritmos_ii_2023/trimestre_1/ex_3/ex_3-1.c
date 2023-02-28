#include <stdio.h>
#include <string.h>

int main() {
    char palavra[100];
    
    scanf("%s", &palavra);
    
    while (strcmp(palavra, "fim") != 0) {
        printf("Você digitou a palavra: %s\n", palavra);
        scanf("%s", &palavra);
    }

    return 0;
}
