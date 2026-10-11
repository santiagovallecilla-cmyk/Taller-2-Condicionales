#include <iostream>

using namespace std;

int main() {
    int totalSegundos, horas, minutos, segundos;

    cout << "Ingrese la cantidad de segundos: ";
    cin >> totalSegundos;

    // Validación: si el valor es negativo, muestra un mensaje de error
    if (totalSegundos < 0) {
        cout << "Error: El numero de segundos no puede ser negativo." << endl;
    } else {
        // Conversión usando división entera y módulo
        horas = totalSegundos / 3600;
        minutos = (totalSegundos % 3600) / 60;
        segundos = totalSegundos % 60;

        // Mostrar el resultado en pantalla
        cout << totalSegundos << " segundos equivalen a " 
             << horas << " hora(s), " 
             << minutos << " minuto(s) y " 
             << segundos << " segundo(s)." << endl;
    }

    return 0;
}