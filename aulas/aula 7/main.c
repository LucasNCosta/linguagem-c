#include <stdio.h>
#include <stdlib.h>

int main()
{
    int base, altura, area;
    printf("Digite o valor da base:");
    scanf("%i", &base);
    //dentro das aspas vai o tipo de dado
    //depois da virgula vai a variavel que receberá o valor
    printf("\nDigite o valor da altura:");
    scanf("%i", &altura);
    area=base*altura;
    printf("\nArea = %i\n", area);
    return 0;
}
