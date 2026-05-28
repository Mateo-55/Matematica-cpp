#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

void prom(vector<double>, double &, const int);
void desv_med(vector<double>, const int, double&, const double);
void sum(vector<double>, const int, double&);
void med(vector<double>, const int, double&);
void mod(vector<double>, const int, double&);

int main() {
     string azul = "\033[44m", resetColor = "\033[0m"; // colores para el fondo

    // letrero
    cout<< endl
        << "\t" << azul << "==============================================" << endl << resetColor
        << "\t" << azul << "============= Estadistica Basíca =============" << endl << resetColor
        << "\t" << azul << "==============================================" << endl << resetColor
        << endl ;

    // Inupt
    int cantDatos;
    cout << "Ingrese la cantidad de datos\n? ";
    cin >> cantDatos;

    vector<double> lista(cantDatos);
    cout << "\nIngrese los " << cantDatos << " datos\n? ";
    for (int i = 0; i < cantDatos; i++)
        cin >> lista[i];
    
    // calculo
    double promedio = 0, desvMedia = 0, sumatoria = 0, mediana = 0, moda = 0;

    prom(lista, promedio, cantDatos);
    desv_med(lista, cantDatos, desvMedia, promedio);
    sum(lista, cantDatos, sumatoria);
    med(lista, cantDatos, mediana);
    mod(lista, cantDatos, moda);

    // output
    cout<< endl 
        << "Promedio:          " << promedio  << endl
        << "Desviacion media:  " << desvMedia << endl
        << "Sumatoria:         " << sumatoria << endl
        << "Moda:              " << moda      << endl
        << "Mediana:           " << mediana   << endl;

    return 0;
}

void prom(vector<double> arr, double &p, const int tam) {
    for (int i=0; i<tam; i++)
        p += arr[i];

    p /= tam;
}

void desv_med(vector<double> arr, const int tam, double &desvMedia, const double p) {
    vector<double> a(tam);

    for (int i = 0; i < tam; i++)
        a[i] = abs(arr[i] - p);
        
        prom(a, desvMedia, tam);
}

void sum(vector<double> arr, const int tam, double &sumatoria) {
    for (int i = 0; i < tam; i++)
        sumatoria += arr[i];
}

void med(vector<double> arr, const int tam, double &mediana) {
    for (int i = 0; i < tam; i++) {
        for (int j = 0; j < tam-1; j++) {
            if (arr[j] > arr[j+1]) {
                double tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
        }
    }

    if (tam%2) {
        mediana = arr[((tam+1)/2)-1];
    } else {
        mediana = ( arr[tam/2] + arr[(tam/2)-1] ) / 2;
    }
    
}

void mod(vector<double> arr, const int l, double &moda) {
    double m[2] = {arr[0], 0};
    for (int i = 0; i < l; i++) {
        if (i==0) {
            for (int j = 0; j < l; j++) {
                if (arr[j]  == m[0]) m[1]++;
            }
        }

        if (arr[i] != m[0]) {
            double t[2] = {arr[i], 0};
            for (int j = 0; j < l; j++) {
                if (t[0] == arr[j]) t[1]++;
            }

            if (t[1] > m[1]) m[0]=t[0], m[1]=t[1];
        }
    }

    moda = m[0];
}