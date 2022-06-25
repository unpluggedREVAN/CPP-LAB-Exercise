// Laboratorio 1A - Ejercicio #5 / Jose Pablo Ag�ero Mora (2021126372)

// Secci�n donde se incluyen las bibliotecas
#include <iostream> // Biblioteca est�ndar para poder tener acceso a los dispositivos de entrada y salida
#include <conio.h> // Ayuda a proveer un sistema de entrada y salida por consola
using namespace std; // Declara un nombre de espacios est�ndar / Se puede utilizar el nombre de las instrucciones sin tener que especificar el espacio del nombre

/* La funci�n VolumenRectangulo recibe 3 par�metros flotantes (float) para multiplicarlos, guardar tal valor en una variable llamada Volumen y 
mostrar un mensaje con dicho valor */

void VolumenRectangulo(float largo, float ancho, float alto) { // Define la func��n y recibe los valores por par�metro
	float Volumen = largo * ancho * alto; // Se declara la variable Volumen y calcula la multiplicaci�n de los 3 par�metros
	cout << "El volumen del rectangulo es: " << Volumen << endl; // Muestra un mensaje con el valor de la variable Volumen
}
void main() // Funci�n main, inicia y termina dentro de las llaves, el programa inicia su ejecuci�n en esta funci�n
{
	VolumenRectangulo(2, 4, 6); // Se llama a la funci�n VolumenRectangulo que realiza el c�lculo y muestra un mensaje en pantalla
	system("pause"); // Pausa la ejecuci�n del programa
}

/* Salida del programa: 
El volumen del rectangulo es: 48
Presione una tecla para continuar . . .*/

/* La funci�n main llama a VolumenRectangulo, le env�a 3 par�metros, esta funci�n realiza el c�lculo correspondiente y muestra un 
mensaje en pantalla */