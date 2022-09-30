#include <iostream>

using namespace std;

int main()
{
    //Se inicializa la variable
    int opcion=0;

    //Se imprimen las opciones del menu
    cout << "--------Calculator3000--------" << endl;
    cout << "[1] Suma" << endl;
    cout << "[2] Resta" << endl;
    cout << "[3] Multiplicacion" << endl;
    cout << "[4] Division" << endl;

    cout << "\nIngrese una opcion: ";
    cin >> opcion; //El input se almacena en la variable opcion

    //Estructura de seleccion: Switch
    switch (opcion){
        case 1: //If (opcion==1){LO QUE ESTA DENTRO DEL CASE}
            cout << "Se eligio suma";
            break; //Se termina el switch
        case 2:
            cout << "Se eligio resta";
            break;
        case 3:
            cout << "Se eligio multiplicacion";
            break;
        case 4:
            cout << "Se eligio division";
            break;
        default: //Si no es ningun caso pasa por default. Funciona como un else
            cout << "Opcion no valida";
            break;
    }

    return 0;
}
