#include<stdio.h>
#include<string.h>

int main(){
	char nome[100];
	int tamanho;
	
	
		
	printf("Digite o nome:\n");
	
	fflush(stdin);	
	//gets(nome);
	scanf("%s",nome);
	
	tamanho = strlen(nome);
	
		
	printf("o tamanho do nome eh %d ", tamanho);
	
	return 0;
	
}
