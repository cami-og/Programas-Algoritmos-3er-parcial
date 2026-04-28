#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//Prototpos
void generarMatriz(char [][30], int, int);
void imprimirMatriz(char [][30], int, int);

int main()
{
	int r, c;
	char letra[30][30];
	printf("Escribe el no de reinglones y columnas: ");
	scanf("%i %i", &r, &c);
	srand(time(NULL))
	generarMatriz(letra,r,c);
	imprimirMatriz(letra,r,c);
}


void generarMatriz(char x[][30], int n, int m)
{
     int i,j;
		for(i=0;i<n;i++)
		{
		   for(j=0;j<m;j++)
		   {
		       x[i][j]=65+rand()%26;
		   }
		}
}

void imprimirMatriz(char x[][30], int n, int m)
{
     int i,j;
   for(i=0;i<n;i++)
   {
      for(j=0;j<m;j++)
      {
        printf("%c  ",x[i][j]);
      }
      printf("\n");
   }
}
