// Laboratorio 1A - Ejercicio #6 / Jose Pablo Agüero Mora (2021126372)


// Sección donde se incluyen las bibliotecas
#include <iostream> // Biblioteca estándar para poder tener acceso a los dispositivos de entrada y salida
#include <conio.h> // Ayuda a proveer un sistema de entrada y salida por consola
using namespace std; // Declara un nombre de espacios estándar / Se puede utilizar el nombre de las instrucciones sin tener que especificar el espacio del nombre

/* Esta función recibe dos parámetros enteros(int) los cuales se comparan para verificar si tienen el mismo valor, si esto sucede retorna un 
valor booleano (bool) true y de lo contrario retorna un false */

bool EsCuadrado(int base, int altura) { // Define la función booleana y recibe los parámetros por parámetro
	if (base == altura) { // Inicia la condicional y establece la comparación de los parámetros 
		return true; // Si se cumple la codición retorna un valor de true
	}
	else { // Se establece el caso de excepción
		return false; // Si no se cumple la condición inicial se devuelve un false
	}
}

void main() // Función main, inicia y termina dentro de las llaves, el programa inicia su ejecución en esta función
{
	//Cuarta  unción
	int base = 0; // Se declara la variable entera (int) base con valor 0
	int altura = 2; // Se declara la variable entera (int) altura con valor 2
	cout << "Ingrese la base: " << endl; // Muestra un mensaje en pantalla
	cin >> base; // Pide una entrada que se almacena en la variable base
	printf("Ingrese la altura: "); // Muestra un mensaje en pantalla
	scanf_s("%i", &altura); // Pide una entrda que se almacena (sobreescribe) en la variable altura
	bool Cierto = EsCuadrado(base, altura); // Se declara una variable booleana (bool) Cierto que llama a la función EsCuadrado
	cout << Cierto << endl; // Muestra un mensaje en pantalla con el valor de la variable Cierto
	system("pause"); // Pausa la ejecución del programa
}

/* Salida 1 del programa:
Ingrese la base:
12
Ingrese la altura: 23
0
Presione una tecla para continuar . . . */

/* Salida 2 del programa:
Ingrese la base:
4
Ingrese la altura: 4
1
Presione una tecla para continuar . . . */

/* Se inicializan las variables, para pedir sus valores al usuario y con esto llamar a la función EsCuadrado que hace el cálculo respectivo para 
verificar si el área que se ha dado es referente a un cuadro mediante una salida booleana */