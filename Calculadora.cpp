#include <iostream>
#include <cmath>

using namespace std;

// Funciones para cada operación
double sumar(double a, double b) {
    return a + b;
}

double restar(double a, double b) {
    return a - b;
}

double multiplicar(double a, double b) {
    return a * b;
}

double dividir(double a, double b) {
    if (b == 0) {
        throw invalid_argument("Error: División por cero");
    }
    return a / b;
}

double raiz_cuadrada(double a) {
    if (a < 0) {
        throw invalid_argument("Error: No se puede calcular la raíz cuadrada de un número negativo");
    }
    return sqrt(a);
}

// Función principal
int main() {
    cout << "Bienvenido a la calculadora modular" << endl;

    while (true) {
        cout << "\nElige una operación:" << endl;
        cout << "1. Sumar" << endl;
        cout << "2. Restar" << endl;
        cout << "3. Multiplicar" << endl;
        cout << "4. Dividir" << endl;
        cout << "5. Raíz cuadrada" << endl;
        cout << "6. Salir" << endl;

        int opcion;
        cout << "Ingresa el número de la operación: ";
        cin >> opcion;

        if (opcion == 6) {
            cout << "Saliendo de la calculadora. ¡Hasta luego!" << endl;
            break;
        }

        double num1, num2;

        if (opcion >= 1 && opcion <= 4) {
            cout << "Ingresa el primer número: ";
            cin >> num1;
            cout << "Ingresa el segundo número: ";
            cin >> num2;
        } else if (opcion == 5) {
            cout << "Ingresa un número: ";
            cin >> num1;  // Solo se necesita un número para la raíz cuadrada
        }

        try {
            switch (opcion) {
                case 1:
                    cout << "Resultado: " << sumar(num1, num2) << endl;
                    break;
                case 2:
                    cout << "Resultado: " << restar(num1, num2) << endl;
                    break;
                case 3:
                    cout << "Resultado: " << multiplicar(num1, num2) << endl;
                    break;
                case 4:
                    cout << "Resultado: " << dividir(num1, num2) << endl;
                    break;
                case 5:
                    cout << "Resultado: " << raiz_cuadrada(num1) << endl;
                    break;
                default:
                    cout << "Opción inválida" << endl;
                    break;
            }
        } catch (const invalid_argument& e) {
            cout << e.what() << endl;
        }
    }

    return 0;
}
