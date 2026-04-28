#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

void impresionTabla(char n[][30],char p[][20],int e[],float h[]);
float  calcularProm(float [],int);
int personaMayor(char [][30],int [],char [][20],int);
void personasAltas(char [][30],float [], float ,int);

int main()
{
	char nombres[][30]={"Neymar", "Ronaldo", "Messi", "Vega", "Newer", "Mbape"}; //el 30 es que máximo va a tener esas letras
	char pais[][20]={"Brasil", "Portugal", "Argentina", "México", "Alemania", "Francia"};
	int edad[]={34,41,38,28,38,27};
	int n=6;
	float estatura[]={1.75,1.87,1.7,1.73,1.93,1.78};
	impresionTabla(nombres, pais, edad, estatura);
	float prom = calcularProm(estatura,n);
	
    printf("El promedio de estaturas es %0.2f \n",prom);
    personasAltas(nombres,estatura,prom,n);
}

float  calcularProm(float estatura[],int n)
{
    float suma = 0;
	for(int i=0; i<n; i++){
	    suma = suma + estatura[i];
	}
	return (suma/n);
}

void personasAltas(char nombres[][30],float estatura[], float prom,int n)
{
	for(int k=0; k<n; k++){
	    if (estatura[k]>prom){
	        printf("%s revasa el promedio, con una estatura de %0.2f m \n", nombres[k], estatura[k]);
	    }
	}

}

void impresionTabla(char n[][30],char p[][20],int e[],float h[])
{
   int k;	
	for (k=0;k<6;k++)
	{
		printf("%s nacido en %s tiene %d años y mide %0.2f m\n",n[k],p[k],e[k], h[k]);
	}		
}
