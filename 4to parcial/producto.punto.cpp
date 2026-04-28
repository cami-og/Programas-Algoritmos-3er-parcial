#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>
//prototipos
void llenar(int[], int);
void imprimir(int[], int);
void leer(int[], int);
int productoPunto(int[], int[], int);

int main()
{
	// declaracion del arreglo
	int size;
	printf("How many elements?\n");
	scanf("%d",&size);
	int A[size],B[size];
	srand(time(NULL));
	printf("Arreglo A \n");
	llenar(A,size);
	imprimir(A,size);
	printf("\n Arreglo B \n");
	llenar(B,size);
	imprimir(B,size);
	int pp = productoPunto(A, B, size);
	printf("\n El producto punto es: %d \n", pp);
	return 0;

}

int productoPunto(int A[], int B[], int n)
{
    int suma = 0;
    for(int i = 0; i<n; i++ ){
        suma = suma + A[i]*B[i];
    }
    return suma;
}

void llenar(int x[], int n)
{
	int i;
	for (i=0;i<n;i++)
    {
     	x[i]=  0 + rand()%10;
     
    }	
}


void leer(int x[], int n)
{
	int i;
	for (i=0;i<n;i++)
    {
     	printf("Ingresa el dato %d :",i);
     	scanf("%d",&x[i]);
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




