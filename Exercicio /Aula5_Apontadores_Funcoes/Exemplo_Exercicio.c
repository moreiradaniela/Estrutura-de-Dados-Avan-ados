#include <stdio.h>

void map(float* A, int tam, float(*op) (float)){
    for (int i = 0; i<tam; i++) A[i] =op(A[i]);
}
float atualizar(float nota)
{
    if(nota>=10) return(nota);
    else if (nota >= 9) return(10);
    else return(nota);   
}

float atualizar2(float nota)
{
    float aux= nota+1;
    if(nota <=20) return(aux);
    else return(20); 
}

int main (){
    float A[]= {10.4,8,6.5,15.6,18.8,10.5,17.5,9.6};
    for(int i=0;i<8;i++) printf ("%.2f ", A[i]); printf ("\n");

    printf("\n\n");

    map(A,8,&atualizar);
    for(int i=0;i<8;i++) printf ("%.2f ", A[i]); printf ("\n");

    printf("\n\n");

    map(A,8,&atualizar2);
    for(int i=0;i<8;i++) printf ("%.2f ", A[i]); printf ("\n");


}