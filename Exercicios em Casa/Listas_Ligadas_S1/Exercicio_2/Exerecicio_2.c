#include<stdio.h>
#include<stdlib.h>
/* CRIAÇÃO MANUAL: 
1º - Crie 3 nós dinamicamente (malloc), atribua os valores 10, 20 e 30. 
2º - Ligue-os manualmente (n1->next = n2, etc.) e faça head apontar para o primeiro.*/
typedef struct registro {
    int num;
    struct registro* next;
}Node;

Node* CreatNode (Node* no, int num){
    if (no != NULL)
    {
        // criar as listas e armazenar as memorias necessárias ao tamanho da lista Node
        Node* new_node = malloc(sizeof(Node));
        // dar os valires aos elementos la dista 
        // 1º- aos numeros
        new_node->num = num;
        // 2º - determinar o segundo elemento como o endereço para o qual vao apontar
        new_node->next =NULL;
    }
    
}

int main ()
{
    // CRIAÇÃO MANUAL/////////////////////////////////////
    Node* head = NULL;
    
    // criar as listas e armazenar as memorias necessárias ao tamanho da lista Node 

    Node *a1 = malloc(sizeof(Node));
    Node *a2 = malloc(sizeof(Node));
    Node *a3 = malloc(sizeof(Node));

    // dar os valires aos elementos la dista 
    // 1º- aos numeros 

    a1->num= 10;
    a2->num = 20;
    a3->num = 30;

    // 2º - determinar o segundo elemento como o endereço para o qual vao apontar 
    a1->next = a2;
    a2->next = a3;
    a3->next = NULL; // o a3 como ŕ o ultimo fica NULL
    
    // Alterar o valor de head como o primeiro elemento da lista 
    // sendo head = endeço de memoria de a1
    head = a1;
    

    // CRIAÇÃO DINAMICA /////////////////////////////////
    Node* head_2 = NULL;

    Node* b1 = CreatNode( b1 , 40);
    Node* b2 = CreatNode(b2, 50);
    Node* b3 = CreatNode(b3, 60);

    // 2º - determinar MANUALMENTE o segundo elemento como o endereço para o qual vao apontar/ligar
    b1->next=b2;
    b2->next=b3;
    b3->next=NULL;

    // Alterar o valor de head como o primeiro elemento da lista 
    // sendo head = endeço de memoria de a1
    head_2 = b1;
    
   
}