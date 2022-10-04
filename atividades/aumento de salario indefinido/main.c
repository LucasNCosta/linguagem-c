#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario, percentual,novo;
    printf("Insira o salario do funcionario\n");
    scanf("%f",&salario);
    printf("Agora insira o percentual de aumento\n");
    scanf("%f",&percentual);
    novo=salario+((salario/100)*percentual);
    printf("Novo salario eh: %0.2f",novo);
    return 0;
}
