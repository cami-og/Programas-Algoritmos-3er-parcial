#include <stdio.h>
#include <math.h>
 
int main()
{
    int opcion;
    float radio, area, lado, base, altura;
    printf("Bienvenido al cálculo de áreas\n\n");
    printf("1) Círculo\n");
    printf("2) Cuadrado\n");
    printf("3) Triángulo\n");
    printf("4) Salir\n");
    do {
        printf("\n\n¿Qué opción eliges? ");
        scanf("%d", &opcion);
        switch (opcion){
            case 1: printf("Da el radio: ");
                    scanf("%f", &radio);
                    area = M_PI* pow(radio,2);
                    printf("El area del círculo es %0.2f \n", area);
                    break;
            case 2: printf("Escriba el lado: ");
                    scanf("%f", &lado);
                    area = lado*lado;
                    printf("El área del cuadrado es %0.2f", area);
                    break;
            case 3: printf("Escriba la base: ");
                    scanf("%f", &base);
                    printf("Escriba la altura: ");
                    scanf("%f", &altura);
                    area = base * altura;
                    printf("El área del triángulo es %0.2f", area);
                    break;
            case 4: printf("\nGracias por usar nuestro programa!");
                    break;
            default:printf("Opción inválida \n");
                    break;
        }
    } while(opcion != 4);
}
