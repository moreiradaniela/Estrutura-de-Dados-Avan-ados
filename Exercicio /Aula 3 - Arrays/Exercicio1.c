#include <stdio.h>

int main (){


    int posição=0;
    int valor = 10;
    int vetor[5];

    // Preencher o Array
    while (posição >= 0 & posição <= 4)
    {
        vetor [posição] = valor;
        printf ("Entereço de memoria do emelento %d\n", posição); 
        printf("int=%p\n",vetor+posição); // Endereço de memomria
        printf ("Conteudo de vetor[%d] é:\n", posição); 
        printf("Valor=%d\n\n",*(vetor+posição)); // Conteudo da Memoria     *(vetor+posição)

        posição ++;
        vetor [posição] = valor++;

        
    }
    
    return 0;

}