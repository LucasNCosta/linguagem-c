//programa que ler de 1 a 10 
//copia para outro vetor em ordem decrescente 10 a 1

#include <stdio.h>

int main (){
	
	#define TAM 10
	
	int i;
	int vet1[TAM];	
	int vet2[TAM];	
	
	printf("Vetor ordem crescente\n");
	
	for(i=0;i<TAM;i++){
		
		vet1[i]=i+1;
		
		printf("%d\n", vet1[i]);
		
	}
	
	printf("Vetor ordem decrescente\n");
	
	
	
	for(i=0;i<TAM;i++){
		
		vet2[i]=vet1[(TAM-1)-i];
		printf("%d\n", vet2[i]);
		
	}
	



   return 0;
}

