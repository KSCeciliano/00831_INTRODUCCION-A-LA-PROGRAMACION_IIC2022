#include <iostream>
#include <cstdlib> // srand()
#include <ctime> // time()

using namespace std;

int main()
{
    //Se inicializan las variables
    int numeroAleatorio = 0;
    int arreglo[10] = {0};

    srand(time(NULL)); //Utiliza de semilla lo generado por time()

    for (int contador=0; contador < 10; contador++){
        arreglo[contador] = 1 + rand() % 50;
    }

    for (int contador=0; contador < 10; contador++){
        cout << arreglo[contador] << endl;
    }

    return 0;
}
