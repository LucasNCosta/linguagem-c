#include <stdio.h>
#include <math.h>

int main()
{
    float numero, quadrado, cubo, raizq2, raizq3;
    printf("O programa vai gerar o quadrado, o cubo, a raiz quadrada e a raiz cubica de um numero\n");
    printf("Insira um numero\n");
    scanf("%f",&numero);
    if (numero>0){
        quadrado=numero*numero;
        cubo=(numero*numero)*numero;
        raizq2=sqrt(numero);
        raizq3=cbrt(numero);
        printf("O numero ao quadrado eh %f\n",quadrado);
        printf("O numero ao cubo eh %f\n",cubo);
        printf("A raiz quadrada do numero eh %f\n",raizq2);
        printf("A raiz cubica do numero eh %f\n",raizq3);

    }else{
        printf("Esse nao eh um numero positivo maior que zero\n");}
    return 0;
}
