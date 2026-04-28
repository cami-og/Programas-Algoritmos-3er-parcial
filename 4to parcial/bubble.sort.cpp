#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

//prototipos
void llenar(int[], int);
void imprimir(int[], int);
void ordenamientoB(int[],int);

int main() {
    int size,dato;
	double desviacion;
	float r1;
	printf("Hoy many elements? ");
	scanf("%d",&size);
	int a[size],mayor;
	srand(time(NULL));
	llenar(a,size);
	printf("\nArreglo original\n");
	imprimir(a,size);
	ordenamientoB(a,size);
	printf("\nArreglo ordenado\n");
	imprimir(a,size);
	
}
void ordenamientoB(int x[], int n)
{
    int temp;
    for(int p=1; p<(n-1); p++){
        for (int i=0; i<(n-1); i++){
            if(x[i]>x[i+1]){ //swap
                temp = x[i];
                x[i] = x[i+1];
                x[i+1] = temp;
            }
            
        }
    }
}

void llenar(int x[], int n)
{
	int i;
	for (i=0;i<n;i++)
    {
     	x[i]=  44 + rand()%56;
     
    }	
}
void imprimir(int x[],int n)
{
	int i;
	printf("\n");
	for (i=0;i<n;i++)
	{
		printf("%d \t",x[i]);
	}
}

