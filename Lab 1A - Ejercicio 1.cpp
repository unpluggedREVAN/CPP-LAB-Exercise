// Laboratorio 1A - Ejercicio #1 / Jose Pablo Agüero Mora (2021126372)

// Sección donde se incluyen las bibliotecas
// Estas son herramientas adicionales para incrementar la funcionalidad
#include <iostream> // Biblioteca estándar para poder tener acceso a los dispositivos de entrada y salida. Gracias a esta biblioteca podemos usar la instrucción cout
#include <conio.h> // Ayuda a proveer un sistema de entrada y salida por consola
using namespace std; // Declara un nombre de espacios estándar / Se puede utilizar el nombre de las instrucciones sin tener que especificar el espacio del nombre

// Todos los códigos en C++ tienen una función main, el programa comienza a partir de este punto.
void main() // Función - Se declara con un tipo de dato o la palabra void - Está entre llaves
{
	printf("Hola a Todos \n"); // La instrucción printf imprime en pantalla
	cout << "Hola Mundo" << endl; // La instrucción cout de igual forma imprime en pantalla - Las partes de \n y endl hacen salto de línea
	system("pause"); // Pausa la ejecución del programa
}

/* Salida del programa :
Hola a Todos
Hola Mundo
Presione una tecla para continuar . . .*/

/* Se realizaron las impresiones de los strings correctamente y se pausó la ejecución del programa posterior a dichas impresiones debido al 
comando system("pause") */