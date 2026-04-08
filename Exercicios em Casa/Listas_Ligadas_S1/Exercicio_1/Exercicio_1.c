#include<stdio.h>
/*DEFENIÇÃO DE ESTRUTURA: 
1º - Defina a struct Node para armazenar um número inteiro e um apontador next. 
2º- No main, declare um apontador head inicializado a NULL.
*/


// 1º - Defina a struct Node para armazenar um número inteiro e um apontador next. 

typedef struct registro{
    int num;
    struct registro* next;
}Node;

// 2º- No main, declare um apontador head inicializado a NULL.
int main (){
    Node *head = NULL;
    printf("A Lista tem valor:%d", head);
}