#include <stdio.h>

int main () {
    char nome [150];
    char disciplina [150];
    float nota [3];
    float soma;
    float media;
    
        printf("digite o nome do aluno:\n");
        scanf("%s", nome);

        printf("digite  a disciplina do aluno:\n");
        scanf("%s", disciplina);

        printf("digite 3 notas do aluno:\n");
        for(int i = 0; i < 3; i++) {
        printf("notas:");
            scanf("%f", &nota[i]);
        }

        soma = nota[0] + nota[1] + nota[2];
        media = soma / 3;

        printf("%s, obteve %1.f pontos na media da disciplina de %s", nome, media, disciplina);
    
    return 0;

}
