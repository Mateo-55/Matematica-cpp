#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main() {
     string azul = "\033[44m", resetColor = "\033[0m"; // colores para el fondo

    // letrero
    cout<< endl
        << "\t" << azul << "==============================================" << endl << resetColor
        << "\t" << azul << "========= Producto Punto De Vectores =========" << endl << resetColor
        << "\t" << azul << "==============================================" << endl << resetColor
        << endl ;
    
    // input
    cout << "\tIngrese la longitud de los vectores\n? ";
    int cantDatos;
    cin >> cantDatos;

    vector<double> vec1(cantDatos), vec2(cantDatos);

    cout << "\tIngrese los vectores\n";
    for (int i = 0; i < cantDatos; i++)
        cin >> vec1[i];
    
    for (int i = 0; i < cantDatos; i++)
        cin >> vec2[i];

    // output
    double producto=0;
    for (int i = 0; i < cantDatos; i++)
        producto += vec1[i] * vec2[i];
    
    if ((int)producto == producto) {
        cout << "\n   El producto punto es: " << azul << producto << resetColor << endl;
    } else {
        cout << "\n   El producto punto es: " << azul << setprecision(5) << fixed << producto << resetColor << endl;
    }
    
    return 0;
}