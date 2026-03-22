// Online C compiler to run C program online
#include <stdio.h>
 
double calcularFactorial(int n){
    double producto = 1; //acumulador, multiplicatoria
    for (int i = 2; i <= n; i++) {
        producto *= i;
    }
    return producto;
}
 
int main() {
    double combinaciones, prob;
    int n,r;
    printf("Cálculo de probabilidada de ganarse el melate \n");
    printf("Ingresa el total de valores (n): ");
    scanf("%i",&n);
    printf("Cuántos eliges (r): ");
    scanf("%i",&r);
    combinaciones=calcularFactorial(n)/(calcularFactorial(r)*calcularFactorial(n-r));
    prob = 2/combinaciones;
    // fact=calcularFactorial(num);
    printf("Las combinaciones son %0.0lf \n",combinaciones);
    printf("La probabiliad de ganar es %0.12lf \n",prob);
}
