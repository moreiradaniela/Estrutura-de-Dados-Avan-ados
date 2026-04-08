#include<stdio.h>

int somatorio (int a, int b){
    if (a==b) return (a);
    else  return (a+somatorio(a+1,b));
}



int main(){
int a, b;

printf("coloque um valor para a\n");
scanf("%d\n", a);

printf("coloque um valor para b\n");
scanf("%d", b);

return(0);
}