#include <stdio.h>
#include <stdlib.h>
//novo salario
int main()
{
    float salario,x;
    printf("Digite o salario do funcionario:");
    scanf("%f",&salario);
    if (salario<=500){
        x=salario+(salario/5);
        printf("\nNovo salario eh: %f", x);}
    else{
        x=salario+(salario/10);
        printf("\nNovo salario eh: %f", x);}
    return 0;
}
