// Laboratorio 1A - Ejercicio #9 / Jose Pablo Agüero Mora (2021126372)

// Sección donde se incluyen las bibliotecas
#include <iostream> // Biblioteca estándar para poder tener acceso a los dispositivos de entrada y salida
#include <conio.h> // Ayuda a proveer un sistema de entrada y salida por consola
using namespace std; // Declara un nombre de espacios estándar / Se puede utilizar el nombre de las instrucciones sin tener que especificar el espacio del nombre

void main() // Función main, inicia y termina dentro de las llaves, el programa inicia su ejecución en esta función
{
	int ArregloDeCienEnteros[100]; // Se declara un arreglo de 100 elementos de tipo entero (int)
	int i = 0; // Se inicializa un contador i en 0
	while (i < 100) { // Se genera un ciclo while que va desde el contador creado previamente hasta 99
		ArregloDeCienEnteros[i] = i; // Se recorre el arreglo según el contador del while y se le asigna el valor de la posición del arreglo
		cout << "Fue agregado el numero " << ArregloDeCienEnteros[i] << " en el Arreglo." << endl; // En cada ciclo muestra un mensaje en pantalla
		i++; // En cada ciclo se incrementa el contador en 1
	}
	system("pause"); // Pausa la ejecución del programa
}


/* Salida del programa: 
Fue agregado el numero 0 en el Arreglo.
Fue agregado el numero 1 en el Arreglo.
Fue agregado el numero 2 en el Arreglo.
Fue agregado el numero 3 en el Arreglo.
Fue agregado el numero 4 en el Arreglo.
Fue agregado el numero 5 en el Arreglo.
Fue agregado el numero 6 en el Arreglo.
Fue agregado el numero 7 en el Arreglo.
Fue agregado el numero 8 en el Arreglo.
Fue agregado el numero 9 en el Arreglo.
Fue agregado el numero 10 en el Arreglo.
Fue agregado el numero 11 en el Arreglo.
Fue agregado el numero 12 en el Arreglo.
Fue agregado el numero 13 en el Arreglo.
Fue agregado el numero 14 en el Arreglo.
Fue agregado el numero 15 en el Arreglo.
Fue agregado el numero 16 en el Arreglo.
Fue agregado el numero 17 en el Arreglo.
Fue agregado el numero 18 en el Arreglo.
Fue agregado el numero 19 en el Arreglo.
Fue agregado el numero 20 en el Arreglo.
Fue agregado el numero 21 en el Arreglo.
Fue agregado el numero 22 en el Arreglo.
Fue agregado el numero 23 en el Arreglo.
Fue agregado el numero 24 en el Arreglo.
Fue agregado el numero 25 en el Arreglo.
Fue agregado el numero 26 en el Arreglo.
Fue agregado el numero 27 en el Arreglo.
Fue agregado el numero 28 en el Arreglo.
Fue agregado el numero 29 en el Arreglo.
Fue agregado el numero 30 en el Arreglo.
Fue agregado el numero 31 en el Arreglo.
Fue agregado el numero 32 en el Arreglo.
Fue agregado el numero 33 en el Arreglo.
Fue agregado el numero 34 en el Arreglo.
Fue agregado el numero 35 en el Arreglo.
Fue agregado el numero 36 en el Arreglo.
Fue agregado el numero 37 en el Arreglo.
Fue agregado el numero 38 en el Arreglo.
Fue agregado el numero 39 en el Arreglo.
Fue agregado el numero 40 en el Arreglo.
Fue agregado el numero 41 en el Arreglo.
Fue agregado el numero 42 en el Arreglo.
Fue agregado el numero 43 en el Arreglo.
Fue agregado el numero 44 en el Arreglo.
Fue agregado el numero 45 en el Arreglo.
Fue agregado el numero 46 en el Arreglo.
Fue agregado el numero 47 en el Arreglo.
Fue agregado el numero 48 en el Arreglo.
Fue agregado el numero 49 en el Arreglo.
Fue agregado el numero 50 en el Arreglo.
Fue agregado el numero 51 en el Arreglo.
Fue agregado el numero 52 en el Arreglo.
Fue agregado el numero 53 en el Arreglo.
Fue agregado el numero 54 en el Arreglo.
Fue agregado el numero 55 en el Arreglo.
Fue agregado el numero 56 en el Arreglo.
Fue agregado el numero 57 en el Arreglo.
Fue agregado el numero 58 en el Arreglo.
Fue agregado el numero 59 en el Arreglo.
Fue agregado el numero 60 en el Arreglo.
Fue agregado el numero 61 en el Arreglo.
Fue agregado el numero 62 en el Arreglo.
Fue agregado el numero 63 en el Arreglo.
Fue agregado el numero 64 en el Arreglo.
Fue agregado el numero 65 en el Arreglo.
Fue agregado el numero 66 en el Arreglo.
Fue agregado el numero 67 en el Arreglo.
Fue agregado el numero 68 en el Arreglo.
Fue agregado el numero 69 en el Arreglo.
Fue agregado el numero 70 en el Arreglo.
Fue agregado el numero 71 en el Arreglo.
Fue agregado el numero 72 en el Arreglo.
Fue agregado el numero 73 en el Arreglo.
Fue agregado el numero 74 en el Arreglo.
Fue agregado el numero 75 en el Arreglo.
Fue agregado el numero 76 en el Arreglo.
Fue agregado el numero 77 en el Arreglo.
Fue agregado el numero 78 en el Arreglo.
Fue agregado el numero 79 en el Arreglo.
Fue agregado el numero 80 en el Arreglo.
Fue agregado el numero 81 en el Arreglo.
Fue agregado el numero 82 en el Arreglo.
Fue agregado el numero 83 en el Arreglo.
Fue agregado el numero 84 en el Arreglo.
Fue agregado el numero 85 en el Arreglo.
Fue agregado el numero 86 en el Arreglo.
Fue agregado el numero 87 en el Arreglo.
Fue agregado el numero 88 en el Arreglo.
Fue agregado el numero 89 en el Arreglo.
Fue agregado el numero 90 en el Arreglo.
Fue agregado el numero 91 en el Arreglo.
Fue agregado el numero 92 en el Arreglo.
Fue agregado el numero 93 en el Arreglo.
Fue agregado el numero 94 en el Arreglo.
Fue agregado el numero 95 en el Arreglo.
Fue agregado el numero 96 en el Arreglo.
Fue agregado el numero 97 en el Arreglo.
Fue agregado el numero 98 en el Arreglo.
Fue agregado el numero 99 en el Arreglo.
Presione una tecla para continuar . . . */

/* El programa genera un arreglo de enteros (int) el cual recorre mediante un ciclo while y define sus valores mediante un contador */