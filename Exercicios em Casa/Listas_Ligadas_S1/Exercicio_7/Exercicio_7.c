#include<stdio.h>
#include<stdlib.h>

/*Pesquisa (Exists): 
1º - Implemente int exists(Node* head, int value) que 
2º - retorne 1 se o valor existir na lista e 0 caso contrário.*/

typedef struct registro{
    int num;
    struct registro* next;  
}Node;

int exists (Node* head, int valeu){
    Node* aux = head;
    int tem = 0; // começa conciderendo que não tem
    int posiçao = 0; // contador de posição do ponteiro *opcional
    while (aux != NULL)
    {
        posiçao ++;
        if (aux->num == valeu)
        {
            printf("O valor %d existe na lista na posição %d", valeu, posiçao);
            int tem = 1;
            aux = NULL; // força a condição de fim 
        } else aux = aux->next;
    }

    if (tem == 0) printf("O valor %d  não existe na lista", valeu);
    
    return (tem);
}

int main(){
    Node* head = NULL;

    int valorDoUsoario;

    printf("Escreva um valor:");
    scanf("%d", &valorDoUsoario);

    Node* a1 = malloc(sizeof(Node));
    Node* a2 = malloc(sizeof(Node));
    Node* a3 = malloc(sizeof(Node));
    Node* a4 = malloc(sizeof(Node));

    a1->num=10;
    a2->num=20;
    a3->num=30;
    a4->num=10;


    a1->next = a2;
    a2->next = a3;
    a3->next = NULL;

    head = a1;

    exists(head, valorDoUsoario);
    
    return 0;
}