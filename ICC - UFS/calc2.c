#include <stdio.h>

int main()
{
   char operacao;
   float num1,num2,result;
   
   printf("Insira uma operacao [+ - * / ]: ");
   scanf("%c",&operacao);
  
   printf("Insira o primeiro numero: ");
   scanf("%f",&num1);
   printf("Insira o segundo numero: ");
   scanf("%f",&num2);  
   //Insira código aqui
   
   if(operacao=='/' && num2==0){
	   printf("Insira novamente o segundo numero: ");
	   scanf("%f",&num2);	   
   }
   
   
   switch( operacao ){
     case '+':
       result=num1+num2;
       break;
     case '-':
       result=num1-num2;
       break;
     case '*':
       result=num1*num2;
       break;
     case '/':
       result=num1/num2;
       break;
     default:
       printf("Você digitou uma operacao invalida.");
   }
   
   printf("Resultado = %.2f", result);
   return 0;
}
