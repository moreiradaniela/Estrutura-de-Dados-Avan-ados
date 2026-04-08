#include<stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct registro
{
    int num;
    float nuta;
}Aluno;

int main()
{
    Aluno*  a = malloc(sizeof(Aluno)); //retorna o endereço de memoria

    if (a!= NULL)
    {
        (*a).num=100; // colocar em a o valor no numero de aluno
    }
    
}