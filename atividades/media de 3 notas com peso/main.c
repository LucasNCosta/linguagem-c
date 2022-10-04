#include<stdio.h>

int main (){
    float nota1,nota2,nota3,peso1,peso2,peso3,media;
    printf("Insira a primeira nota do aluno\n");
    scanf("%f",&nota1);
    printf("Insira o peso da primeira nota\n");
    scanf("%f",&peso1);
    printf("Insira a primeira nota do aluno\n");
    scanf("%f",&nota2);
    printf("Insira o peso da segunda nota\n");
    scanf("%f",&peso2);
    printf("Insira a primeira nota do aluno\n");
    scanf("%f",&nota3);
    printf("Insira o peso da terceira nota\n");
    scanf("%f",&peso3);

    media=(nota1*peso1+nota2*peso2+nota3*peso3)/(peso1+peso2+peso3);

    printf("A media do aluno eh %f",media);

    return 0;
}
