#include<stdio.h>
#include<stdlib.h>


/* bantagens de listas ligadas são que por serem totalmente dinamica logo permite que seja alterar no inicio, meio e fim 
sem dificuldade e sempre que necessária. Não são listas com endereços de memoria sequenciais o que as diferente dos arrays que são blocos sequenciais de endereços   */
typedef struct registro
{
    int data;
    struct registro* next; 
}Node;


int main(){
    // Criação de uma lista que se chama R1
    Node r1;

    //inserção de dados da lista
    r1.data=10;
    r1.next= NULL;

    Node* r2 = &r1; // r2 irá conter um endereço de memoria de r1

    Node* r3 = malloc(sizeof(Node)); // Retorna o enderço de memoria do Primeiro elemento da Lista de r3


    // Mostrar o dado na consola
    printf("O dado data da lista r1 é: %d\n", r1.data);
    printf("O dado next da lista r1 é: %p\n", r1.next);
    printf("O dado r2 da lista r1 é: %p\n", r2);
    printf("O dado data da lista r1 é: %p\n", r3);
}