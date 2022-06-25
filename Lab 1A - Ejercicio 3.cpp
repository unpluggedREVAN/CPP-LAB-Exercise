// Laboratorio 1A - Ejercicio #3 / Jose Pablo Agüero Mora (2021126372)

// Sección donde se incluyen las bibliotecas
#include <iostream> // Biblioteca estándar para poder tener acceso a los dispositivos de entrada y salida
#include <conio.h> // Ayuda a proveer un sistema de entrada y salida por consola
using namespace std; // Declara un nombre de espacios estándar / Se puede utilizar el nombre de las instrucciones sin tener que especificar el espacio del nombre

//La función AreaRectangulo recibe dos valores enteros (base y altura) como parámetro y los multiplica para finalmente retornar tal resultado
int AreaRectangulo(int base, int altura) { // Define la función y recibe los valores
	int area = base * altura; //  Declara la variable area y su valor como la multiplicación de los dos parámetros
	return area; // Retorna el valor de la variable area
	// otra forma: return base*altura;
}
void main() // Función main, inicia y termina dentro de las llaves, el programa inicia su ejecución en esta función
{
	//A continuación se llaman las funciones
	//Primera funcion
	int Area = AreaRectangulo(2, 6); // Se declara una variable llamada Area (no es la misma que está dentro de la función) y se llama a la función AreaRectangulo
	cout << "Area: " << Area << endl; // Muestra un mensaje en pantalla que incluye la variable Area, la cual tiene el valor procesado de la función AreaRectangulo
	system("pause"); // Pausa la ejecución del programa
}

/* Salida del programa:
Area: 12
Presione una tecla para continuar . . . */

/* En este caso dentro de la función main se llama a una función secundaria llamada AreaRectangulo que envía dos parámetros para que 
calcule una multiplicación y la retorne, este valor se almacena en una variable llamada Area y se muestra en pantalla */