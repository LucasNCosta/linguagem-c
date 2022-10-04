#include <stdio.h>
#include <stdlib.h>

int main()
{
    float raio,area;
    printf("Insira o raio do circulo\n");
    scanf("%f",&raio);
    area=3.1415*(raio*raio);
    printf("A area do circulo eh: %f",area);
    return 0;
}
