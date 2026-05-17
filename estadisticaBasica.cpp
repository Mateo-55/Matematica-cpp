#include <iostream>
#include <cmath>
#include <vector>
#include <typeinfo>
using namespace std;


int main() {
     string azul = "\033[44m", resetColor = "\033[0m"; // colores para el fondo

    // letrero
    cout<< endl
        << "\t" << azul << "==============================================" << endl << resetColor
        << "\t" << azul << "============= Estadistica Basíca =============" << endl << resetColor
        << "\t" << azul << "==============================================" << endl << resetColor
        << endl ;

    return 0;
}