//Faça um algoritmo que imprima todos os números pares entre dois números dados.


#include <stdio.h>
int main(){
	
   int n1, n2,i;
   
   scanf("%d%d",&n1,&n2);
   
   i=n1+1;
   
   while (i<n2){	   
	   
	   if(i%2==0){
			printf("%d\n",i);
	   }
	   i++;
   }
     
   
   return 0;
}
