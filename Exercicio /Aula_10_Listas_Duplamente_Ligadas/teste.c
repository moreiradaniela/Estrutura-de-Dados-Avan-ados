#include<stdio.h>
#include <stdlib.h>

typedef struct DNode
{
    int element;
    struct DNode* next;
    struct DNode* prev;
}LOL;

LOL* Criar_No(){
    //Criar novo nó
    LOL* new_node;
    //Dimencionar o No 
    new_node = malloc(sizeof(LOL));
    return(new_node);    
}

void Incerir_Inicio (LOL** head, int element){
    if (head==NULL)
    {
        // Se head for null significa que o endereço 
        // que estamos a criar é o primeiro e unico
        // Criar no
        LOL* no = Criar_No();
        
        //atualizar elementos
        no->element = element;
        no->next = NULL;
        no->prev = NULL;
    } 
    else {
        LOL* no = Criar_No();

        no->element = element;
        no->next = *head;
        no->prev =NULL;

        //Atualizar endereço inicial utilizado endereço do endereço
        *head = no;
    }
}

void Incerir_Fim (LOL** head, int element){
    if (head != NULL)
    {
        LOL* no = *head;
        LOL* aux = *head;
        while (aux != NULL)
        {
            //Quando aux for igual a num aux vai estar a apontar para o ultimo
            aux = aux->next;
        }

        no->element = element;
        no->next = NULL;
        no->prev = aux->next; // sabendo o next no mesmo vai ser o ultimo

        // atualuzar head
        *head = no;
        
    }
    
}

int print_lista (LOL* head){

    if (head!=NULL)
    {
        LOL* aux = head;
        while (aux != NULL)
        {
            printf("%d|%p|%p\n", aux->element, aux->next, aux->prev);
            aux = aux->next;
        }

        while (aux->prev != NULL)
        {
            printf("%d|%p|%p\n", aux->element, aux->next, aux->prev);
            aux = aux->prev;
        }
        return 0;
    }else 
    {
        printf ("lista vazia");
        return 0;
    }
    
}
int main()
{
    LOL* head = NULL;

    printf("normal");
   print_lista(head);

    LOL* a1, *a2, *a3, *a4;

    //Criar nos
    a1 = Criar_No();
    a2 = Criar_No();
    a3 = Criar_No();
    a4 = Criar_No();

    // dar valore
    a1->element = 25;
    a2->element = 64;
    a3->element = 93;
    a4->element = 87;

    //Ligar nos
    head->next = a1;
    a1->next = a2;
    a2->next = a3;
    a3->next = a4;
    a4->next = NULL;
    

    head->prev =NULL;
    a1->prev = head;
    a2->prev = a1;
    a3->prev = a2;
    a4->prev = a3;

  //  print_lista(head);

    Incerir_Inicio(&head, 10);

    Incerir_Fim(&head, 26);

    
    return 0;
}
