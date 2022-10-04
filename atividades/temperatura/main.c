#include<stdio.h>

//DEU RUIM ESSE
int main (){
        float temperatura,conversor;
        int opcao;
        printf("Escolha para qual temperatuda deseja converter:\n\n\n1 se deseja de Celcio para Kelvin\n2 se deseja de Celsio para Farenheit\n3 se deseja de Kelvin para Celcio\n4 se deseja de Farenheit para Celcio\n");
        scanf("%i",&opcao);
        printf("Agora insira a temperatura:\n");
        scanf("%f",&temperatura);

//DEU ERRADO, ELE SO RESPONDE O PRIMEIRO E NAO SEGUE PARA AS OUTRAS OPCOES

        if(opcao=1){
            conversor=temperatura+273.15;
            printf("A conversao eh %0.2f",conversor);}

            else if(opcao=2){
                conversor=(temperatura*(9/5))+32;
                printf("A conversao eh %0.2f",conversor);}

                else if(opcao=3){
                    conversor=temperatura-273.15;
                    printf("A conversao eh %0.2f",conversor);}

                    else if(opcao=4){
                        conversor=(temperatura-32)*(5/9);
                        printf("A conversao eh %0.2f",conversor);}

                        else{
                            printf("Por favor insira um numero valido\n");}
//ERRO

    return 0;
}
