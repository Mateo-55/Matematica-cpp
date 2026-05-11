// Resolución de triangulos oblicangulos y rectangulos
#include <iostream>
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
    return 0;
}