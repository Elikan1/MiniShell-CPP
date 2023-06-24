#include <iostream>
#include <string>
#include <stdlib.h>

// Grupo: GActDocencia_33
// Fecha: 24/06/2023

// Función que muestra los comandos disponibles en el mini shell
void mostrarAyuda() {
    std::cout << "\nComandos disponibles:\n";
    std::cout << "---------------------\n";
    std::cout << "\nls              		  ===> Muestra contenido del directorio actual.\n";
    std::cout << "cd [ruta]       	    	  ===> Cambia el directorio actual.\n";
    std::cout << "pwd             		  ===> Muestra la ruta completa actual.\n";
    std::cout << "mkdir [nombre]  		  ===> Crea un nuevo directorio.\n";
    std::cout << "rm [ruta]       		  ===> Elimina archivo o directorio.\n";
    std::cout << "mv [ruta_origen] [ruta_destino]   ===> Mueve o renombra un archivo o directorio.\n";
    std::cout << "cp [ruta_origen] [ruta_destino]   ===> Copia un archivo o directorio.\n";
}

int main() {
    std::string comando;

    std::cout << "\n***************************************\n";
    std::cout << "* Bienvenido al MiniShell para CentOS *\n";
    std::cout << "***************************************\n";
    std::cout << "MiniShell - Ver. 1.0 - Elaborado por: Elikan Friedman\n";
    std::cout << "\nDigite: ayuda (para instrucciones de los comandos)\n";
    std::cout << "        salir (para terminar sesión)\n";

    while (true) {
        std::cout << "\nCentOS MiniShell > ";

        // Leer el comando ingresado por el usuario
        std::getline(std::cin, comando);

        // Verificar si se debe salir del programa
        if (comando == "salir") {
            break;
        }
        // Verificar si se solicita ayuda
        else if (comando == "ayuda") {
            mostrarAyuda();
        }
        // Ejecutar el comando ingresado utilizando la función std::system()
        else {
            int resultado = std::system(comando.c_str());

            if (resultado == -1) {
                std::cerr << "Error al ejecutar el comando.\n";
            }
        }
    }

    return 0;
}
