#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() {
    string azul = "\033[44m", resetColor = "\033[0m"; // colores para el fondo

    // letrero
    cout<< endl
        << "\t" << azul << "==============================================" << resetColor << endl
        << "\t" << azul << "============== Grafica del Seno ==============" << resetColor << endl
        << "\t" << azul << "==============================================" << resetColor << endl
        << endl;

    // dimensiones
    int x, y, relacion;

    // input
    cout << "Ingrese la altura\n? ";
    cin >> y;
    cout << "Ingrese el ancho\n? ";
    cin >> x;
    cout << "Ingrese la relacion x:grados\n? ";
    cin >> relacion;
    cout << endl;

    char f[y][x]; // fondo

    for (int i = 0; i < y; i++) {
        for (int j = 0; j < x; j++) {
            f[i][j] = ' ';
        }
        
    }

    // generar grafico
    int ceroY = y/2;
    int uno = y-1;
    int menos1 = 0;
    int posY;

    for (int i = 0; i < x; i++) {
        posY = ceroY + ( sin( ( i*relacion ) * M_PI/180 ) * ceroY-1 );
        f[posY][i] = '#';
    }
    

    // output
    for (int i = 0; i < y; i++) {
        for (int j = 0; j < x; j++) {
            cout << f[i][j];
        }
        cout << endl;
    }
    return 0;
}