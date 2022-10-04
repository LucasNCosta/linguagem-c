#include <stdio.h>
#include <stdlib.h>

int main()
{
    //aula so foi até idade e imprimi-lá
    //eu adicionei o restante

    int idade;
    float altura;
    idade=22;
    altura=1.73;
    printf("minha idade eh = %i\n", idade);
    printf("\n");
    printf("minha altura eh = %0.2f\n", altura);

    //o (%0.2f) a numeração representa quantas casas eu quero que apareca
    //antes do ponto são casas inteiras, depois do ponto são casas decimais

    return 0;
}
