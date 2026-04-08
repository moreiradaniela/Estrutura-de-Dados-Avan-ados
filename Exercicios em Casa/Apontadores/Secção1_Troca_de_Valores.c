#include<stdio.h>

int funcaotroca (int a, int b){

    // 1º Mostrar na consola quais são os valores que foram determinados
    printf ("O valor de A: %d\n", a);
    printf ("O valor de B:%d\n", b);

    // 2º Determinar uma variavel temporaria
    int temp;
    
    // 3º Dar o valor de a á temporaria 
    temp = a;

    // 3.1º Trocar o valor de a para b 
    a = b;
    
    // 3.2º Trocar o valor de b para a temporaria que se trata da a
    b = temp;


    // 4º Mostrar na consola a troca de valores 
    printf ("Agora o valor de A: %d\n", a);
    printf ("Agora o valor de B:%d\n", b);

}
int main (){
    // 1º Criar as variaveis que vão ser tricadas
    int a = 10;
    int b = 40;

    // 2º Chamar a função
    funcaotroca(a , b);
}