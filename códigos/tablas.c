#include <stdio.h>
 
int main() {
    int n, cont, res;
    printf("¿Que tabla quieres ver?: ");
    scanf("%d", &n);
    cont = 1;
    while (cont <= 10){
        res =n*cont;
        printf("\n %i x %i = %i",n,cont,res);
        cont = cont + 1;
    }
    printf("\n\n Hasta pronto");
} 
