// Online C compiler to run C program online
#include <stdio.h>
 
int main() {
    int meses, mes;
    float tasam, invm, capital, tasa, intereses;
    printf("Ingresa el capital inicial: ");
    scanf("%f",&capital);
    printf("¿A cuántos meses quieres invertir? ");
    scanf("%d", &meses);
    printf("Tasa de interés(escala de 0 a 100): ");
    scanf("%f", &tasa);
    tasam = tasa/1200;
    mes = 0;
    while (mes < meses){
        mes += 1;
        intereses=capital*tasam;
        invm = capital + intereses;
        capital += intereses;
        printf("\nLos intereses del mes %d son: %0.2f \n",mes,intereses);
        printf("El total del periodo %d: $ %0.2f \n", mes,invm);
    }
}
