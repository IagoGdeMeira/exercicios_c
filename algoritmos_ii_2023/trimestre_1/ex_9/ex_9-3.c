#include <stdio.h>

struct dadosAluno {
    char nomeAluno[80];
    int idadeAluno;
};

int main() {
    int qntdAlunos = 10;
    struct dadosAluno alunos[qntdAlunos];
    
    for(int i = 0; i < qntdAlunos; i++) {
        printf("Informe o nome do aluno: ");
        scanf("%s", alunos[i].nomeAluno);
        printf("Informe a idade do aluno: ");
        scanf("%d", &alunos[i].idadeAluno);
        printf("\n");
    }
    
    for(int i = 1; i <= 2; i++)
        printf("\n");
    
    for(int i = 0; i < qntdAlunos; i++) {
        printf("ALUNO: %s\n", alunos[i].nomeAluno);
        printf("IDADE: %d\n", alunos[i].idadeAluno);
        printf("\n");
    }
    
    return 0;
}
