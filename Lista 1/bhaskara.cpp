#include <stdio.h>
#include <math.h>

int main (int argc, char *argv[]) {
    float a, b, c, delta=0, x1=0, x2=0;

    printf("Digite o valor de a:\n");
    scanf("%f", &a);
    printf("Digite o valor de b:\n");
    scanf("%f", &b);
    printf("Digite o valor de c:\n");
    scanf("%f", &c);
    system("clear||cls");
    delta = b*b-4*a*c;
    printf("Delta: %.2f\n", delta);
    if (delta>=0) {
        x1=(-b+sqrt(delta))/(2.0*a);
        x2=(-b-sqrt(delta))/(2.0*a);
        printf("(%.2f)x² + (%.2f)x + (%.2f) = 0\n",a,b,c);
        printf("x1 = %.2f\nx2 = %.2f\n",x1,x2);
        getchar();
        getchar();
    }else {
        printf("Delta negativo! não há raizes reais.\n");
        getchar();
        getchar();
    }
    system("clear||cls");
    return 0;
}
