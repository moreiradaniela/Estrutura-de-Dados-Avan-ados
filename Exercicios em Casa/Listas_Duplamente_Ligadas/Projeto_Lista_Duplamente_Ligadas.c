#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*1. Estrutura e Init: Defina a struct DNode e crie uma função para criar um novo nó isolado.*/
typedef struct DNode {
     int data;
     struct DNode* next;
     struct DNode* prev;
}DNode;

// Função para criar um novo nó isolado
DNode* Inicializador (int data){
    // Alocar na memoria 
    DNode* Node = malloc(sizeof(DNode));

    //Dar valores
    Node->data = data;
    Node->next = NULL;
    Node->prev = NULL;   
    
    return (Node);
}

/*2.Inserir no Início (DLL): Implemente inserção na cabeça, garantindo que o prev do antigo head é atualizado.*/
DNode* Inserir_Inicio (DNode* Head, int data){
    // Dimensionar o novo no 
    DNode* NewNode = malloc(sizeof(DNode));
    
    if (Head != NULL)
    {
        // Dar valores ao novo nó
        NewNode->data = data;
        NewNode->next = Head;
        NewNode->prev = NULL;

        // Atualizar o prev do antigo head para apontar para o novo nó
        Head->prev = NewNode;

        return(NewNode);

    } else return (Inicializador(data));

    

}

/*4. Travessia Bidirecional: Implemente uma função que imprima a lista do início ao fim, e depois do fim ao início 
(usando os apontadores prev).*/
void Travessia_Bidirecionar (DNode* Head){
    if (Head!=NULL)
    {
        DNode* aux = Head;

        while (aux != NULL)
        {
            printf("Data: %d", aux->data);
            aux = aux->next;           
        }
        while (aux->prev != NULL)
        {
            aux = aux->prev;
            printf("Data: %d", aux->data);
        }

    } else printf("Lista Vazia");
}


int main () {
    // Criar o primeiro nó e atribuir o endereço a head
    DNode* Head = NULL;

    // Testar a função de travessia bidirecional com uma lista vazia
    Travessia_Bidirecionar(Head);

    // Criar o primeiro nó e atribuir o endereço a head
    Head = Inicializador (15);

    //Criar NO para testar Inserir_InicioS
    Head = Inserir_Inicio (Head, 20);

    printf("O numero : %d", Head->data);
    
    // Testar a função de travessia bidirecional com uma lista não vazia
    Travessia_Bidirecionar(Head);
    
    return 0;
}