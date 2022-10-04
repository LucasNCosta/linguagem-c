#include <stdio.h>
#include <stdlib.h>

int main()
{
    float base,altura,area;
    printf("Insira a base do tringulo\n");
    scanf("%f",&base);
    printf("Agora indira a altura\n");
    scanf("%f",&altura);
    area=(base*altura)/2;
    printf("A area do triangulo eh: %0.2f",area);
    return 0;
}
