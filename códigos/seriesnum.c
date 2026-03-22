#include <stdio.h>

  void serie1(int);
  void serie2(int);
  void serie3(int);

int main()
{
 int n,opcion;
 printf("Bienvenido al programa de series\n");
  
 do{
 printf("Ingresa un valor tope: ");
 scanf("%d",& n);
 printf("\n1. Serie aritmetica (1 4 7 10 13 ... )\n");
 printf("2. Serie geometrica ( 1 2 4 8 16 ...)\n");
 printf("3. Serie con decremento (...5 4 3 2 1)\n");
 printf("4. Salir\n");
 printf("\nQue desear desplegar?");
 scanf("%d",&opcion);
 switch(opcion){
 case 1: serie1(n);
  break;
 case 2: serie2(n);
  break; 
 case 3: serie3(n);
  break;
 case 4: printf("Gracias por usar UDLAP SW Inc.");  
  break;
 default: printf("La opcion no es valida");
  break;  
 }
   
 } while(opcion!=4); //llave del do

}
  void serie1(int n){
    for(int i=1; i<=n; i+=3){
      printf("%d ", i);
    }
    printf("\n");
  }
   
  void serie2(int n){
    for(int i=1; i<=n; i*=2){
      printf("%d ", i);
    }
    printf("\n");
  }
   
  void serie3(int n){
    for(int i=n; i<=n; i= i-1){
      printf("%d ", i);
    }
    printf("\n");
  }
   
