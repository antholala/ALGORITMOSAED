#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

class Reina{
public:
    Reina(int c, Reina*V);

    bool buscaSolucion();
    bool avanzar();
    void print();
private:
    int fila;
    const int columna;
    Reina*vecina;

    bool puedeAtacar(int testfila, int testcolumna);
};

Reina::Reina(int c, Reina*V):columna(c), vecina(V){
    fila = 1;     // Empieza a buscar una soluciÃ³n desde la primera fila.
}

void Reina::print() {
    if (vecina) {
        vecina->print();    //Primero lista las vecinas.
        cout << "columna " << columna << " fila " << fila << "\n";
    }
}
bool Reina::puedeAtacar(int testfila, int testcolumna) {
    int diferenciaColumnas = testcolumna - columna;
    if ((fila == testfila) || (fila + diferenciaColumnas == testfila) ||
        (fila - diferenciaColumnas == testfila)) {  //En la misma fila o en la misma diagonal.
        return true;
    }
    // Mira si es atacable por las vecinas de la izquierda:
    return (vecina && vecina->puedeAtacar(testfila, testcolumna));
}

bool Reina::buscaSolucion() {
    // Si estÃ¡ bien colocada (nadie la puede atacar) ya es una soluciÃ³n:
    if (!vecina || !vecina->puedeAtacar(fila, columna)) {
        return true;
    }
    // Si no, intenta avanzar a una posiciÃ³n donde no la puedan atacar:
    if (avanzar()) {
        return true;
    }
    return false;   // No se ha encontrado una soluciÃ³n.
}

bool Reina::avanzar() {
    if (fila < 8) {        // Avanza una posiciÃ³n y mira si hay soluciÃ³n.
        fila++;
        return buscaSolucion();
    }
    // Si no puede avanzar, intenta que lo hagan las vecinas:
    if (!vecina || !vecina->avanzar()) {
        return false;
    }
    // Habiendo avanzado la vecina, busca otra soluciÃ³n desde la fila 1:
    fila = 1;
    return buscaSolucion();
}


int main() {
    int cuenta = 0;       // Cuenta de todas las posibles soluciones.
    Reina *ultimaReina = 0;

    for (int i = 1; i <= 8; i++) {
        // Crear una reina:
        ultimaReina = new Reina(i, ultimaReina);
        // Intenta colocarla sin que nadie le ataque:
        if (!ultimaReina->buscaSolucion()) {
            cout << "No hay solucion\n";
        }
    }
    do {
        cout << "\nSolucion " << ++cuenta;
        cout << "===================" << endl;
        ultimaReina->print();
    } while (ultimaReina->avanzar());
}