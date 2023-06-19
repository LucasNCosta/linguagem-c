//colocar de 1 a 10 no vetor

#include<stdio.h>


int main(){
	
	
	#define TAM_MAX 10

    int n[TAM_MAX];
    int i;

    for(i=0; i<TAM_MAX; i++){
		
       n[i] = TAM_MAX-i; 
       
       printf("\n%d\n", n[i]); 
   }
       
       
  
		
	
	
	
	return 0;
}
