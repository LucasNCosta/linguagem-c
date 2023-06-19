#include <stdio.h> 


int main () 
{    
    int num, divisores, i;
    
    divisores = 0;
    
    printf ("Insira um numero inteiro: \n");
    scanf("%d", &num);
    
    for(i=1; i<=num;i++){
		if(num%i==0){
			divisores=divisores+1;
		}
	}
	
	if(divisores==2){
		printf("O numero %d eh primo\n",num);
	}
	else{
		printf("O numero %d nao eh primo e possui %d divisores\n",num, divisores);
	}
    
    
	return 0; 
} 
