// Laboratorio 1A - Ejercicio #2 / Jose Pablo Agüero Mora (2021126372)

// Sección donde se incluyen las bibliotecas
#include <iostream> // Biblioteca estándar para poder tener acceso a los dispositivos de entrada y salida
#include <conio.h> // Ayuda a proveer un sistema de entrada y salida por consola
using namespace std; // Declara un nombre de espacios estándar / Se puede utilizar el nombre de las instrucciones sin tener que especificar el espacio del nombre

void main() // Función main, inicia y termina dentro de las llaves, el programa inicia su ejecución en esta función
{
	int a = 2; // Se declara una variable de tipo entero (int) llamada a con un valor 2
	float b = 3.5; // Se declara una variable de tipo flotante (float) llamada b con un valor 3.5
	float c = a + b; // Se declara una varuable de tipo flotante (float) llamada c con el valor de la suma de a + b
	cout << "El valor de a+b es: " << c << " centimetros." << endl; // Muestra un mensaje en pantalla con la instrucción cout, se usa << para concatenar otros elementos
	printf("el valor de a+b es: %f \n", c); // También sirve para imprimir un mensaje en pantalla, el %f define el tipo de variable que va dentro del mensaje
	system("pause"); // Pausa la ejecución del programa
}

/* Salida del programa :
El valor de a+b es: 5.5 centimetros.
el valor de a + b es : 5.500000
Presione una tecla para continuar . . . */

/* El programa mostró correctamente los mensajes indicados con las sumas correspondientes, en el caso del segundo resultado se muestra con todos
los decimales debido al %f en la instrucción printf */