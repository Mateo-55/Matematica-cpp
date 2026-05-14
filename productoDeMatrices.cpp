#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

double productoPunto(vector<double>vec1, vector<double> vec2, int tam) {
    double prod = 0;
    for (int i = 0; i < tam; i++)
        prod += vec1[i] * vec2[i];

    return prod;
}

int main () {
     string azul = "\033[44m", resetColor = "\033[0m"; // colores para el fondo

    // letrero
    cout<< endl
        << "\t" << azul << "==============================================" << endl << resetColor
        << "\t" << azul << "============ Producto De Matrizes ============" << endl << resetColor
        << "\t" << azul << "==============================================" << endl << resetColor
        << endl;
    int x1, x2, y1, y2;
    cout << "\tIngrese las dimensiones de la matriz 1\n? ";
    cin >> y1 >> x1;
    cout << "\tIngrese las dimensiones de la matriz 2\n? ";
    cin >> y2 >> x2;


    // Validar la multiplicacion

    if (y1 != x2 && y2 != x1) {        
        cerr << "No es posible realizar la multiplicación." << endl;
        exit(1);
    }
    
    int n , m;
    if ( y1 == x2 ) {
        n = y2;
        m = x1;
    } else {
        n = y1;
        m = x2;
    }

    double matrizProducto[n][m];
    /*
        cuando tenemos dos matrizes
         ----------    ----------
         |x1 x2 x3|    |y1 y2 y3|
         |x4 x5 x6|    |y4 y5 y6|
         |x7 x8 x9|    |y7 y8 y9|
         ----------    ----------

         para:
         z1 z2 z3
         z4 z5 z6
         z7 z8 z9

         z1 = ∑(xj * yi) 

        Nota:
         cada elemento es el producto punto de dos vectorez
    */


    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) { cout << matrizProducto[i][j] << ' '; }
        cout << endl;
    }

    return 0;
}