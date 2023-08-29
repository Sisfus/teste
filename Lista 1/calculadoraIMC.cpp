//Faça um algoritmo que calcule o IMC de um dado indivíduo a partir de seu peso e altura.
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]) {
    float altura, peso, imc=0;

    printf("Digite o seu peso:\n");
    scanf("%f",&peso);
    printf("Digite a sua altura:\n");
    scanf("%f",&altura);
    system("clear||cls");
    imc = peso/(altura*altura);
    system("clear||cls");
    printf("IMC: %.2f\n", imc);
    getchar();
    getchar();
    system("clear||cls");
    return 0;
}
