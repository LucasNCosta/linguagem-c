//programa antecessor e sucessor de um numero inteiro

#include<stdio.h>

int main(){
	int num, antecessor, sucessor;
	printf("Insira um numero inteiro ");
	scanf("%d",&num);
	antecessor=num-1;
	sucessor=num+1;
	printf("o antecessor: %d, o sucessor: %d", antecessor, sucessor);
	
	return 0;
}


