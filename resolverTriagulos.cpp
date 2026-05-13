// Resolución de triangulos oblicangulos y rectangulos
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std; // uso de namespace std para facilitar la lectura y escritura del codigo

// Declaracion de variables globales para ahorrar memoria
long double A=0, B=0, C=0, a=0, b=0, c=0; // Uso de long double para mayor presición

/*
   La biblioteca <cmath> trabaja con radianes 
   pero para este proyecto optaremos por usar 
   usar el sistema sexagesimal
*/

// Creación de funciones que trabajen con el sistema sexagesimal
long double arc_sen(long double A) { return asin(A) * 180/M_PI; } // arco seno
long double arc_cos(long double A) { return acos(A) * 180/M_PI; } // arco coseno
long double arc_tan(long double A) { return atan(A) * 180/M_PI; } // arco tangente

long double _sen(long double A) { return sin(A * M_PI/180); } // seno
long double _cos(long double A) { return cos(A * M_PI/180); } // coseno
long double _tan(long double A) { return tan(A * M_PI/180); } // tangente

// Procesos para solucionar triangulos
void resolverTriangulo(); // saber si el triangulo tiene soucion
void casoLLA(); // Caso lado lado angulo
void casoLAA(); // Caso lado angulo angulo
void casoLLL(); // Caso lado lado lado



int main() {
    string azul = "\033[44m", resetColor = "\033[0m"; // colores para el fondo

    // letrero
    cout<< endl
        << "\t" << azul << "=============================================" << endl << resetColor
        << "\t" << azul << "============ Resolver Triangulos ============" << endl << resetColor
        << "\t" << azul << "=============================================" << endl << resetColor
        << endl ;
    
    // input
    cout << "Ingrese los datos (si el dato es desconocido ingrese 0)\n? ";
    cin >> A >> B >> C >> a >> b >> c;

    resolverTriangulo();

    // output final
    cout<< setprecision(5) << fixed
        << azul << setw(4) << setiosflags(ios::left) << "A = " << setw(10) << setiosflags(ios::right) << A << "º" << "    " << setw(4) << "a = " << setw(10) << setiosflags(ios::left) << a << resetColor << endl
        << azul << setw(4) << setiosflags(ios::left) << "B = " << setw(10) << setiosflags(ios::right) << B << "º" << "    " << setw(4) << "b = " << setw(10) << setiosflags(ios::left) << b << resetColor << endl
        << azul << setw(4) << setiosflags(ios::left) << "C = " << setw(10) << setiosflags(ios::right) << C << "º" << "    " << setw(4) << "c = " << setw(10) << setiosflags(ios::left) << c << resetColor << endl
        << resetiosflags(ios::left) << endl;

    cout << "   Razones de A" << endl;
    cout << "Seno: " << _sen(A) << " \tCoseno: " << _cos(A) << "\t Tangente: " << _tan(A) << endl << endl;

    cout << "   Razones de B" << endl;
    cout << "Seno: " << _sen(B) << " \tCoseno: " << _cos(B) << "\t Tangente: " << _tan(B) << endl << endl;
    
    cout << "   Razones de C" << endl;
    cout << "Seno: " << _sen(C) << " \tCoseno: " << _cos(C) << "\t Tangente: " << _tan(C) << endl << endl;

    return 0;
}

void resolverTriangulo() {
    int cantLados=0, cantAngulos=0, cantDatos=0;

    // asegurarse de que exista solucion
    if ( A>180 || B>180 || C>180 || a>c+b || b>a+c || c>a+b || a<abs(c-b) || b<abs(a-c) || c<abs(a-b) ||
         A < 0 || B < 0 || C < 0 || a < 0 || b < 0 || c < 0 )  {
        cerr << "No se puede solucionar." << endl;
        exit(1);
    } else if  (a==0 && b==0 && c==0) {
        cerr << "No se puede solucionar." << endl;
        exit(1);
    }

    if (A!=0) { cantAngulos++; cantDatos++; }
    if (B!=0) { cantAngulos++; cantDatos++; }
    if (C!=0) { cantAngulos++; cantDatos++; }
    if (a!=0) { cantLados++; cantDatos++; }
    if (b!=0) { cantLados++; cantDatos++; }
    if (c!=0) { cantLados++; cantDatos++; }

    if (cantLados == 3) { casoLLL(); } else
    if (cantLados == 2 && cantAngulos) { casoLLA(); } else
    if (cantLados && cantAngulos == 2) { casoLAA(); } else 
    { cerr << "No se puede solucionar." << endl; exit(1); }

}

