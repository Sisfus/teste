//1. Faça um algorimo que calcule a média final de uma disciplina que possui duas notas.

#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]) {
    float nota1, nota2, mediaFinal=0;

    system("clear||cls");
    printf("Digite a nota que voce tirou na primeira prova:\n");
    scanf("%f", &nota1);
    printf("Digite a nota que voce tirou na segunda prova:\n");
    scanf("%f", &nota2);
    mediaFinal = (nota1 + nota2)/ 2.0;
    // limpar a tela no windows ou no linux
    system("clear||cls");
    printf("Média Final: %.2f\n", mediaFinal);
    getchar();
    getchar();
    system("clear||cls");
    return 0;
}
