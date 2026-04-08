#include<stdio.h>
#include <stdlib.h>

typedef struct Tabelas_hash
{
    int numero;
    char nome;
    float nota;
    struct Tabelas_hash *next;
}Aluno;

// fazer calculo do tamanho
int Tamanho (int num ){
    num = num +1;
    return (num);}

int fh (int numero) {
    return (numero % Tamanho(2)); }

void insetir (Aluno* A[], int num, float nota, char nome){
    Aluno* novo = (Aluno*) malloc (sizeof(Aluno));
    
    int i  = fh(num);

    novo->numero = num;
    novo->nota = nota;
    novo->nome = nome;
    novo->next = A[i];

    A[i]= novo;
}


int consulta (int numero,Aluno* A[]){
    int i ;
}