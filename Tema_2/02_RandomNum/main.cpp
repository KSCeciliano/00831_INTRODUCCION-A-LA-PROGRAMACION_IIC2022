#include <iostream>
#include <cstdlib> // srand()
#include <ctime> // time()

using namespace std;

int main()
{
    int numeroAleatorio = 0;

    srand(time(NULL)); //Utiliza de semilla lo generado por time()

    numeroAleatorio = 1 + rand() % 10;

    cout << numeroAleatorio << endl;

    return 0;
}
