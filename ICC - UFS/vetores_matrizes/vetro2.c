//programa que ler um vetor de 10 posições
//encontra o maior e o menor

#include <stdio.h>

int main (){
	
	#define TAM 10
	
	int i, maior, menor;
	int vet[TAM];			
	
	printf("Leitura dos 10 numeros\n");
	
	for(i=0;i<TAM;i++){
		
		vet[i]=i+1;
		
		printf("%d\n", vet[i]);
		
	}
	
	maior=vet[0];
	menor = vet[0];
	
	
	
	for(i=0;i<TAM;i++){
		
		if(vet[i]>=maior){
			maior = vet[i];
		}
		
		if(vet[i]<=menor){
			menor = vet[i];
		}
		
	}
	
	printf("menor = %d\n", menor);
	printf("maior = %d\n", maior);
	



   return 0;
}


