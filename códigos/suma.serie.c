#include<stdio.h>
#include<stdbool.h>
#include<math.h>
 
//Prototipo de función
void imprimirSerie(int);
double sumaSerie(int)
 
int main() {
    int num;
    printf("Ingresa el número: ");
    scanf("%d", &num);
    imprimirSerie(num);
    printf("\nLa suma de la serie es %0.0lf \n",sumaSerie(num));
}
 
 
void imprimirSerie(int n){ //no return, no devuelve
    for (int k=0; k<=n; k++){
        printf("%0.0lf ",(pow(2,k)));
    }
}
 
double sumaSerie(int n){ //si devuelve, si return
    double s = 0;
    for (int k=0; k<=n; k++){
        s = s + pow(2,k);
    }
    return s;
}
