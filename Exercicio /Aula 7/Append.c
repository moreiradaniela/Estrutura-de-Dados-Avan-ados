/*Inserir no Fim (Append): Implemente void 
append(Node** head_ref, int new_data). 
Requer percorrer a lista até ao último nó 
e ligar o novo.*/

#include<stdio.h>
#include <stdlib.h>
typedef struct reg
{
    int element;
    struct reg* next;  
    /* usado para guardar o endereço de memoria do 
    primeiro valor da seguinte lista ligada ou NULL 
    no caso de terminar a lista*/  
}Node;


/*Um prodecimento não devolve nenhum return logo 
não se deve utilizar um return();*/


/*
                        |- FUNÇÕES - devolve um e um só dado
Operações/Procedimentos |
                        |- PROCEDIMENTO - não devolve 
                           diretamente devolever dados mas no 
                           seu corpo pode apontar para memorias 
                           externas e dessa forma pode devolver 
                           varios dados
*/
void append(Node** head_ref, int new_data)
{Node* new = malloc(sizeof(Node));
    if (new!=NULL)
    {
        Node* aux= *head_ref;
        new->element=new_data;
        new->next=NULL;
        if (aux==NULL) *head_ref = new;
        else {
            while (aux->next!=NULL) aux = aux ->next;
            aux->next=new;
            }
    }
}
void push(Node** head_ref, int new_data)
{Node* new = malloc(sizeof(Node));
    if (new!=NULL)
    {new->element=new_data;
     new ->next=*head_ref;
    *head_ref = new;}
}

/*Procedimento que consulta a lista ligada*/
void listar(Node* head){
    Node* aux=head;
    int cont = 0;
    while (aux!=NULL)
    {
        printf("|%dº -> %d|", cont,aux->element);
        aux = aux->next;
        cont ++;
    }
    printf("\n");
}

int main(){
    // Lista ligada vazia usada para guardar o endereço inicial de uma lista ligada
    Node* list = NULL; 
    
    listar (list);
    

    push(&list, 10);listar (list);
    push(&list, 51);listar (list);
    push(&list, 64);listar (list);
    append(&list, 1);listar (list);
    append(&list, 500);listar (list);    
    push(&list, 8);listar (list);
    push(&list, 20);listar (list);
    append(&list, 1000);listar (list);

    return 0;
}