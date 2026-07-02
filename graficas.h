#include <vector>

class grafica {
private:

public:
    int x;
    int y;
    int centroX;
    int centroY;
    std::vector<std::vector<char>> fondo;
    
    grafica(int x, int y) {
        this->x = x;
        this->y = y;
        centroX = x/2;
        centroY = y/2;
        initFondo(x, y);
    }

    void initFondo(int x, int y) {
        fondo.resize(y, std::vector<char>(x));
    }

    void setCentroX(int n) {
        centroX = n;
    }

    void setCentroY(int n) {
        centroY = n;
    }
};