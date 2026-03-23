// ==============================================================================
// 🚀 CHEATSHEET MAESTRO DE C - ALGORITMOS Y PROGRAMACIÓN
// ==============================================================================

// 1. LIBRERÍAS: Nunca olvides incluirlas al principio.
#include <stdio.h>  // OBLIGATORIA: Te permite usar printf (imprimir) y scanf (leer datos).
#include <stdlib.h> // Útil para funciones del sistema, manejo de memoria, o la función system("pause").
#include <math.h>   // OJO: Si en el examen te piden usar potencias pow() o raíces sqrt(), necesitas esta.
#include <time.h>    // Contiene time() para usar como semilla

// ==============================================================================
// 2. FUNCIONES (Se declaran ANTES del main para que el programa sepa que existen)
// ==============================================================================

/* VOID: Significa "vacío". 
   Úsala cuando tu función solo hace una acción (como imprimir un menú) 
   pero NO necesitas que te regrese ningún valor matemático o de texto. */
void mostrarMenu() {
    printf("--- Menú Principal ---\n");
    printf("1. Opción 1\n");
    printf("2. Opción 2\n");
    // Fíjate que NO hay un "return" al final, porque es void.
}

/* FUNCIONES CON TIPO (int, double, float, char): 
   Úsalas cuando la función hace un cálculo y NECESITAS ese resultado 
   para usarlo después en tu programa. */
double calcularAreaCirculo(double radio) {
    double area = 3.14159 * radio * radio;
    return area; // CRÍTICO: Si la función dice 'double', TIENES que hacer return de un valor.
}

// ==============================================================================
// 3. FUNCIÓN PRINCIPAL (El corazón del programa)
// ==============================================================================
int main() {
    
    // --- VARIABLES Y TIPOS DE DATOS ---
    int edad = 18;               // int: Para números enteros (sin decimales).
    float calificacion = 9.5;    // float: Para decimales sencillos.
    double precision = 9.99999;  // double: Para decimales grandes o cálculos muy precisos.
    char inicial = 'U';          // char: Para un solo caracter. (Usa comillas simples ' ').
    char universidad[10] = "UDLAP"; // Arreglo de char: Para textos cortos (strings). (Usa comillas dobles " ").

    // --- CONTADORES Y ACUMULADORES ---
    // ERROR COMÚN: Siempre inicialízalos en 0, si no, agarran "basura" de la memoria.
    int contador_alumnos = 0; // CONTADOR: Suma un valor constante (ej. de 1 en 1). Sirve para saber "cuántos" hay.
    double suma_ventas = 0.0; // ACUMULADOR: Suma valores variables (ej. precios diferentes). Sirve para totales.

    // --- LECTURA DE DATOS (scanf) ---
    int numero_usuario;
    printf("Ingresa un numero entero: ");
    // ERROR CLÁSICO: ¡No olvides el ampersand (&) en el scanf! 
    // Le dice a C en qué "dirección de memoria" guardar el dato.
    scanf("%d", &numero_usuario); 
    // NOTA: Para leer textos (strings) con arreglos de char, NO se usa el &.

    // ==============================================================================
    // 4. ESTRUCTURAS DE CONTROL (Condicionales)
    // ==============================================================================

    // --- IF / ELSE IF / ELSE ---
    if (numero_usuario > 0) {
        printf("Es positivo.\n");
    } else if (numero_usuario < 0) {
        printf("Es negativo.\n");
    } else {
        // Si no se cumplió nada de lo de arriba, cae aquí por descarte.
        printf("Es cero.\n");
    }

    // ERROR SÚPER COMÚN EN IF:
    // if (edad = 18)  <-- MAL. Un solo '=' asigna el valor. Esto siempre será verdadero por accidente.
    // if (edad == 18) <-- BIEN. Doble '==' es para COMPARAR.

    // --- SWITCH ---
    /* Úsalo cuando tienes un menú o cuando dependes de UNA SOLA variable 
       que toma valores exactos (1, 2, 3, 'a', 'b'). 
       NO sirve para rangos (como mayor que o menor que). */
    int opcion_menu = 2;
    switch (opcion_menu) {
        case 1:
            printf("Elegiste la opcion 1.\n");
            break; // IMPORTANTE: El break evita que se siga ejecutando el código de abajo.
        case 2:
            printf("Elegiste la opcion 2.\n");
            break;
        default:
            // El default atrapa cualquier opción que no sea ni 1 ni 2. (Como un "else").
            printf("Opcion invalida.\n");
            break;
    }

    // ==============================================================================
    // 5. CICLOS (Loops)
    // ==============================================================================

    // --- FOR ---
    /* Úsalo cuando SABES EXACTAMENTE cuántas veces quieres repetir algo. 
       Tiene 3 partes: (1) Inicio; (2) Condición para seguir; (3) Incremento. */
    printf("\n--- Ciclo FOR ---\n");
    for (int i = 0; i < 5; i++) { 
        // Empezamos en 0, mientras sea menor a 5, avanzamos de 1 en 1 (i++).
        printf("Vuelta numero: %d\n", i);
        contador_alumnos++; // Aquí estamos usando el contador. Es lo mismo que: contador = contador + 1;
    }

    // --- WHILE ---
    /* Úsalo cuando NO SABES cuántas veces se va a repetir, pero depende de una condición. 
       "Mientras esto sea verdad, sigue dando vueltas". 
       La condición se evalúa ANTES de entrar al ciclo. Puede que nunca entre. */
    printf("\n--- Ciclo WHILE ---\n");
    int saldo = 100;
    while (saldo > 0) {
        printf("Tienes saldo: %d. Gastando 30...\n", saldo);
        saldo = saldo - 30; // ACUMULADOR NEGATIVO: Restamos para eventualmente salir del ciclo.
        // CUIDADO: Si nunca modificas 'saldo', harás un CICLO INFINITO y el programa se trabará.
    }

    // --- DO WHILE ---
    /* Es el hermano del While. La diferencia es que este entra a hacer las cosas 
       AL MENOS UNA VEZ, y hasta el final pregunta si debe repetirlo.
       Súper útil para pedir contraseñas o validar que el usuario meta datos correctos. */
    printf("\n--- Ciclo DO WHILE ---\n");
    int clave;
    do {
        printf("Ingresa la clave secreta (es 123) para salir del ciclo: ");
        scanf("%d", &clave);
    } while (clave != 123); // Mientras la clave sea DIFERENTE de 123, repite el ciclo.
    // Fíjate en el punto y coma (;) al final del do-while. Es el único ciclo que lo lleva ahí.

    printf("\nExito! Clave correcta.\n");

    return 0; // Indica que el programa principal (main) terminó sin errores.
}
//***** comparar números en if ***
|| //para decir OR
&& // para decir AND
!= // para diferente de 
== // para igual a 
   
