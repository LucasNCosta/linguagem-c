#include<stdio.h>

int main(){
	
	int n,i,numero_de_divisores;
	
	numero_de_divisores=0;
	
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		
		if(n%i==0){
			numero_de_divisores=numero_de_divisores+1;
			printf("Numero de divisores %d\n",numero_de_divisores);
			
		}	
		
	}
	
	if(numero_de_divisores==2){
		printf("O numero %d eh primo pois tem %d divisores\n",n,numero_de_divisores);
	}
	else{
		printf("O numero %d naum eh primo pois tem %d divisores\n",n,numero_de_divisores);
	}
				
	
	
	return 0;
}

