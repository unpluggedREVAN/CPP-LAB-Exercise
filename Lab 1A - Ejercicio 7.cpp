// Laboratorio 1A - Ejercicio #7 / Jose Pablo Agüero Mora (2021126372)


// Sección donde se incluyen las bibliotecas
#include <iostream> // Biblioteca estándar para poder tener acceso a los dispositivos de entrada y salida
#include <conio.h> // Ayuda a proveer un sistema de entrada y salida por consola
using namespace std; // Declara un nombre de espacios estándar / Se puede utilizar el nombre de las instrucciones sin tener que especificar el espacio del nombre

// Se realiza una estructura llamada alumno para guardar diferentes tipos de datos juntos 

struct alumno {  //definiendo el tipo de dato 
	int carnet; // Se declara la variable entera (int) carnet 
	char nombre[50]; // Se declara la variable de tipo caracter (char) nombre con un límite de caracteres
	char carrera[5]; // Se declara la variable de tipo caracter (char) carrera con un límite de caracteres
	bool activo; // Se declara la variable booleana (bool) activo
};

void main() // Función main, inicia y termina dentro de las llaves, el programa inicia su ejecución en esta función
{
	const char* carreraq = "IMT"; // Se declara una variable char carreraq con un puntero, no se especifica el tamaño ya que usa memoria dinámica
	const char* Nombreq = "Jose"; // Se declara una variable char Nombreq con un puntero, no se especifica el tamaño ya que usa memoria dinámica
	alumno Alumno100;     // Se hace referencia a la estructura definida previamente
	Alumno100.activo = 1; // Se cambia el valor de activo dentro de la estructura
	Alumno100.carnet = 201563645; // Se cambia el valor de carnet dentro de la estructura
	strcpy_s(Alumno100.carrera, carreraq); // Se copia la cadena 2 en la cadena 1 / Este tipo de copia strcpy_s evita el buffer overflow
	strcpy_s(Alumno100.nombre, Nombreq); // Se copia la cadena 2 en la cadena 1 / Este tipo de copia strcpy_s evita el buffer overflow
	cout << "El alumno " << Alumno100.nombre << " fue resgistrado con el numero de carnet " << Alumno100.carnet << endl; // Se muestera un mensaje en pantalla
	cout << "en la carrera " << Alumno100.carrera << "." << endl; // Se muestra un mensaje en pantalla
	system("pause"); // Se pausa la ejecución del programa
}

/* Salida del programa: 
El alumno Jose fue resgistrado con el numero de carnet 201563645
en la carrera IMT.
Presione una tecla para continuar . . .*/

/* Para este programa se crea una estructura con 4 tipos de dato, dos de estos datos se modifican en la función main haciendo referencia a la 
estructura y los otros usan la instrucción strcpy_s para copiar su valor de variables previamente consrtuidas */
