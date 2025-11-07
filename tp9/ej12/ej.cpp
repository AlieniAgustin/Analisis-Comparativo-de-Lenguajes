#include <iostream>
#include <vector>
#include <string>
#include <algorithm> // Para std::sort
#include <functional>  // Para std::greater y std::less

/**
 * Programa que ordena los argumentos de la línea de comandos.
 * * Uso: ./ordenar_args arg3 arg1 arg2
 * Salida:
 * arg3
 * arg2
 * arg1
 */
int main(int argc, char* argv[]) {

    // 1. Crear un vector de std::string para almacenar los argumentos.
    // Empezamos en i = 1 para omitir el nombre del programa (argv[0]).
    std::vector<std::string> argumentos;
    for (int i = 1; i < argc; ++i) {
        // Convertimos el C-string (char*) a std::string y lo añadimos
        argumentos.push_back(argv[i]);
    }

    // 2. Verificar si hay algo que ordenar
    if (argumentos.empty()) {
        std::cout << "No se proporcionaron argumentos para ordenar." << std::endl;
        return 0;
    }

    // 3. Ordenar el vector usando std::sort y un objeto-función de la STL
    //
    // std::sort(inicio, fin, comparador)
    //
    // Usaremos std::greater<std::string>()
    // Esto crea un objeto temporal (functor) cuyo operador() 
    // devuelve true si el primer argumento es "mayor que" el segundo (orden Z-A).
    std::sort(argumentos.begin(), argumentos.end(), std::greater<std::string>());

    // 4. Imprimir los resultados ordenados
    std::cout << "Argumentos ordenados (descendente):" << std::endl;
    for (const std::string& arg : argumentos) {
        std::cout << arg << std::endl;
    }

    /*
    // --- Variación con orden ascendente (A-Z) ---
    // Si quisieras orden ascendente, usarías std::less
    
    std::sort(argumentos.begin(), argumentos.end(), std::less<std::string>());
    
    std::cout << "\nArgumentos ordenados (ascendente):" << std::endl;
    for (const std::string& arg : argumentos) {
        std::cout << arg << std::endl;
    }
    */

    return 0;
}
