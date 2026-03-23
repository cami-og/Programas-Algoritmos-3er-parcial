#include <stdio.h>
#include <stdlib.h> // rand(), srand()
#include <time.h>   // time()

int main() {
    // Inicializar la semilla con la hora actual
    srand((unsigned int)time(NULL));

    // Generar un número aleatorio entre 0 y RAND_MAX
    int num = rand();
    printf("Número aleatorio (0 a RAND_MAX): %d\n", num);

    // Generar un número aleatorio en un rango específico (ej. 1 a 100)
    int min = 1, max = 100;
    if (max >= min) {
        int rango = max - min + 1;
        int numRango = (rand() % rango) + min;
        printf("Número aleatorio entre %d y %d: %d\n", min, max, numRango);
    } else {
        printf("Error: el rango es inválido.\n");
    }

    return 0;
}
