#include <stdio.h> 
int main ()
{
    int A[10]; //o numreo 10 é o numero de memorias sequanciais que o array irá usar
    
    printf("int=%ld\n", sizeof(int));


    printf("Entereço de memoria do 1º emelento de A"); 
    printf(" int=%p\n", A); // Entereço de memoria do primeiro emelento de A

    printf("Entereço de memoria do 1º emelento de A"); 
    printf("int=%p\n",&A[0]); // Endereço de memomria do 1º endereço de A

    printf("Entereço de memoria do 2º emelento de A"); 
    printf("int=%p\n",&A[0]+1); // Endereço de memomria do 2º endereço de A

    printf("Entereço de memoria do 2º emelento de A");
    printf("int=%p\n",&A[1]); // Endereço de memomria do 2º endereço de A


    int B[10]; //o numreo 10 é o numero de memorias sequanciais que o array irá usar

    printf("int=%ld\n", sizeof(char));

    //Incerir conteudo chat dentro dos indereços do array
    B[0]='A'; 
    B[1]='B';
    B[2]='C';
    B[2]='\0';

    printf(" int=%p\n", B); // Entereço de memoria do primeiro emelento de B

    printf("Entereço de memoria do 1º emelento de B"); 
    printf("int=%p\n",&B[0]); // Endereço de memomria do 1º endereço de B

    printf("Entereço de memoria do 2º emelento de B"); 
    printf("int=%p\n",&B[1]); // Endereço de memomria do 2º endereço de B

    printf("Entereço de memoria do 3º emelento de B"); 
    printf("int=%p\n",&B[2]); // Endereço de memomria do 3º endereço de B

    printf("Conteudo de B"); 
    printf("B=%s\n",B); // Imprimir conteudo de B


    
    return 0;
}
