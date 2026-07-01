bool esPrimo(int x) {
    for (int i = 2; i < x; i++)
        if (!(x%i)) return false;

    return true;
}

int primoSiguente(int p) {
    int n;
    for (int i = p; true; i++) {
        if (esPrimo(i)) {
            n = i;
            break;
        }
    }
    return n;
}

int primoAnterior(int p) {
    int n;
    for (int i = p - 1; i >= 0; i--) {
        if (esPrimo(i)) {
            n=i;
            break;
        }
    }
    return n;
}