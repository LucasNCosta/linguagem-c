#include<stdio.h>

int main (){

    float nota1,nota2,nota3,media;
    printf("Insira as 3 notas em sequencia separadas por enter\n");
    scanf  ("%f",&nota1);
    scanf  ("%f",&nota2);
    scanf  ("%f",&nota3);
    media=(nota1+nota2+nota3)/3;
    printf("A media do aluno eh %f0.2",media);

    return 0;
}
