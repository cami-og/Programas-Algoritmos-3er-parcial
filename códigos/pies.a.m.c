#include<stdio.h>
#include<math.h>
 
float convertir(int pies, float inch){
    float r;
    r = pies *.3048 + inch *0.254;
    return r;
}
int main() {
    int pies;
    float metros, inch;
    //entrada de datos
    printf("Ingresa una estatura en pies y pulgadas");
    printf("Pies: ");
    scanf("%d", &pies);
    printf("Pulgadas: ");
    scanf("%f", &inch);
    metros = convertir(pies,inch);
    printf("La estatura en metros es %0.2f",metros);
}
