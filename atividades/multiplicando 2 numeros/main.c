#include <stdio.h>
#include <stdlib.h>
//multiplicar 2 numeros
int main()
{
    int n1,n2,resultado;
    printf ("Qual o primeiro numero?\n");
    scanf("%i",&n1);
    printf("Qual o segundo numero?\n");
    scanf("%i",&n2);
    resultado=n1*n2;
    printf("Aqui esta o resultado %i\n", resultado);
    return 0;
}
