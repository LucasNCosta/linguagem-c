#include <stdio.h>
#include <stdlib.h>

int main()
{
    float base,area;
    printf("Insira a base do quadrado\n");
    scanf("%f",&base);
    area=base*base;
    printf("A area do quadrado eh: %0.2f",area);
    return 0;
}
