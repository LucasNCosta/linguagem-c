#include<stdio.h>
#include<math.h>

int main (){
    int a, b, c;
    float delta, x1, x2;
    printf("Insira os valores de A, B e C\n");
    scanf("%i",&a);
    scanf("%i",&b);
    scanf("%i",&c);
    delta=(b*b)-(4*a*c);
    x1=-(b)+sqrt(delta);
    x2=-(b)-sqrt(delta);
    printf("Temos duas opcoes, uma eh %0.2f\nA outra eh %0.2f",x1,x2);

    return 0;
}