void casoLLL() {
    // A = arc cos ( b^2 + c^2 - a^2 / 2bc )
    A = arc_cos( (( pow(b,2) + pow(c,2) - pow(a,2) ) / (2*b*c)) );
    B = arc_cos( (( pow(a,2) + pow(c,2) - pow(b,2) ) / (2*a*c)) );
    C = 180.0L - A - B;
}

void casoLLA() {
    if (a != 0) {
        if (b!=0) {
            if (B != 0) { // caso B a b
                A = arc_sen((a*_sen(B))/b);
                C = 180.0L - (A + B);
                c = (b*_sen(C))/_sen(B);

            } else if (A != 0) { // caso A a b
                B = arc_sen((b*_sen(A))/a);
                C = 180.0L - (A + B);
                c = (b*_sen(C))/_sen(B);
            } else { // caso C a b
                c = sqrt( (a*a)+(b*b)-2*a*b*_cos(C) );
                B = arc_sen((b*_sen(C))/c);
                A = arc_sen((a*_sen(C))/c);

            } 

        } else {
            if (A != 0) { // caso A a c
                C = arc_sen((c*_sen(A))/a);
                B = 180.0L - (A + C);
                b = (a*_sen(B))/_sen(A);

            } else if (B != 0) { // caso B a c
                b = sqrt( (a*a)+(c*c)-2*a*c*_cos(B) );
                A = arc_sen((a*_sen(B))/b);
                C = 180.0L - (A + B);

            } else { // caso C a c
                A = arc_sen((a*_sen(C))/c);
                B = 180.0L - (A + C);
                b = (c*_sen(B))/_sen(C);

            }

        }
        
    } else {
        if (A != 0) { // caso A b c
            a = sqrt(b*b + c*c - 2 * b * c * _cos(A));
            C = arc_sen((c*_sen(A))/a);
            B = arc_sen((b*_sen(A))/a);
        } else if (B != 0) {  // caso B b c
            C = arc_sen((c*_sen(B))/b);
            A = 180.0L - (B + C);
            a = b*_sen(A)/_sen(B);
        } else {  // caso C b c
            B = arc_sen((b*_sen(C))/c);
            A = 180.0L - (B + C);
            a = c*_sen(A)/_sen(C);
        }
    }
}

void casoLAA() {

    if (A!= 0) {
        if (a != 0) { // caso A C a
            B = 180 - C - A;
            b = a*_sen(B)/_sen(A);
            c = a*_sen(C)/_sen(A);
        } else if (b != 0) { // caso A C b
            B = 180 - C - A;
            a = b*_sen(A)/_sen(B);
            c = b*_sen(C)/_sen(B);

        } else if (c != 0) { // caso A C c
            B = 180 - C - A;
            a = c*_sen(A)/_sen(C);
            b = c*_sen(B)/_sen(C);
        }
    } else if (B!=0)
    {
        if (a != 0) { // caso B C a
            A = 180 - B - C;
            b = a*_sen(B)/_sen(A);
            c = a*_sen(C)/_sen(A);

        } else if (b != 0) { // caso B C b
            A = 180 - B - C;
            a = b*_sen(A)/_sen(B);
            c = b*_sen(C)/_sen(B);
        } else if (c != 0) { // caso B C c
            A = 180 - B - C;
            b = c*_sen(B)/_sen(C);
            a = c*_sen(A)/_sen(C);
        }
    }

}

// Desarrollado por Mateo B.