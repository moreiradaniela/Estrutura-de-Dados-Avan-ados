#include<stdio.h>
#include<stdlib.h>

/* Soma de Valores: 
1º - Implemente uma função que percorra a lista e retorne a soma de todos os inteiros armazenados.*/

typedef struct regitro
{
    int num;
    struct regitro* next;   
}Node;

int soma(Node* head){
    int conta = 0;
    if (head != NULL)
    {
        Node* aux = head;
        while (aux != NULL)
        {
            int num = aux->num;
            conta =  num + conta;
            aux = aux->next;
        }
    }
    return(conta);
}

int main(){
    Node* head = NULL;


    Node* a1 = malloc(sizeof(Node));
    Node* a2 = malloc(sizeof(Node));
    Node* a3 = malloc(sizeof(Node));

    a1->num = 10;
    a2->num = 20;
    a3->num = 30;


    a1->next = a2;
    a2->next = a3;
    a3->next = NULL;

    head = a1;
    

    printf ("A soma de %d, %d, %d = %d", a1-> num, a2->num, a3->num, soma(head));

    return 0;
}