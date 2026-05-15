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

    bool aMulB = (x1 == y2);
    bool bMulA = (x2 == y1);

    if (!aMulB && !bMulA) {
        cerr << "No es posible realizar la multiplicación en ninguna." << endl;
        return 1;
    }

    // input
    vector<vector<double>> a(y1, vector<double>(x1));
    vector<vector<double>> b(y2, vector<double>(x2));

    cout << "\tIngrese la matriz 1" << endl;
    for (int i = 0; i < y1; i++) {
        for (int j = 0; j < x1; j++) {
            cin >> a[i][j];
        }
    }
    
    cout << "\tIngrese la matriz 2" << endl;
    for (int i = 0; i < y2; i++) {
        for (int j = 0; j < x2; j++) {
            cin >> b[i][j];
        }
    }
    
    int n, m, o;
    bool useAfirst;

    if (aMulB) {
        useAfirst = true;
        n = y1;
        m = x2;
        o = x1;
    } else {
        useAfirst = false;
        n = y2;
        m = x1;
        o = x2;
    }

    vector<vector<double>> matrizProducto(n, vector<double>(m));

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
        for (int j = 0; j < m; j++) {
            vector<double> v1(o), v2(o);
            for (int k = 0; k < o; k++) {
                if (useAfirst) {
                    v1[k] = a[i][k];
                    v2[k] = b[k][j];
                } else {
                    v1[k] = b[i][k];
                    v2[k] = a[k][j];
                }
            }
            matrizProducto[i][j] = productoPunto(v1, v2, o);
        }
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            
            if ((int) matrizProducto[i][j] == matrizProducto[i][j]) { // << setw(11) setiosflags(ios::left)
                cout << defaultfloat << azul << matrizProducto[i][j] << resetColor << "\t\t";
            } else {
                cout << setprecision(5) << fixed << azul << matrizProducto[i][j] << resetColor << "\t";
            }
        }
        cout << endl << endl;
    }
    


    return 0;
}