#include<stdio.h>

int main(){
	
	char palavra [50]; //string - cadeia de caractere
	//char a; // char - caractere	
	
	
	fflush(stdin);
	//scanf("%s",palavra);	
	gets(palavra);
	
	printf("%s\n",palavra);

	
	return 0;
}

