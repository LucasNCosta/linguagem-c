#include <stdio.h>
#include <stdlib.h>

int main()
{
    float base,altura,area;
    printf("Insira a base do quadrado\n");
    scanf("%f",&base);
    printf("Agora indira a altura\n");
    scanf("%f",&altura);
    area=base*altura;
    printf("A area do quadrado eh: %0.2f",area);
    return 0;
}
