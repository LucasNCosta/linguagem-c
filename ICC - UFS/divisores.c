#include<stdio.h>

int main(){
	
	int n,i,divisor;
	
	divisor=0;
	
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		
		if(n%i==0){
			divisor=divisor+1;
			printf("Eh divisivel por %d\n",i);
			
		}	
		
	}	
				
	
	
	return 0;
}

