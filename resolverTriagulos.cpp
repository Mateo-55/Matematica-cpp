// Resolución de triangulos oblicangulos y rectangulos
#include <iostream>
#include <iomanip>
#include <cmath>
#ifndef M_PI
    #define M_PI 3.14159265358979323846264338327950288419716939937510
#endif

using namespace std; // uso de namespace std para facilitar la lectura y escritura del codigo

// Declaracion de variables globales para ahorrar memoria
long double A=0, B=0, C=0, a=0, b=0, c=0; // Uso de long double para mayor presición

/*
   La biblioteca <cmath> trabaja con radianes 
   pero para este proyecto optaremos por usar 
   usar el sistema sexagesimal
*/

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
    cout << "Ingrese los datos : A, B, C, a, b, c\n                  (si el dato es desconocido ingrese 0)\n? ";
    cin >> A >> B >> C >> a >> b >> c;

    resolverTriangulo();

    // output final
    double d = A * 180/M_PI, e = B * 180/M_PI, f = C * 180/M_PI;
    cout<< setprecision(5) << fixed
        << azul << setw(4) << setiosflags(ios::left) << "A = " << setw(10) << setiosflags(ios::right) << d << "º" << "    " << setw(4) << "a = " << setw(10) << setiosflags(ios::left) << a << resetColor << endl
        << azul << setw(4) << setiosflags(ios::left) << "B = " << setw(10) << setiosflags(ios::right) << e << "º" << "    " << setw(4) << "b = " << setw(10) << setiosflags(ios::left) << b << resetColor << endl
        << azul << setw(4) << setiosflags(ios::left) << "C = " << setw(10) << setiosflags(ios::right) << f << "º" << "    " << setw(4) << "c = " << setw(10) << setiosflags(ios::left) << c << resetColor << endl
        << resetiosflags(ios::left) << endl;

    cout << "   Razones de A" << endl;
    cout << "Seno: " << sin(A) << " \tCoseno: " << cos(A) << "\t Tangente: " << tan(A) << endl << endl;

    cout << "   Razones de B" << endl;
    cout << "Seno: " << sin(B) << " \tCoseno: " << cos(B) << "\t Tangente: " << tan(B) << endl << endl;
    
    cout << "   Razones de C" << endl;
    cout << "Seno: " << sin(C) << " \tCoseno: " << cos(C) << "\t Tangente: " << tan(C) << endl << endl;

    return 0;
}

void resolverTriangulo() {
    int cantLados=0, cantAngulos=0, cantDatos=0;

    A *= M_PI/180;
    B *= M_PI/180;
    C *= M_PI/180;

    // asegurarse de que exista solucion
    // 1. No hay valores negativos
    // 2. no existen angulos mayores a 180º o π(rad)
    // 3. un lado conocido no puede ser mayor a la suma de los otros dos conocidos
    // 4. un lado conocido no puedde ser menor que la resta de los otros dos lados conocidos
    bool solucionable = true;

    if ( A < 0 || B < 0 || C < 0 || a < 0 || b < 0 || c < 0 ) { // condicion 1
        solucionable = false;
    }
    
    if (A > M_PI || B > M_PI || C > M_PI) { // condicion 2
        solucionable = false;
    }
    
    if ( a!=0 && b!=0 && c!=0 ) { // condicion 3
        if (a > b+c) {
            solucionable=false;
        }
        
        if (b > a+c) {
            solucionable=false;
        }

        if (c > b+a) {
            solucionable=false;
        }
    }

    if ( a!=0 && b!=0 && c!=0 ) { // condicion 4
        if (a < abs(b-c)) {
            solucionable=false;
        }
        
        if (b < abs(a-c)) {
            solucionable=false;
        }

        if (c < abs(b-a)) {
            solucionable=false;
        }
    }


    if (!solucionable)  {
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
    A = acos( (( pow(b,2) + pow(c,2) - pow(a,2) ) / (2*b*c)) );
    B = acos( (( pow(a,2) + pow(c,2) - pow(b,2) ) / (2*a*c)) );
    C = M_PI - A - B;
}

void casoLLA() {
    if (a != 0) {
        if (b!=0) {
            if (B != 0) { // caso B a b
                A = asin((a*sin(B))/b);
                C = M_PI - (A + B);
                c = (b*sin(C))/sin(B);

            } else if (A != 0) { // caso A a b
                B = asin((b*sin(A))/a);
                C = M_PI - (A + B);
                c = (b*sin(C))/sin(B);
            } else { // caso C a b
                c = sqrt( (a*a)+(b*b)-2*a*b*cos(C) );
                B = asin((b*sin(C))/c);
                A = asin((a*sin(C))/c);

            } 

        } else {
            if (A != 0) { // caso A a c
                C = asin((c*sin(A))/a);
                B = M_PI - (A + C);
                b = (a*sin(B))/sin(A);

            } else if (B != 0) { // caso B a c
                b = sqrt( (a*a)+(c*c)-2*a*c*cos(B) );
                A = asin((a*sin(B))/b);
                C = M_PI - (A + B);

            } else { // caso C a c
                A = asin((a*sin(C))/c);
                B = M_PI - (A + C);
                b = (c*sin(B))/sin(C);

            }

        }
        
    } else {
        if (A != 0) { // caso A b c
            a = sqrt(b*b + c*c - 2 * b * c * cos(A));
            C = asin((c*sin(A))/a);
            B = asin((b*sin(A))/a);
        } else if (B != 0) {  // caso B b c
            C = asin((c*sin(B))/b);
            A = M_PI - (B + C);
            a = b*sin(A)/sin(B);
        } else {  // caso C b c
            B = asin((b*sin(C))/c);
            A = M_PI - (B + C);
            a = c*sin(A)/sin(C);
        }
    }
}

void casoLAA() {

    if (A!= 0) {
        if ( B!=0 )
        {
            if (a != 0) { // caso A B a
                C = M_PI - B - A;
                b = a*sin(B)/sin(A);
                c = a*sin(C)/sin(A);
            } else if (b != 0) { // caso A B b
                C = M_PI - B - A;
                a = b*sin(A)/sin(B);
                c = b*sin(C)/sin(B);

            } else if (c != 0) { // caso A B c
                C = M_PI - B - A;
                a = c*sin(A)/sin(C);
                b = c*sin(B)/sin(C);
            }
        } else 
        if ( C!=0 ) {
            if (a != 0) { // caso A C a
                B = M_PI - C - A;
                b = a*sin(B)/sin(A);
                c = a*sin(C)/sin(A);
            } else if (b != 0) { // caso A C b
                B = M_PI - C - A;
                a = b*sin(A)/sin(B);
                c = b*sin(C)/sin(B);

            } else if (c != 0) { // caso A C c
                B = M_PI - C - A;
                a = c*sin(A)/sin(C);
                b = c*sin(B)/sin(C);
            }
        }
        
    } else if (B!=0)
    {
        if (a != 0) { // caso B C a
            A = M_PI - B - C;
            b = a*sin(B)/sin(A);
            c = a*sin(C)/sin(A);

        } else if (b != 0) { // caso B C b
            A = M_PI - B - C;
            a = b*sin(A)/sin(B);
            c = b*sin(C)/sin(B);
        } else if (c != 0) { // caso B C c
            A = M_PI - B - C;
            b = c*sin(B)/sin(C);
            a = c*sin(A)/sin(C);
        }
    }
}

// Desarrollado por Mateo B.
