/*Remover do Início (Pop): Implemente int 
pop(Node** head_ref) que remove o primeiro 
nó, liberta a memória (free(endereco)) 
e devolver o inteiro removido.*/

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

// Procedimento para adicionar um novo nó no final da lista ligada
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

// Procedimento para adicionar um novo nó no início da lista ligada
void push(Node** head_ref, int new_data)
{Node* new = malloc(sizeof(Node));
    if (new!=NULL)
    {new->element=new_data;
     new ->next=*head_ref;
    *head_ref = new;}
}

// remove a primeira interação da lista ligada 
int pop(Node** head_ref){
    int guardar;
    if (head_ref == NULL) return(0);
    else{
     guardar = (*head_ref)->element;   
     Node* seguinte = (*head_ref)->next;
     free(head_ref);
     *head_ref = seguinte;
     return(guardar);     
    }
     
}

void insertat(Node** head, int index, int value){
    // Criar o novo registro
    Node* new = malloc(sizeof(Node));
    // Atribuir valor á variavel da nova lista 
    if (new!= NULL)
    {
        new->element=value;
        Node* aux = *head;
        if (index>0)
        {
            if (index==1)
            {
                new->next=*head;
                *head=new;
            }else
            {
                while(index>2 && aux!= NULL)
                {
                    index--;
                    aux = aux->next;
                }
                if (aux!=NULL)
                {
                    new->next= aux->next;
                    aux->next = new;
                }   
            }
        }
        
    }
    
    
}


Node* insertat2 (Node* head, int index, int value)
{
    if (index==1)
    {
        Node* new = malloc(sizeof(Node));
        new->element=value;
        new->next=head;
        return(new);
    }
    else 
    {
        head->next = insertat2 (head->next, index-1, value);
        return(head);
    }
}
// remover sem acesso a recursiva
Node* rem (Node* head){
    if (head == NULL) return(NULL);
    else if (head->next == NULL)
    {
        free(head);
        return(NULL);
    } else{
        Node*ant=head, *act = head;
        while (act->next!=NULL)
        {
            ant =act;
            act = act->next;
        }
        free(act); 
        ant->next==NULL;
        return(head);
    }
}

// remover recursivamente
Node* rem_recursivo (Node* head){
    if (head == NULL) return(NULL);
    else if (head->next == NULL)
    {
        free(head);
        return(NULL);
    } else{
        head->next=rem_recursivo(head->next);
        return(head);
    }
    
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

/*Procedimento que consulta a lista ligada*/
void listar2 (Node* head){
    Node* aux=head;
    if (head != NULL) 
        {printf("|->%d", aux->element);
        listar2(head->next);}
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
    printf("\n\n\n");
    

    insertat(&list,2,30);

    listar2(list);

    list = insertat2(list, 3, 45);

    listar2(list);

    return 0;
}