#ifndef NETWORK_H
#define NETWORK_H

#include <router.h>
#include <fstream>
#include <string>
#include <list>
#include <stdio.h>
#include <stdlib.h>
#include <cstring>
#include <cstdlib>
#include <time.h>

class network
{
private:
    map <char, router> Red;
    map <char, router>::iterator itN;
    map <char, router>::iterator itN2;
public:
    void agregarRuter (char name);
    void eliminarRuter (char name);
    void imprimirRuter (char name);
    bool agregarEnlace (char name, char nom2, int cost);
    bool eliminarEnlace (char name1, char name2);
    void matrizadyacencia ();
    void leer();
    void red_aleatoria();
    void mostrarEnrutadores();
    bool booleanoAleatorio(float p);
    void buscar_camino(char origin, char dest);
    bool searchruter();
};

#endif // NETWORK_H
