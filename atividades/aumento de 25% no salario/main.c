#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario, novo;
    printf("insira o salario do funcionario\n");
    scanf("%f",&salario);
    novo=salario+(salario/4);
    printf("O novo salario vai ser: %0.2f\n",novo);
    return 0;
}
