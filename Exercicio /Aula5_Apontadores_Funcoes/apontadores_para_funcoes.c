#include<stdio.h>

int somar (int a, int b){return(a+b);}

int subtrair (int a, int b){return(a-b);}

int avaliar (int a, int b, int(*f)(int,int)) {return (f(a,b));}

void menu(){printf("ola mundo!");}

int teste_menu(void(*procedimento)()){ procedimento(); }

int main(){
    
    int resultado =  avaliar (10,20,&somar);
    printf("Resultado:%d\n",resultado);

    int subtração =  avaliar (10,20,&subtrair);
    printf("Resultado:%d\n",subtração);
    
    teste_menu(&menu);
}   