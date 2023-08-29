//Faça um algoritmo que realizae a conversão de graus Farenheit para centígrados através da fórmula
//C = 5/9(F-32)

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main (int argc, char *argv[]) {
    float temperaturaC=0,temperaturaF;
    char pause;

    system("clear||cls");
    printf("Digite a temperafura em Farenheit:\n");
    scanf("%f", &temperaturaF);
    system("clear||cls");
    temperaturaC = (5.0/9.0)*(temperaturaF - 32);
    printf("Temperatura em Celcius: %.2f\n", temperaturaC);

    return 0;
}
