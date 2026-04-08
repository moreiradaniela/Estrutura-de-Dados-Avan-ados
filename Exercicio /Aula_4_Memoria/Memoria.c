#include<stdio.h>
#include<stdlib.h>


int* teste()
{
    int* end = NULL;
    end = malloc(sizeof(int)); // tenta reservar um bloco de memorias e retorna o endereço d memoria do primeito bit 

    if (end == NULL) printf ("SEM ESPACO\n");
    else {
        printf("O endereço: %p\n",end); // Imprime o conteudo de ende que se trata do endereço do bloco guardado no malloc
        *end=10; // se o endereço é diferente de NULL guada o valo 10 na memoria de end
    }
    return (end);
}

int main1 () {
    int *res = teste(); 
    if (res != NULL) printf("valor:%d\n",*res);
    free(res); // função utilizada para libertar a memoria utilizada para armazenar determinada informação
    return(0);
}