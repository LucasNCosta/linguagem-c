//Criar um programa que receba 3 notas de um aluno e informe a média e a situação (Aprovado ou reprovado)

#include<stdio.h>

int main(){
	
	float nota1, nota2, nota3, media;
	
	printf("Insira as tres notas: \n");
	scanf("%f%f%f",&nota1, &nota2, &nota3);	
	
	media = (nota1+nota2+nota3)/3;	
	
	printf("Media: %.2f\n",media);	
	
	
	if((media>=3) && (media<5) ){
		printf("Recuperacao!");
	}
	else{
		if(media>=5){
			printf("Aprovado!");
		}
		else{
			printf("Reprovado");
		}
	}
	
		
		return 0;
}
