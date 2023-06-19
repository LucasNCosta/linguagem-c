#include <stdio.h> 


int main () {    
    int n1, n2,divisores, i,j;    
    
    
    printf ("Insira dois numeros inteiros: \n");
    scanf("%d%d", &n1,&n2);
    
    for(i=n1; i<=n2;i++){
		
		divisores = 0;
		
		for(j=1; j<=i;j++){
			if(i%j==0){
				divisores=divisores+1;
			}
		}		
		
		if(divisores==2){
			printf("%d\n",i);
		}		
			
	}    
    
	return 0; 
} 

