#include <stdio.h>

int main (){
    // Determinar as Variaveis
    float x = 10.5;
    float *apontador = &x; // Apontar o endereço de x 

    //Imprimir na consola as duas formas de mostrar o endereço
    printf ("Endereço de x:%p\n", &x);
    printf ("Endereço da variavel aponrador: %p\n", apontador);

    // Imprimir o valor original de x 
    printf ("Valor de x antes da alteração: %f\n", x);
    
    //Alterar o valor de x com o apontador 
    *apontador = 20.0;

    // Imprimir o valor alterado de x 
    printf ("Valor de x depois da alteração: %f", x);
}