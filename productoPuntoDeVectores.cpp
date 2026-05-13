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
    
    cout << "Ingrese la longitud de los vectores\n? ";
    
    return 0;
}