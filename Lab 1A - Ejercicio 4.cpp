// Laboratorio 1A - Ejercicio #4 / Jose Pablo Agüero Mora (2021126372)

// Sección donde se incluyen las bibliotecas
#include <iostream> // Biblioteca estándar para poder tener acceso a los dispositivos de entrada y salida
#include <conio.h> // Ayuda a proveer un sistema de entrada y salida por consola
using namespace std; // Declara un nombre de espacios estándar / Se puede utilizar el nombre de las instrucciones sin tener que especificar el espacio del nombre

/* Se define la función con void (no tiene return) PerimetroRectangulo que recibe 3 parámetros enteros para hacer el proceso correspondiente, uno de 
ellos devuelve el valor por referencia a una variable ya existente */

void PerimetroRectangulo(int largo, int ancho, int& Perimetro) { // Define la función y recibe los valores
	Perimetro = (2 * largo) + (2 * ancho); // Sobreescribe sobre uno de los parámetros el cálculo realizado
}

void main() // Función main, inicia y termina dentro de las llaves, el programa inicia su ejecución en esta función
{
	//Segunda Funcion
	int Perim = 0; // Se declara una variable entera (int) con un valor de 0
	PerimetroRectangulo(2, 6, Perim); // Se llama a la función PerimetroRectangulo y se le envían los parámetros reales
	cout << "Perimetro: " << Perim << endl << endl; // Se muestra un mensaje en pantalla en el que se agrega el valor de la variable Perim calculada en la primera función
	system("pause"); // Pausa la ejecución del programa
}

/* Salida del programa: 
Perimetro: 16

Presione una tecla para continuar . . . */

/* La función main llama a una función secundaria la cual procesa dos parámetros pero no retorna el resultado, sino que hace referencia a un tercer 
parámetro el cual guarda la información en una variable previamente existente (parámetro por referencia), este valor se muestra en un mensaje final */