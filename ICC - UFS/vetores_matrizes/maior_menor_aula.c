#include<stdio.h>

int main(){
	int v[10]; 
	int maior, menor, i;
	
	printf("Insira os 10 numeros:\n");
	
	for(i=0;i<10;i++){
		scanf("%d",&v[i]);
	}
	maior = v[0];
	menor= v[0];
	
	for(i=0;i<10;i++){
		
		if(v[i]>maior){
			maior = v[i];
		}
		
		if(v[i]<menor){
			menor = v[i];
		}		
		
	}
	
	
	printf("\nmenor: %d e maior: %d", menor, maior);
	
	
	return 0;
}



