#ifndef GRAFICAS_H
#define GRAFICAS_H
#include <vector>

class grafica {
private:

public:
    int x;
    int y;
    int centroX;
    int centroY;
    std::vector<std::vector<char>> fondo;

    grafica(int x, int y) { // constructor
        this->x = x;
        this->y = y;
        setCentroX();
        setCentroY();
        initFondo();
    }

    void initFondo() {
        fondo.resize(y, std::vector<char>(x, ' '));
    }
    
    // getters
    int getCentroX() {
        return centroX;
    }
    int getCentroY() {
        return centroY;
    }
    std::vector<std::vector<char>> getFondo() {
        return fondo;
    }
    int getX() {
        return x;
    }
    int getY() {
        return y;
    }
    
    // setters
    void setX(int x) { // set x
        this->x = x;
        redimencionar(x, y);
    }
    void setY(int y) { // set y
        this->y = y;
        redimencionar(x, y);
    }
    void setCentroX(int n) { // set centroX con un valor de referencia
        centroX = n;
    }
    void setCentroY(int n) { // set centroY con un valor de referencia
        centroY = n;
    }
    void setCentroX() { // set centroX con base a x
        centroX = x/2;
    }
    void setCentroY() { // set centroY con base a y
        centroY = y/2;
    }

    void redimencionar(int x, int y) {
        this->x = x;
        this->y = y;
        fondo.resize(y, std::vector<char>(x, ' '));
        setCentroX();
        setCentroY();
    }


    void vaciarFondo() {
        for (int i = 0; i < y; i++) {
            for (int j = 0; j < x; j++) {
                fondo[i][j] = ' ';
            }
        }
    }

    void remplazar( grafica &g ) {
        this->x = g.x;
        this->y = g.y;
        this->centroX = g.centroX;
        this->centroY = g.centroY;
        this->fondo = g.fondo;
    }
};

#endif

// Creado por Mateo B.