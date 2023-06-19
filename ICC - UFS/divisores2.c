#include<stdio.h>

int main(){
	
	int n,i,divisor, op;
	
	divisor=0;
	i=1;
	scanf("%d",&n);
	
	do{
		
		if(n%i==0){
			divisor=divisor+1;
			printf("Eh divisivel por %d\n",i);
			
		}
		i++;
						
		printf("Digite qualquer numero para continuar e (1) para sair");
		scanf("%d",&op);		
				
		
		
	}while(op!=1);	
				
	
	
	return 0;
}

