#include <stdio.h>
#include <stdlib.h>

int main()
{
    int contador=1;

    while(contador<=5){
        printf("%i\n",contador);
        ++contador;
        //sempre coloque esse ++, senao a funçao nao sai do lugar
        //++contador eh igual a contador=contador+1
    }
    return 0;
}
