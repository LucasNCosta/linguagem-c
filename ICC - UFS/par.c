//Criar um programa que receba 3 notas de um aluno e informe a média e a situação (Aprovado ou reprovado)

#include<stdio.h>

int main(){
	
	int numero, resto;
	
	printf("Insira um numero: \n");
	scanf("%d",&numero);
	resto=numero%2;
	printf("o resto da divisao %d\n",resto);	
	
	if((resto==0)){
		printf("par");
	}
	else{
		printf("impar");
		printf("outra coisa");
	}
		
		return 0;
}
