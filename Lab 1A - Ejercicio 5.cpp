// Laboratorio 1A - Ejercicio #5 / Jose Pablo Agüero Mora (2021126372)

// Sección donde se incluyen las bibliotecas
#include <iostream> // Biblioteca estándar para poder tener acceso a los dispositivos de entrada y salida
#include <conio.h> // Ayuda a proveer un sistema de entrada y salida por consola
using namespace std; // Declara un nombre de espacios estándar / Se puede utilizar el nombre de las instrucciones sin tener que especificar el espacio del nombre

/* La función VolumenRectangulo recibe 3 parámetros flotantes (float) para multiplicarlos, guardar tal valor en una variable llamada Volumen y 
mostrar un mensaje con dicho valor */

void VolumenRectangulo(float largo, float ancho, float alto) { // Define la funcíón y recibe los valores por parámetro
	float Volumen = largo * ancho * alto; // Se declara la variable Volumen y calcula la multiplicación de los 3 parámetros
	cout << "El volumen del rectangulo es: " << Volumen << endl; // Muestra un mensaje con el valor de la variable Volumen
}
void main() // Función main, inicia y termina dentro de las llaves, el programa inicia su ejecución en esta función
{
	VolumenRectangulo(2, 4, 6); // Se llama a la función VolumenRectangulo que realiza el cálculo y muestra un mensaje en pantalla
	system("pause"); // Pausa la ejecución del programa
}

/* Salida del programa: 
El volumen del rectangulo es: 48
Presione una tecla para continuar . . .*/

/* La función main llama a VolumenRectangulo, le envía 3 parámetros, esta función realiza el cálculo correspondiente y muestra un 
mensaje en pantalla */