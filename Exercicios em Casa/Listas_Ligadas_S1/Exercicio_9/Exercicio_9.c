#include<stdio.h>
#include<stdlib.h>
/*Verificar Vazia: 
Crie a função isEmpty(Node* head) que retorne verdadeiro se a lista não tiver nós.*/

typedef struct registro{
    int num;
    struct registro* next;    
}Node;

int isEmpty (Node*head){
    int tem=0;
    if (head == NULL)
    {
        tem = 1;
        printf("Verdadeiro %d\n", tem);
    } else {
        tem = 0;
        printf("Falso %d\n", tem);
    }
    return(tem);
}

int main()
{
    Node* head = NULL;

    isEmpty (head);

    Node* a1 = malloc(sizeof(Node));
    Node* a2 = malloc(sizeof(Node));
    Node* a3 = malloc(sizeof(Node));

    a1->num=10;
    a2->num=20;
    a3->num=20;

    a1->next = a2;
    a3->next = a3;
    a3->next = NULL;

    head = a1;

    isEmpty(head);

    return 0;
}


