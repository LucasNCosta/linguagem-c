//Faça um algoritmo que imprima todos os números pares entre dois números dados.


#include<stdio.h>

int main (){
	
	float n1, n2, media;
	int op;	
	
	printf("%d",op);
	
	while(op!=0){
		
		printf("Insira as duas notas: \n");
		scanf("%f%f",&n1,&n2);
		
		media=(n1+n2)/2;
		
		printf("Media = %.2f\n", media);
		
		printf("Deseja sair (0) ou ficar (1)\n");
		scanf("%d",&op);		
		
		
	};
	

	
	return 0;
}

