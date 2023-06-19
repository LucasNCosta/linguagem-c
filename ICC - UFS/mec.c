#include <stdio.h>
int main(){
	
   int livros, alunos, razao;
   //Insira código aqui


   scanf("%d%d",&livros,&alunos );
   
   razao=alunos/livros;
	
	if(razao<=(1/8)){
		printf("A");
	}
	else{
		if((razao>=(1/9)) && (razao<=(1/12))){
			printf("B");
		}
		else{
				if(razao>=(1/13) && (razao<=(1/18))){
					printf("C");
				}
					else{						
						printf("D");					
					}
			}
	}
	
   
     
   
   return 0;
}
