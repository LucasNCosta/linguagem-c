
#include<stdio.h>
#include<math.h>

int main(){
	
	float numero, potencia, raiz;
	int numero2, resto;
	
	scanf("%f",&numero);
	potencia = pow(numero,2);
	printf("potencia: %.0f\n", potencia);
	raiz = sqrt(numero);
	printf("raiz: %.0f\n", raiz);
	//scanf("%d", &numero2);
	numero2= (int) (numero);
	resto=numero2%2;
	printf("resto: %d", resto);
	
	

	return 0;
}
