#ifndef ROUTER_H
#define ROUTER_H

#include <iostream>
#include <map>

using namespace std;

class router
{
private:
    map <char,int>::iterator itR;
public:
    map <char,int> ruter;
    bool agregarEnrutador(char nom, int cost);
    bool modificarEnrutador(char nom, int cost);
    bool eliminarEnrutador(char nom);
    void imprimirTablaEnrutador();
    int costo(char name);


};

#endif // ROUTER_H
