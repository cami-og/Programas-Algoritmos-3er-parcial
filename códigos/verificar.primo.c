#include<stdio.h>
#include<stdbool.h>
 
int verificarPrimo(int n)
{
    int den=2, divisores=0;
    for (den=2;den<n;den++)
    {
        if(n%den == 0)
        {
            divisores++;
        }
    }
    if (divisores == 0)
        return 1; //es primo
    else
        return 0;
}
 
int main() {
    int num;
    printf("Ingresa el número: ");
    scanf("%d", &num);
    int resultado = verificarPrimo(num);
    //printf("%d", resultado)
    if (resultado == 1)
        printf("El %d es primo \n",num);
    else
        printf("El %d no es primo \n",num);
    printf("Hasta pronto!");
}
