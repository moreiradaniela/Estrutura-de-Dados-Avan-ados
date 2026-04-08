#include <stdio.h>

int main (){
    // Declarar as variaveis
    int A = 5;
    int *apontador1 = &A;
    int **apontador2 = &apontador1; // Adicionar asterico para apontador duplo

    // Imprimir valor de A
    printf ("O valor de A: %d\n", A);


    // Imprimir usando Apontadores ATENÇÃ: não esquecer que tem que usar os asteriscos na declaração
    printf ("O valor de A degundo o apontador 1: %d\n", *apontador1);
    printf ("O valor de A degundo o apontador 2: %d\n", **apontador2);
}
