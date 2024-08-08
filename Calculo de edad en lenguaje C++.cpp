// Calculo de edad en lenguaje C++.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream> // Inclusión de bibliotecas de entrada y salida.
#include <stdio.h> // Inclusión del contenido del archivo de cabecera.

int main() // Funsión principal punto de entrada del programa.
{
    int a; // Declara una variable entera llamada a para almacenar la edad del usuario.
    std::cout << "Ingrese la edad: "; // solicita la edad al usuario mostrando un mensaje.
    std::cin >> a; // Se lee la entrada del usuario usando cin.

    if (a >= 18) { // Se verifica si es mayor de 18 utilizando una estructura de control if.
        std::cout << "Usted es mayor de edad." << std::endl; // Se muestra el resultado si el usuario es mayor de edad.
    }
    else { // Se muestra un resultado alternativo
        std::cout << "Usted es menor de edad." << std::endl; // Si el usuario es menor de 18 se muestra un mensaje indicandolo.
    }

    return 0; // Se finaliza el programa con un valor retorno de 0 indicando que el programa se ejecuto correctamente.
}

