#include<stdio.h>
#include<stdlib.h>

/*Encontrar o Maior: 
1º - Escreva uma função que devolva o maior valor presente na lista. (Assuma que a lista não está vazia).*/

typedef struct regitro{
    int num;
    struct regitro* next;
}Node;

int ValorMaior (Node* head)
{
    int numaux = 0;
    if (head != NULL)
    {
        Node* aux = head;
        while (aux != NULL)
        {
            if (aux->num > numaux)
            {
                numaux = aux->num;
            }
            aux = aux->next;
        }
    } 
    

    return(numaux);
}

int main (){
    Node* head=NULL;


    Node* a1 = malloc(sizeof(Node));
    Node* a2 = malloc(sizeof(Node));
    Node* a3 = malloc(sizeof(Node));
    Node* a4 = malloc(sizeof(Node));

    a1->num = 100;
    a2->num= 20;
    a3->num = 10;
    a4->num = 500;

    a1->next = a2;
    a2->next = a3;
    a3->next = a4;
    a4->next = NULL;

    head = a1;

    printf("O maior numero é: %d", ValorMaior(head));

    return (0);
}