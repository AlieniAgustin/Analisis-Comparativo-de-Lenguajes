#include <iostream>
using namespace std;

/**
 * se compila con g++ ej.cpp -o ej
 * se ejecuta con ./ej 
 */

double dividir(double a, double b) {
    if (b == 0) {
        throw runtime_error("Error: división por cero"); // lanzar excepción
    }
    return a / b;
}

int main() {
    double x = 10, y = 3;

    try {
        cout << "Intentando dividir " << x << " entre " << y << endl;
        double resultado = dividir(x, y);
        cout << "Resultado: " << resultado << endl;
    }
    catch (const runtime_error& e) {  // capturar la excepción
        cerr << "Se produjo una excepción: " << e.what() << endl;
    }
 
    return 0;
}
