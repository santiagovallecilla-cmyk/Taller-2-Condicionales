#include <iostream>

using namespace std;

int main() {
    int n1, n2, n3;

    cout << "Ingrese el primer numero: ";
    cin >> n1;
    cout << "Ingrese el segundo numero: ";
    cin >> n2;
    cout << "Ingrese el tercer numero: ";
    cin >> n3;

    int mayor = n1;
    int menor = n1;

    if (n2 > mayor) mayor = n2;
    if (n3 > mayor) mayor = n3;

    if (n2 < menor) menor = n2;
    if (n3 < menor) menor = n3;

    cout << "El mayor es: " << mayor << endl;
    cout << "El menor es: " << menor << endl;

    if (n1 == n2 && n2 == n3) {
        cout << "Los tres numeros son iguales." << endl;
    } else if (n1 == n2 || n1 == n3 || n2 == n3) {
        cout << "Hay dos numeros iguales y uno distinto." << endl;
    } else {
        cout << "Los tres numeros son distintos." << endl;
    }

    return 0;
}