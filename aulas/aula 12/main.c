#include <stdio.h>
#include <stdlib.h>

int main()
{
    int resposta, fatorial,x;
    printf("Escreva o numero que deseja calcular o fatorial:\n");
    scanf("%i",&fatorial);
    x=fatorial;
    resposta=1;
    //nao esquecer de dar um valor inicial
    for(;fatorial>=1;--fatorial){

        resposta*=fatorial;

    }
    printf("O fatorial de %i eh: %i\n",x,resposta);
    return 0;
}
