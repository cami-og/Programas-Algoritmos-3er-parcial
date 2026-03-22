
#include <stdio.h>
 
int main() {
    int k, tope;
    float precio, total=0; //cadena
    char nombre[10];
    printf("Numero de articulos: ");
      scanf("%d",&tope);
    for (k=1; k<=tope; k++){
      printf("Articulo %d \n",k);
      printf("Descripcion: ");
      scanf("%s",nombre);
      printf("Precio: ");
      scanf("%f",&precio);
      total += precio;
    }
    printf("*****************************\n");
    printf("Cantidad a pagar $ %0.2f \n",total);
    printf("Gracias por su compra :)");
}
