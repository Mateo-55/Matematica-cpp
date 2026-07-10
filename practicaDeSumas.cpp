#include <iostream>
#include <thread>
#include <ctime>
#define null NULL // no me gusta escribir null con mayusculas
using namespace std;

int main() {

    string azul = "\033[44m", resetColor = "\033[0m"; // colores para el fondo

    // letrero
    cout<< endl
        << "\t" << azul << "=============================================" << resetColor << endl
        << "\t" << azul << "============ Entrenador de Sumas ============" << resetColor << endl
        << "\t" << azul << "=============================================" << resetColor << endl
        << endl;

    srand(time(null));
    int a = 0, b = 0, c = 0;
    int mx, mn;
    int p; // puntaje

    cout << "Ingrese los limites\n Maximo ? ";
    cin >> mx;
    cout << " Minimo ? ";
    cin >> mn;

    const int max = mx, min = mn;

    for  ( p = 0; c == a + b; p++) {
        a = (rand() % (max - min + 1)) + min;
        b = (rand() % (max - min + 1)) + min;

        cout << endl << a << " + " << b << " = ";
        cin >> c;
        
    };


    
    cout << "Error: el resultado era: " << a+b << endl;
    cout << "\nTu puntaje fue de: " << p << endl;
    if (p <= 5)     { cout << " Puedes Mejorar" << endl;this_thread::sleep_for(chrono::milliseconds(500));  }
    if (p >= 10)    { cout << " Interesante" << endl; this_thread::sleep_for(chrono::milliseconds(500)); }
    if (p >= 15)    { cout << " Muy Bien" << endl; this_thread::sleep_for(chrono::milliseconds(500)); }
    if (p >= 20)    { cout << " Peculiar" << endl; this_thread::sleep_for(chrono::milliseconds(500)); }
    if (p >= 25)    { cout << " Excelente" << endl; this_thread::sleep_for(chrono::milliseconds(500)); }
    if (p >= 30)    { cout << " Buen intento" << endl; this_thread::sleep_for(chrono::milliseconds(500)); }
    if (p >= 35)    { cout << " Señal de maestría" << endl; this_thread::sleep_for(chrono::milliseconds(500)); }
    if (p >= 40)    { cout << " Bien" << endl; this_thread::sleep_for(chrono::milliseconds(500)); }
    if (p >= 45)    { cout << " Imparable" << endl; this_thread::sleep_for(chrono::milliseconds(500)); }
    if (p >= 50)    { cout << " Magnífico" << endl; this_thread::sleep_for(chrono::milliseconds(500)); }
    if (p >= 60)    { cout << " Increíble" << endl; this_thread::sleep_for(chrono::milliseconds(500)); }
    if (p >= 75)    { cout << " Fabuloso" << endl; this_thread::sleep_for(chrono::milliseconds(500)); }
    if (p >= 85)    { cout << " Asombroso" << endl; this_thread::sleep_for(chrono::milliseconds(500)); }
    if (p >= 100)   { cout << " Brillante" << endl; this_thread::sleep_for(chrono::milliseconds(500)); }
    if (p >= 125)   { cout << " Leyenda" << endl; this_thread::sleep_for(chrono::milliseconds(500)); }
    if (p >= 150)   { cout << " Sorprendente" << endl; this_thread::sleep_for(chrono::milliseconds(500)); }
    if (p >= 175)   { cout << " Imparable" << endl; this_thread::sleep_for(chrono::milliseconds(500)); }
    if (p >= 200)   { cout << " Impactante" << endl; this_thread::sleep_for(chrono::milliseconds(500)); }
    if (p >= 250)   { cout << " Épico" << endl; this_thread::sleep_for(chrono::milliseconds(500)); }
    if (p >= 300)   { cout << " Magnífico" << endl; this_thread::sleep_for(chrono::milliseconds(500)); }
    if (p >= 400)   { cout << " Sobrehumano" << endl; this_thread::sleep_for(chrono::milliseconds(500)); }
    if (p >= 500)   { cout << " Deslumbrante" << endl; this_thread::sleep_for(chrono::milliseconds(500)); }
    if (p >= 600)   { cout << " Leyenda viva" << endl; this_thread::sleep_for(chrono::milliseconds(500)); }
    if (p >= 750)   { cout << " Inmortal" << endl; this_thread::sleep_for(chrono::milliseconds(500)); }
    if (p >= 1000)  { cout << " COMBOx1000" << endl; this_thread::sleep_for(chrono::milliseconds(500)); }
    if (p >= 1250)  { cout << " Super sayayin" << endl; this_thread::sleep_for(chrono::milliseconds(500)); }
    if (p >= 1500)  { cout << " Maestro de las sumas" << endl; this_thread::sleep_for(chrono::milliseconds(500)); }
    if (p >= 10000) { cout << " Descansa un rato" << endl; }

    return 0;
}