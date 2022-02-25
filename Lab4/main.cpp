#include <network.h>
network Netw;
void menuprincipal(void);
void menuenrutador(void);
void menured(void);

int main()
{
    int opcion;
    bool repetir=true;

   do {


        menuprincipal();
        cin>>opcion;
        system("CLS");

        switch (opcion)

        {
            case 1: //CASO UNO-Menu Enrutador
                menuenrutador();

                break;


            case 2: //CASO DOS-Menu Red
                 menured();

                 break;


            case 3: //SALIR
                repetir=false;
                system("CLS");
                break;
            default:
                cout << "No se encontro la opcion ingresada. Digitela nuevamente" << endl;
                break;
        }
    }while (repetir);

}

void menuprincipal()
{       cout << "________________________" << endl;
        cout << "    MENU PRINCIPAL" << endl;
         cout << "1. Enrutador" << endl;
         cout << "2. Red" << endl;
         cout << "3. Salir" << endl;
         cout << "________________________" << endl;

         cout << "Ingrese la opcion a realizar: ";

}

void menuenrutador()
{
    int opcion;
    bool repetir=true;
    do {

        cout << "________________________" << endl;
        cout << "      MENU ENRUTADOR" << endl;
        cout << "1. Agregar enrutador" << endl;
        cout << "2. Eliminar enrutador" << endl;
        cout << "3. Imprimir la tabla de un enrutador" << endl;
        cout << "4. Mostrar Enrutadores existentes" << endl;
        cout << "5. Salir" << endl;
        cout << "________________________" << endl;

        cout << "Digite la opcion a realizar: ";
        cin>>opcion;
        system("CLS");

        switch (opcion)
        {
            case 1:{ //AGREGAR ENRUTADOR
                char Nom;
                cout << "Ingrese el nombre del enrutador: ";
                cin >> Nom;
                Netw.agregarRuter(Nom);
                system("CLS");
                system("PAUSE");
                break;
            }
            case 2:{ //ELIMINAR ENRUTADOR
                char Nmb;
                cout << "Ingrese el nombre del enrutador: ";
                cin >> Nmb;
                Netw.eliminarRuter(Nmb);
                system("PAUSE");
                system("CLS");
                break;
            }
            case 3:{ //TABLA DE ENRUTAMIENTO
                char nom;
                cout << "Digite el nombre del enrutador: ";
                cin >> nom;
                Netw.imprimirRuter(nom);
                system("PAUSE");
                system("CLS");
                break;
            }
            case 4: //MOSTRAR ENRUTADORES
                Netw.mostrarEnrutadores();
                system("PAUSE");
                system("CLS");

                break;

            case 5: //SALIR
                repetir=false;

                system("CLS");
                break;

            default:
                cout << "La opcion que ingreso no esta disponible, vuelava a intentarlo" << endl;

                system("CLS");
                break;
        }
    }while (repetir);

}

void menured()
{
    int opcion;
    bool repetir=true;

    do
    {

        cout << "________________________" << endl;
        cout << "      MENU DE LA RED" << endl;
        cout << "1. Agregar enlace a la red" << endl;
        cout << "2. Eliminar enlace de la red" << endl;
        cout << "3. Matriz de Adyacencia" << endl;
        cout << "4. Leer Red" << endl;
        cout << "5. Red aleatoria" << endl;
        cout << "6. Camino mas corto" << endl;
        cout << "7. Mostrar enrutadores existentes" << endl;
        cout << "8. Salir" << endl;
        cout << "________________________" << endl;
        cout << "Ingrese la opcion: ";
        cin>>opcion;
        system("CLS");

        switch (opcion) {
            case 1:{ //AGREGAR UN ENLACE
                char nom1, nom2;
                int valor = 0;
                do{
                    cout << "Digite el nombre del primer enrutador: ";
                    cin >> nom1;
                    cout << "Digite el nombre del segundo enrutador: ";
                    cin >> nom2;
                    if(nom1 == nom2) cout << "No se puede modificar el costo del enlace de un mismo nodo\n Por favor digitelos nuevamente" << endl;
                }while(nom1==nom2);
                do{
                    cout << "Ingrese el costo del enlace: ";
                    cin >> valor;
                    if(valor < 0) cout << "El costo del enlace debe ser un numero entero positivo" << endl;
                }while(valor < 0);

                Netw.agregarEnlace(nom1,nom2,valor);

                system("PAUSE");
                system("CLS");

                break;
            }
            case 2:{ //ELIMINAR ENLACE
                char name1, name2;
                do{
                    cout << "Digite el nombre del primer enrutador: ";
                    cin >> name1;
                    cout << "Digite el nombre del segundo enrutador: ";
                    cin >> name2;
                    if(name1 == name2) cout << "No se puede modificar el costo del enlace de un mismo nodo\n Por favor digitelos nuevamente" << endl;
                }while(name1==name2);

                Netw.eliminarEnlace(name1, name2);

                system("PAUSE");
                system("CLS");
                break;
            }
            case 3:{ //MOSTRAR MATRIZ
                Netw.matrizadyacencia();
                system("PAUSE");
                system("CLS");


                break;
            }
            case 4: //LEER DESDE ARCHIVO
                Netw.leer();
                system("PAUSE");
                system("CLS");


                break;
            case 5: //GENERAR UNA RED ALEATORIA
                Netw.red_aleatoria();
                system("PAUSE");
                system("CLS");
                break;
            case 6:{ //CAMINO MAS CORTO
                char Org, Dest;
                cout << "Digite el enrutador de origen: ";
                cin >> Org;
                cout << "Digite el enrutador destino: ";
                cin >> Dest;
                Netw.buscar_camino(Org, Dest);
                system("PAUSE");
                system("CLS");

                break;
            }
            case 7: //MOSTRAR LOS ENRUTADORES EXISTENTES
                Netw.mostrarEnrutadores();
                system("PAUSE");
                system("CLS");


                break;
            case 8: //SALIR
                repetir=false;
                system("CLS");
                break;

            default:
                cout << "La opcion que ingreso no esta disponible, vuelava a intentarlo" << endl;
                system("CLS");
                break;

        }


    }while (repetir);

}
