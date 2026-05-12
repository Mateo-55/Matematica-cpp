// Resolución de triangulos oblicangulos y rectangulos
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

long double A=0, B=0, C=0, a=0, b=0, c=0;

// La biblioteca <cmath> trabaja con radianes \
   pero para este proyecto optaremos por usar \
   usar el sistema sexagesimal

// Creación de funciones que travajen con el sistema sexagesimal

long double arc_sen(long double A) { return asin(A) * 180/M_PI; } // arco seno
long double arc_cos(long double A) { return acos(A) * 180/M_PI; } // arco coseno
long double arc_tan(long double A) { return atan(A) * 180/M_PI; } // arco tangente

long double _sen(long double A) { return sin(A * M_PI/180); } // seno
long double _cos(long double A) { return cos(A * M_PI/180); } // coseno
long double _tan(long double A) { return tan(A * M_PI/180); } // tangente

int main() {
    string azul = "\033[44m", resetColor = "\033[0m";

    // letrero
    cout<< endl
        << "\t" << azul << "---------------------------------------------" << endl << resetColor
        << "\t" << azul << "------------ Resolver Triangulos ------------" << endl << resetColor
        << "\t" << azul << "---------------------------------------------" << endl << resetColor
        << endl ;


    // output final
    cout<< setprecision(5)
        << azul << setw(4) << setiosflags(ios::left) << "A = " << setw(10) << setiosflags(ios::right) << A << "º" << "    " << setw(4) << "a = " << setw(10) << setiosflags(ios::left) << a << resetColor << endl
        << azul << setw(4) << setiosflags(ios::left) << "B = " << setw(10) << setiosflags(ios::right) << B << "º" << "    " << setw(4) << "b = " << setw(10) << setiosflags(ios::left) << b << resetColor << endl
        << azul << setw(4) << setiosflags(ios::left) << "C = " << setw(10) << setiosflags(ios::right) << C << "º" << "    " << setw(4) << "c = " << setw(10) << setiosflags(ios::left) << c << resetColor << endl
        << resetiosflags(ios::left) << endl;

    cout << "   Razones de A" << endl;
    cout << "Seno: " << _sen(A) << "º \tCoseno: " << _cos(A) << "º\t Tangente: " << _tan(A) << endl << endl;

    cout << "   Razones de B" << endl;
    cout << "Seno: " << _sen(B) << "º \tCoseno: " << _cos(B) << "º\t Tangente: " << _tan(B) << endl << endl;
    
    cout << "   Razones de C" << endl;
    cout << "Seno: " << _sen(C) << "º \tCoseno: " << _cos(C) << "º\t Tangente: " << _tan(C) << endl << endl;

    return 0;
}