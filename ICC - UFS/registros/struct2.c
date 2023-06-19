#include<stdio.h>
#include<string.h>



typedef struct {
	int codigo;
	char descricao[50];
	float preco;
} produto;



int main(){
	
	
	produto x;		
	
	x.codigo=1;	
	strcpy(x.descricao, "TV");
	x.preco=3000.00;
	
	printf("Codigo: %d\n",x.codigo );
	printf("Descricao: %s\n", x.descricao );
	printf("Preco: %f\n",x.preco );
	

	
	
	return 0;
}




