#include <stdio.h>
#include <stdlib.h>

int main()
{
    int anoatual, anonasc, em2050, idade;
    printf("Insira o ano de nascimento da pessoa\n");
    scanf("%i",&anonasc);
    printf("Insira o ano atual\n");
    scanf("%i",&anoatual);
    idade=anoatual-anonasc;
    em2050=(2050-anoatual)+idade;
    printf("A pessoa tem %i anos\n",idade);
    printf("Em 2050 a pessoa fara %i anos\n",em2050);
    return 0;
}
