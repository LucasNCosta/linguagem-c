#include <stdio.h>
#include <stdlib.h>
//media de duas notas de um aluno
int main()
{
    float nota1,nota2,media;
    printf("Primeira nota:");
    scanf ("%f", &nota1);
    printf("\nSegunda nota:");
    scanf("%f",&nota2);
    media=(nota1+nota2)/2;
    printf("\nA media do aluno eh %0.2f",media);
    if (media<5){
            printf("\nAluno reprovado");}
        else{
            printf("\nAluno aprovado");}

    return 0;
}
