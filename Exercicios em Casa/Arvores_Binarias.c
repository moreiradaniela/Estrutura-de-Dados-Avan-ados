#include<stdio.h>
#include<stdlib.h>

typedef struct Node {
    int valor; 
    struct Node* esquerda;
    struct Node* direita;
}Node;

/*1. Estrutura Básica: 
Defina a struct Node e implemente uma função Node* criarNo(int v) que aloca memória, 
define o valor e inicializa os filhos a NULL.*/
Node* criar_no (int valor) {
    // Criar no
    Node* new_node =NULL;
    // Alocar na memoria
    new_node = malloc(sizeof(Node));

    //em caso da alocação dar erro evitar crach
    if (new_node == NULL)
    {
        return NULL;
    }
    
    // Atribuir valores
    new_node->valor = valor;
    new_node->direita = NULL;
    new_node->esquerda = NULL;

    return(new_node);
}

/*3. Travessia Pré-Ordem: 
Implemente void preOrder(Node* root) recursiva. Deve imprimir: 10 5 20.*/
void preOrder (Node* root){
    if (root != NULL)
    {
        // Primeiro o valor da raiz
        printf("%d\n", root->valor);
        // depois o valor da folha esquerda
        preOrder(root->esquerda);
        // depois o valor da folha direita
        preOrder(root->direita);
        
    }
    
}


/*4. Travessia Em-Ordem: 
Implemente void inOrder(Node* root). Deve imprimir: 5 10 20.*/
void inOrder (Node* root){
    if (root != NULL)
    {
        inOrder(root->esquerda);
        printf("%d\n", root->valor);
        inOrder(root->direita);
    }    
}

/*5. Travessia Pós-Ordem: 
Implemente void postOrder(Node* root). Deve imprimir: 5 20 10.*/
void postOrder(Node* root){
    if (root != NULL)
    {
        postOrder(root->esquerda);
        postOrder(root->direita);
        printf("%d\n", root->valor);
    }
    
}





int main()
{
    /*2. Construção Manual: 
    No main, construa manualmente uma árvore binária (raiz 10, esq 5, dir 20) ligando os apontadores.*/
    // Criar o primeiro no
    Node* raiz = NULL;
    raiz = criar_no(10);
    
    // Inicializar folhas da arbore
    Node* folha_1 = NULL;
    Node* folha_2 = NULL;

    // Criar folhas
    folha_1 = criar_no(5);
    folha_2 = criar_no(20);

    // Fazer ligaçẽs
    raiz->esquerda = folha_1;
    raiz->direita = folha_2;

    // Exercicio 3. ln 33
    printf("IMPREÇÃO DO preOrder\n");
    preOrder(raiz);

    printf("\n\n");

    // Exercicio 4. ln 50
    printf("IMPREÇÃO DO inOrder\n");
    inOrder(raiz);

    printf("\n\n");

    // Exercicio 5. ln 61
    printf("IMPREÇÃO DO postOrder\n");
    postOrder(raiz);

    return 0;
}
