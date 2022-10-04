#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario,novo,imposto,total;
    printf("Insira o salario-base do funcionario\n");
    scanf("%f",&salario);
    novo=salario+((salario/100)*5);
    imposto=(salario/100)*7;
    total=novo-imposto;
    printf("Novo salario do funcionario vai ser: %0.2f",total);
    return 0;
}
