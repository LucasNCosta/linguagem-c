/* Toda apresentação de trabalho tem seus requisitos mínimos, que precisam ser atendidos, caso contrário,
o trabalho não é aceito e o aluno fica com nota 0. A apresentação de Programação 1 está chegando, e o
Professor Baldoino deixou claro que se os trabalhos  não passassem por todos os requisitos mínimos,
ele não iria julgar o trabalho. Eis os requisitos:
•Requisito 1: Inferface gráfica OU Inteligência Artificial.
•Requisito 2: Encapsulamento E Indentação.
•Requisito 3: Uso de Structs
Dada a entrada, descubra se o aluno ficou com 0 ou o seu trabalho será avaliado.

Formato de entrada
A entrada é composta de 5 números, representando respectivamente
    Interface Gráfica,
    Inteligência Artificial,
    Encapsulamento,
    Indentação e
    Structs.

Os números podem ser:
    0 - Se o trabalho não possui tal quesito.
    1 - Se o trabalho possui tal quesito.

Formato de saída
Deve imprimir o número 0, se o aluno não atender aos requisistos e ficará com zero,
e a frase "AVALIADO" se ele atendeu aos requisitos mínimos.
Seguidos de uma quebra de linha.
Exemplos de:

Entrada
1 0 1 1 1

Saída
AVALIADO*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


int main (){

    int n, n1, n2, n3, n4, n5;

    scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);
    if ((n1 == 1) || (n2 == 1) && (n3 == 1) && (n4 == 1) && (n5 == 1)){
        printf("AVALIADO\n");
    }
    else
        printf("0\n");
    /*if (n1 == 1 && n2 == 1){
    }
       if (n3 == 1 && n4 == 1){
        }
            if (n5 == 1){
               printf("AVALIADO\n");
            }
            else
                if (n1 == 1 && n2 == 0){
                }
                    if (n3 == 1 && n4 == 1){
                    }
                        if (n5 == 1){
                            printf("AVALIADO\n");
                        }
                        else
                            if (n1 == 0 && n2 == 1){
                            }
                                if (n3 == 1 && n4 == 1){
                                }
                                    if (n5 == 1){
                                        printf("AVALIADO\n");
                                    }
                                    else printf("0\n");*/


    system("pause");
    return 0;

}
