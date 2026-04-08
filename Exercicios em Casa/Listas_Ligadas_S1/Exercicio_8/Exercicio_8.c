/*Último Elemento: 
1- Crie uma função que retorne um apontador para o último nó da lista.*/
#include<stdio.h>
#include<stdlib.h>

typedef struct registro{
    int num;
    struct registro* next;
}Node;

Node* apontador (Node* list)
{
    Node* aux = list;
    int numero;
    if (aux != NULL)
    {  
        while (aux ->next != NULL)
            {
                numero = aux->num;
                aux = aux->next;
                
                printf("O elemento %d com o endereço %p\n\n\n",numero, aux);
            }
            
        printf("O ultimo elemento da sua lista é %d com o endereço de lista %p\n\n\n",aux->num, aux);
            
     
    } else printf("A sua lista está vazia\n\n\n");
    return(aux);
}

int main()
{
    Node* head=NULL;

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

    Node* resultado = apontador(head);

    if (resultado == NULL) printf("O ultimo elemnto da sua lista é %p e tambem o primeiro ", resultado);
    else printf("O ultimo elemnto da sua lista é %p ", resultado);

    return (0);
}