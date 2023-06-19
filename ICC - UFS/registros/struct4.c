#include<stdio.h>
#include<string.h>


struct produto{
	int codigo;
	char descricao[50];
	float preco;
};


int main(){
	
	
	struct produto x[10];	
	
	printf("Insira os dados do produto 0:\n");
	
	scanf("%d",&x[0].codigo);
	
	fflush(stdin);
	scanf("%s",x[0].descricao);
	
	scanf("%f",&x[0].preco);	
	
	printf("Codigo: %d\n",x[0].codigo );
	printf("Descricao: %s\n", x[0].descricao );
	printf("Preco: %f\n",x[0].preco );
	
	printf("Insira os dados do produto 1:\n");
	scanf("%d",&x[1].codigo);
	
	fflush(stdin);
	scanf("%s",x[1].descricao);
	
	scanf("%f",&x[1].preco);	
	
	printf("Codigo: %d\n",x[1].codigo );
	printf("Descricao: %s\n", x[1].descricao );
	printf("Preco: %f\n",x[1].preco);
	
	return 0;
}




