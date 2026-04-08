#include<stdio.h>
#include<stdlib.h>

typedef struct Registro
{
    int valor;
    struct Registro* seguinte;   
}Lista;

int main(){
    Lista* a = NULL; // Lista Ligada vazia


    // 3 apontadores de enedereço de registros de memoria 
    Lista* a1 = malloc(sizeof(Lista));
    Lista* a2 = malloc(sizeof(Lista));
    Lista* a3 = malloc(sizeof(Lista));

    // alterar os valores do parametro valor
    a1->valor=10;
    a2->valor=15;
    a3->valor=7;

    // Ligação das listas começando em "a" e terminando no ultimo endereço da lista a3 com o valor NULL
    a = a1;
    a1 ->seguinte = a2;
    a2 ->seguinte = a3;
    a3->seguinte=NULL;


    printf("|Registro         | Valor | Seguinte     |\n");
    // Mostrar na consola usando um while

    Lista* aux = a;
    while (aux != NULL)
    {
        printf("|%p  |%d | %p|\n", aux ,aux->valor, aux->seguinte);
        aux = aux->seguinte;
    }

    // Voltar a inicializar aux para poder ser utilizada no prossimo while corretamente 
    aux=a;
    int contador;
    while (aux != NULL)
    {
        contador++;
        aux = aux->seguinte;
    }

    printf("\n\n A quantidade de Registros é: %d\n", contador);
    return(0);
}
