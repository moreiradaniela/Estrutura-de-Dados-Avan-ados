/*Contagem de Nós: 
1º - Implemente int countNodes(Node* head) que retorne o número total de elementos na lista.*/

#include<stdio.h>
#include<stdlib.h>
typedef struct registro
{
    int num;
    struct registro* next; 
}Node;

int contNodes(Node* head){
    Node* aux = head;
    int count = 0;
    if (aux != NULL)
    {
        while (aux != NULL)
        {
            count++;
            aux= aux->next;
        }
        
    }
     return(count);
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

printf("o numero de listas e: %d", contNodes(head));
;}