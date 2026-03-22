#include <stdio.h>
#include <math.h>
 
float calcularImc(int peso, float est){
    float r = peso/(est*est);
    return r;
}
 
void evaluar(float imc){
    if (imc<18.5)
        printf("Peso bajo \n ");
    else if (imc<25)
            printf("Peso normal  \n");
        else if (imc<30)
                printf("Sobrepeso \n");
            else
                printf("Obesidad \n");
}
 
int main() {
    int peso;
    float est, imc;
    printf("Da el peso: ");
    scanf("%d", &peso);
    printf("Da la estatura: ");
    scanf("%f", &est);
    imc = calcularImc(peso,est);
    printf("El índice es %0.2f \n",imc);
    evaluar(imc);
    printf("Come frutas y verduras");
}
