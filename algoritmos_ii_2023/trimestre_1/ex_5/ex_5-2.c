#include <stdio.h>

int main() {
    char alunos[10][50];
    float medias[10];
    
    for(int i = 0; i < 10; i++) {
        printf("Informe o nome do %dº aluno: ", i+1);
        scanf("%s", alunos[i
        
        for(int j = 0; j < 4; j++) {
            float nota = 0.0;
            
            printf("Sua nota no %dº bimestre: ", j+1);
            scanf("%f", &nota);
            
            while(nota < 0 || nota > 10) {
                printf("Valor inválido! Informe outro valor.\n");
                scanf("%f", &nota);
            }
            
            medias[i] += nota / 4.0;
        }
    }
    
    for(int i = 0; i < 10; i++) {
        printf("%s: ", alunos[i]);
        if (medias[i] < 6)
            printf("REPROVADO(A)\n");
        else
            printf("APROVADO(A)\n");
    }
    
    return 0;
}
