#include "router.h"

bool router::agregarEnrutador(char nom, int cost) //AÑADIR NUEVO ENRUTADOR
{
    bool ban=false;
    if(ruter.find(nom)==ruter.end()){
        ruter.insert(pair<char,int>(nom,cost));
        ban=true;
    }
    return ban;
}

bool router::eliminarEnrutador(char nom) //ELIMINAR ENRUTADORr
{
    bool ban=false;
    if(ruter.find(nom)!=ruter.end()){
        ruter.erase(nom);
        ban=true;
    }
    return ban;
}

void router::imprimirTablaEnrutador() //TABLA DE ENRUTAMIENTO
{
    cout << "\t";
    for(itR=ruter.begin(); itR!=ruter.end(); itR++){
        cout << itR->first << "\t";
    }
    cout << endl;
    cout <<"\t";
    for(itR=ruter.begin(); itR!=ruter.end(); itR++){
        cout << itR->second << "\t";
    }
    cout << endl;
}

int router::costo(char name) //COSTO
{
    return ruter[name];
}

bool router::modificarEnrutador(char nom, int cost) //MODIFICAR COSTO DE ENRUTADOR, EL ENLACE
{
    bool ban=false;
    if(ruter.find(nom)!=ruter.end()){
        ruter[nom]=cost;
        ban=true;
    }
    return ban;
}
