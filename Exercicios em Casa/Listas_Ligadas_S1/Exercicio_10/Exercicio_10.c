#include<stdio.h>
#include<stdlib.h>

/*Libertação de Memória: 
Implemente void freeList(Node* head) que percorra a lista libertando a memória de cada nó 

!!!!(CUIDADO para não perder o apontador next antes de fazer free ao nó atual)!!!
*/

typedef struct registro {
    int num;
    struct registro* next;
}Node;


Node* CreatNode (Node* head, int b, Node* No_ligação){
    
    if (head == NULL)
    {
        // criar as listas e armazenar as memorias necessárias ao tamanho da lista Node
        Node* new_node = malloc(sizeof(Node));
        //Dar valores aos elementos da lista 
        // 1º- num
        new_node->num = b;
        // 2º - next
        if (No_ligação == NULL)new_node->next = NULL; // se i valor da lista for NULL é o ultimo elemento
        else new_node->next = No_ligação; // se não for liga ao no 
        
        return (new_node);

    } else {
        printf("Esta lista já existe\n");
        return(head);
    }
}


Node* print_List (Node* head){
    Node* aux = head;
    int cont=0;
    if (aux == NULL) printf("Lista vazia\n");
    else{
        while (aux != NULL)
        {
            cont++;

            printf("%d-> %d | %p \n", cont, aux->num, aux->next);
            aux = aux->next;
        } 
    }
    
    
}

void freelist(Node** head){
    if (*head != NULL)
    {
        Node** aux = head;
        while (*aux != NULL)
        {
            *aux = (*head)->next;
            free(head);
            head = aux;
        }
    }else printf("Esta lista já existe");
    
}

int main()
{
    Node* head=NULL;

    printf("Primeiro Momento:\n");
    print_List(head);

    Node* a1 = NULL;
    Node* a2 = NULL;
    Node* a3 = NULL;

    printf("Segundo Momento:\n");
    print_List(head);

    a3 = CreatNode(a3, 57, NULL);
    a2 = CreatNode(a2, 50, a3);
    a1 = CreatNode(a1, 20, a2);
    
    
    //CreatNode(a1,56, a2);
    head = a1;

    printf("Terceiro Momento:\n");
    print_List(head);


    printf("Tegundo Momento:");
    freelist(&head);
    print_List(head);

    return 0;
}
