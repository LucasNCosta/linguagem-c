//Criar um programa que receba 3 notas de um aluno e informe a média e a situação (Aprovado ou reprovado)

#include<stdio.h>

int main(){
	
	float nota1, nota2, nota3,nota4, media;
	
	printf("Insira as 4 notas: \n");
	scanf("%f%f%f%f",&nota1, &nota2, &nota3, &nota4);	
	
	media = (nota1+nota2+nota3+nota4)/4;	
	
	printf("Media: %.2f\n",media);	
	
	
	if(media>=7){
		printf("Aprovado");
	}
	else{
		printf("Reprovado");
	}	
		
		return 0;
}
