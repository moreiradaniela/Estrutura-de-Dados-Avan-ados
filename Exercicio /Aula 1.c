#include <studio.h>
int main()
{
    int c=15
    int*b=&c;
    int*e=&c;

    printf("endereço c: %p\n", &c);
    printf("endereço b: %p\n", &b);

    printf("c: %d\n",c);
    printf("c: %d\n",*b);
    printf("c: %d\n",*e);
    printf("b: %d\n",b);

    *b=16:
    *e=17;

    printf("c=%d\n",c);
    
    return(0);
    // **h apontador de apontador 
    // const int *p (protege o valor) torna o valor um contante sem anteração
    // int* const p (protege o endereço) torna o entereço uma constante sem alteração
}