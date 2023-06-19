#include<stdio.h>
#include<string.h>


struct produto{
	int codigo;
	char descricao[50];
	float preco;
};



int main(){	
	

	struct produto produtos[10];	
	
	produtos[0].codigo=1;		
	strcpy(produtos[0].descricao, "TV");
	produtos[0].preco=3000.00;
	
	printf("Codigo: %d\n",produtos[0].codigo );
	printf("Descricao: %s\n", produtos[0].descricao );
	printf("Preco: %f\n",produtos[0].preco );
	
	
	produtos[1].codigo=2;		
	strcpy(produtos[1].descricao, "Geladeira");
	produtos[1].preco=2000.00;
	
	printf("Codigo: %d\n",produtos[1].codigo );
	printf("Descricao: %s\n", produtos[1].descricao );
	printf("Preco: %f\n",produtos[1].preco );
	
	
	return 0;
}





