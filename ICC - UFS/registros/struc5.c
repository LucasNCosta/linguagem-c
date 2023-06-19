#include<stdio.h>
#include<string.h>


struct produto{
	int codigo;
	char descricao[50];
	float preco;
};



int main(){	
	

	struct produto x[10];	
	int i;
	
	
	
	
	
	for(i=0;i<10;i++){
		printf("\nInsira os dados do produto %d\n", i);
		
		scanf("%d",&x[i].codigo);
		
		fflush(stdin);
		scanf("%s",x[i].descricao );		
	
		
		scanf("%f",&x[i].preco);
		
		
		printf("\nDados do produto %d\n", i);
		
		printf("Codigo: %d\n",x[i].codigo );
		printf("Descricao: %s\n", x[i].descricao );
		printf("Preco: %f\n",x[i].preco);
		
	}
	
	
	
	
	return 0;
}





