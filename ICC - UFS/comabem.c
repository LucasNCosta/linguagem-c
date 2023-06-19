//Faça um programa que leia um valor representando o gasto realizado por um cliente do restaurante COMABEM e imprima o valor total a ser pago, considerando os 10% do garçom.

//Consiste de um número real representando o valor gasto do cliente.

//Consiste de um número real com duas casas decimais representando o total a ser pago considerando os 10% do garçom.

#include<stdio.h>

int main(){
	
	float gasto, total;
	scanf("%f",&gasto);
	total = gasto + gasto * 0.1;
	printf("%.2f",total);


	return 0;
}



