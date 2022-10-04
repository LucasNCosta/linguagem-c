#include <stdio.h>

int main (){
    int pe;
    float polegada, jarda, milha;
    printf("Insira a medida em Pes\n");
    scanf("%i",&pe);
    polegada=pe*12;
    jarda=pe/3;
    milha=jarda/1760;
    printf("A medida em Polegadas eh: %0.2f\n",polegada);
    printf("A medida em Jardas eh: %0.2f\n",jarda);
    printf("A medida em Milhas eh: %f\n",milha);

    return 0;
}
