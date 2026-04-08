#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define TAM 50

typedef struct Registro
{
    int numero;
    char NOME[TAM]; //TAM define o tamanho
    float media;
} Aluno;

Aluno* teste(){
    // comntem um resgistro
    /*Aluno a1;
    a1.numero = 2000;
    strcpy(a1.NOME, "Maria");
    a1.media =18.5;*/

    // Contem um apontador para um registro
    // Apartir do endereço podemos registrar acedendo aos capos e alterando o valor
    Aluno* a3 = malloc(sizeof(Aluno));
    if(a3!=NULL){(*a3).numero=3000; // a3->numero = 3000;
                strcpy ((*a3).NOME,"Jose");
                (*a3).media = 19.9;
                }
    return(a3);
}

int main (){
    Aluno* res1 = teste();
    if (res1!=NULL) printf("Numero: %d\n", (*res1).numero); // res->numero
    free (res1);
    

    /*Aluno a1, a2;
    
    Aluno* a3 = malloc(sizeof(Aluno)); // Um apontador para a struck aluno

    a1.numero =1000;
    strcpy(a1.NOME, "Joao");
    a1.media=17.8;

    a2.numero = 2000;
    strcpy(a2.NOME, "Maria");
    a2.media =18.5;*/


    return(0);
}