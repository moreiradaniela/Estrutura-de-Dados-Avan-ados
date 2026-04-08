#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*1. Estruturas de Dados: Considere as seguintes estruturas*/
#define tamanho 97 // numero primo

typedef struct registro{
    char chave[50];
    int valor;
    struct registro* proximo;
}Node;

/*2. Inicialização: Implemente a operação void inicializar_tabela(Node* HashTable[]) 
que inicialize todos os apontadores do array a NULL.*/
void inicializa_tabela(Node* HashTable[]){
    
    int i =0;

    while (i < tamanho)
    {
        HashTable [i] = NULL;
        i++;
    }
}

/*3. Função de Hash: Implemente uma função de hash considerando a chave e o tamanho do array.*/
int fh (char chave[]){
    int soma=0;
    int i = 0;

    while (chave[i]!="\0"){
        soma = soma +(int)chave[i]; // faz a soma do valor do codigo ASCII do char para defenir a sua posição no array
        i++;
    }
    return(soma % tamanho);
}

/*4. Inserção (Início): Implemente void inserir(Node* HashTable[], char* chave, int valor). 
Calcule o índice e insira o novo nó à cabeça da lista ligada nessa posição (mais rápido).*/
void inserir (Node* HashTable[], char* chave, int valor){
    int i  = fh(chave);

    Node* novo = (Node*)(sizeof(Node));

    strcpy(novo->chave,chave);
    novo->valor = valor;
    novo->proximo = HashTable[i];

    HashTable = novo; // agora novo passa a ser o primeiro indereço na posiçãi i no array

}

/*5. Pesquisa (Search): Implemente int pesquisar(Node* HashTable[], char* chave) 
que retorne o valor associado à chave ou -1 se não encontrar. 
Lembre-se de percorrer a lista ligada no índice calculado.*/
int pesquisar(Node* HashTable[], char* chave){
    int i = fn (chave);

    Node* aux = HashTable[i]; 
    int exit = 0;

    while (aux != NULL && exit == 0)
    {
        if (strcmp(aux->chave, chave)==0) exit = 1;
        else aux = aux->proximo;
    }
    
    if (aux != NULL)return (aux->valor); 
    else return (-1);
}

int main() {
    Node* HashTable [tamanho];
}

