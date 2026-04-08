#include<stdio.h>
void swap(int* arr, int i, int j){
    int aux = arr[i];
    arr[i]= arr[j];
    arr[j]= aux;
}
int crescente (int a, int b)
{
    if (a<=b)return 0;
    else return 1;
}

int decrescente (int a, int b)
{
    if (a>=b)return 1;
    else return 0;
}

void bubblesort (int* arr, int n, int (*comparar)(int,int))
{
    for (int i=0;i<n-1;i++)
    {
        for (int j=0;j<n-i-1;j++) if (comparar(arr [j], arr[j+1])) swap (arr,j,j+1);
    }
}

void escrever (int* arr, int n){
    for(int i=0;i<n;i++)  printf("%d ", arr[i]);
}

int main(){
    int arr[]= {10,20,6,5,8,3};
    
    
    printf("Ordem crescente:");
    bubblesort(arr,6,&crescente);
    escrever (arr,6); 
    printf("\n");

    printf("Ordem decrescente:");
    bubblesort(arr,6,&decrescente);
    escrever (arr,6); 
    printf("\n");
}