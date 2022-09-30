#include <iostream>
#include <cstdlib> // srand()
#include <ctime> // time()

using namespace std;

void llenarArreglo(int[], int);
void imprimirArreglo(int[], int);

int main()
{
    //Se inicializan las variables
    int numeroAleatorio = 0;
    int aLen = 10;
    int arreglo[aLen] = {0};

    srand(time(NULL)); //Utiliza de semilla lo generado por time()

    llenarArreglo(arreglo, aLen); //Llamada a la funcion

    cout << "Arreglo de " << aLen << endl;
    imprimirArreglo(arreglo, aLen); //Llamada a la funcion

    return 0;
}

//Implementacion de funciones
void llenarArreglo(int pArreglo[], int pLen){
    for (int contador=0; contador < pLen; contador++){
        pArreglo[contador] = 1 + rand() % 50;
    }
}

void imprimirArreglo(int pArreglo[], int pLen){
    for (int contador=0; contador < pLen; contador++){
        cout << pArreglo[contador] << endl;
    }
}
