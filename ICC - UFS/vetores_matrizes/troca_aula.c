#include<stdio.h>

int main(){
	int v1[10]; 
	int v2[10]; 
	int i;
	
	for(i=0;i<10;i++){
		v1[i]=i+1;
		printf("\n%d",v1[i]);
	}
	
	for(i=0;i<10;i++){
		v2[i]=v1[9-i];
		printf("\n%d",v2[i]);
	}
	
	
	
	return 0;
}


