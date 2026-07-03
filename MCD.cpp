#include <iostream>
#include <vector>
#include <cmath>
#include "primos.h"
using namespace std;

int mcd(int, int);
int mcdMultiple(vector<int>, int);

int main() {
    string azul = "\033[44m", resetColor = "\033[0m"; // colores para el fondo
    // letrero
    cout<< endl
        << "\t" << azul << "==============================================" << endl << resetColor
        << "\t" << azul << "============ Maximo Común Divisor ============" << endl << resetColor
        << "\t" << azul << "==============================================" << endl << resetColor
        << endl;
    // input
    
    cout << "Ingrese la cantidad de datos\n? ";
    int n; // Cantidad de datos
    cin >> n;

    vector<int> datos(n); // Lista de datos
    cout << "Ingrese los datos\n? ";
    for (int i = 0; i < n; i++) {
        cin >> datos[i];
    }
    // Maximo Comun Divisor
    int MCD = mcdMultiple(datos, n);

    cout << "El MCD es: " << azul << MCD << resetColor << endl;
    
    return 0;
}

int mcd(int a, int b) {
    while (b!=0) {
        int temp = b;;
        b = a % b;
        a = temp;
    }
    return a;
}

int mcdMultiple(vector<int> datos, int n) {
    int r = datos[0];
    for (int i = 0; i < n; i++) {
        r = mcd(r, datos[i]);
    }
    
    return r;
}