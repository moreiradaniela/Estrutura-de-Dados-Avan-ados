#include<stdio.h>
#include<stdlib.h>
/*Travessia Simples: 
1º- Escreva uma função void printList(Node* head) que imprima todos os valores da lista.*/
typedef struct registro
{
    int num;
    struct registro* next;    
}Node;

void printlist(Node*head){
    Node *aux = head;
    while (aux != NULL)
    {        
        printf("Valor: %d \n", aux->num);
        aux = aux->next;
    }
}
int main()
{
    Node* list = NULL;

    Node *a1 = malloc(sizeof(Node));
    Node *a2 = malloc(sizeof(Node));
    Node *a3 = malloc(sizeof(Node));


    a1->num=10;
    a2->num=20;
    a3->num=30;

    a1->next= a2;
    a2->next= a3;
    a3->next= NULL;

    list = a1;

    printlist(list);
    return 0;
}
