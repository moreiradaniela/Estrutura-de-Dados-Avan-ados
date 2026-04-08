#include <stdio.h>

void swap(int* a, int *b){
    //criar nova variavel temporaria 
    int c;

    //trocar a 
    int c = *a;

    //trocar b
    int a =*b;

    //finalizar trocar
    int b =*a;


}

int main(){
    //criar as variaveis
    int v1 = 10,v2=20;

    //chamara função
    swap(&v1, &v2);

    //imprimir na consola 
    printf("v1=%d v2=%d", v1,v2);
}