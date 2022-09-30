#include <iostream>

using namespace std;

//En este programa se verá el mismo ciclo utilizando diferentes estructuras de repetición

int main()
{
    //Se inicializan las variables
    int contador=0;
    int sumatoria=0;

    //Ciclo while, durante contador es menor o igual a 5
    while (contador<=5){
        sumatoria = sumatoria+contador;
        contador++; //Contador=Contador+1
        cout << sumatoria << endl; //Se imprime el resultado de sumatoria durante ese ciclo
    }


    //Se reinician las variables
    contador=0;
    sumatoria=0;

    //Ciclo do while, se evalua la condicion al final de cada ciclo, no al inicio como en el while
    do{
        sumatoria = sumatoria+contador;
        contador++; //Contador=Contador+1
        cout << sumatoria << endl; //Se imprime el resultado de sumatoria durante ese ciclo
    }while(contador<=5); //Condicion


    //Se reinician las variables
    //int contador=0; En el ciclo For no se necesita inicializar el contador antes
    sumatoria=0;

    //Ciclo for.   Se usa en arreglos
    for (int contador=0; contador <=5; contador++){ //(ini variable; Condicion; Al final de un ciclo)
        sumatoria = sumatoria+contador;
        cout << sumatoria << endl; //Se imprime el resultado de sumatoria durante ese ciclo
    }
}
