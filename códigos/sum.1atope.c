// Online C compiler to run C program online
#include <stdio.h>
 
int main() {
    int tope, n, a;
    printf("Dame el tope: ");
    scanf("%d", &tope);
    n=1;
    a=0;
    printf("\nlas sumas de los números son: \n");
    while (n <= tope){
        printf("%d \n",a);
        a= n+a;
        n= n+1;
    }
 
}
