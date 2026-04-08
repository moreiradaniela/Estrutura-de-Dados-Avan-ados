#include <stdio.h>

int main () {
    
    const int *p; // ❌ NÃO É PERMITIDO: trocar o valor da variavel ✅ PERMITIDO: alterar o endereço
    int * const p1; // ❌ NÃO É PERMITIDO: trocar o valor do endereço  ✅ PERMITIDO:  trocar o valor da variavel

    printf ("p: %p\n", p);
    printf ("p1: %p\n", p1);
    printf ("p: %d\n", p);
    printf ("p1: %d\n", p1);
    
    
    
    /*
    *pesquisa = 500;
    printf ("Agora orçamento é de %d.\n");
    */


    // declara a variavel
    int x = 1000;
    // Usar o apontador para ir buscar o valor 
    int *const x1 = &x; // ❌ NÃO É PERMITIDO: trocar o valor do endereço 
                       // ✅ PERMITIDO:  trocar o valor do Nº Contibuinte
    
                        printf ("O endereço de x é: %p.\n", &x);
                        printf("O valor do endereço armazenado em x1 é: %p\n", x1);
                        printf("O valor dentro de x é: %d\n", x);
                        printf("O valor dentro de x usando o apontador x1 é: %d\n", *x1);


    // Uma casa que anteriormente se encontrava vazia agora vai ser ocupada pela pessoa com o numero contribuinte "4750589"
    const int *y;    // ❌ NÃO É PERMITIDO: trocar o valor do endereço 
                        // ✅ PERMITIDO:  trocar o valor do Nº Contibuinte

                        /*printf ("O endereço de y é: %p.\n", &x);
                        printf("O valor do endereço armazenado em y1 é: %p\n", x1);
                        printf("O valor dentro de y é: %d\n", x);
                        printf("O valor dentro de y usando o apontador x1 é: %d\n", *x1);*/
    





    return 0;
}