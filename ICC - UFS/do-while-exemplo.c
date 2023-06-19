//Faça um algoritmo que solicite e leia as duas notas de aluno e imprima a média.  O programa deverá perguntar ao usuário se ele deseja continuar digitando a nota de outros alunos ou se deseja sair do programa.


#include<stdio.h>

int main(){

  float n1,n2,media;
  int resp;
 
  do
  {
    printf("Insira a nota 1: ");
    scanf("%f",&n1);
    printf("Insira a nota 2: ");
    scanf("%f",&n2);
 
    media = (n1 + n2)/2;
    printf("Media = %.2f\n",media);
 
    printf("Digite 1 para continuar ou 2 para sair\n");
    scanf("%d", &resp);
 
  }while (resp==1);
 
  return 0;
}
