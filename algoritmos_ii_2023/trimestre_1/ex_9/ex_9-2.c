#include <stdio.h>

struct dadosAluno {
    char nomeAluno[80];
    int idadeAluno;
};

int main() {
    struct dadosAluno aluno1;
    
    printf("Informe o nome do aluno: ");
    scanf("%s", aluno1.nomeAluno);
    printf("Informe a idade do aluno: ");
    scanf("%d", &aluno1.idadeAluno);
    
    for(int i = 1; i <= 3; i++)
        printf("\n");
    
    printf("ALUNO: %s\n", aluno1.nomeAluno);
    printf("IDADE: %d\n", aluno1.idadeAluno);

    return 0;
}
