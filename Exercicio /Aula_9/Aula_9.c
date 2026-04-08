#include<stdio.h>
#include<stdlib.h>


typedef struct registro
{
    int data;
    struct registro* next;    
}Node;


Node* inserirInicio (Node* inicio, int valor){
    Node* novo = malloc(sizeof(Node));
    if (novo != NULL)
    {
    novo->data= valor;    
    novo->next= inicio;
    }
    return(novo);
}

Node* removerUltimo (Node* inicio)
{
    Node *aux = inicio;
    if (inicio== NULL) return(NULL);
    else{
        Node* act = inicio, * ant = inicio;
        
        // enquanto atual.next for dirente de nulo
        // quando é atual esta a apontar para o ultimo 
        // e o anterior esta a apontar para o ante penultimo
        while (act->next != NULL)
        {
            ant = act;
            act = act->next;
        }
        free(act); // Liverta o espaço de memoria do enderço de act
        if (ant == act)return(NULL);        
        else { 
            ant->next = NULL;// O endereco do anterior no campo next passa a ser NULL
            return(inicio);
        }
    }
    
}
int main()
{
    // por norma são "guardados" 6 bites para recever a informação
    Node* lista = NULL; 
    
    lista = inserirInicio(lista, 10);

    return 0;
}
