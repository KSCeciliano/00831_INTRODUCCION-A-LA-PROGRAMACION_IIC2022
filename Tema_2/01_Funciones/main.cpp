#include <iostream>

using namespace std;

//Definicion de prototipo
int funcionSumatoria(int);

int main()
{
    //Invocacion de la funcion

    cout << "La sumatoria de 5 es: " << funcionSumatoria(5) << endl;
    cout << "La sumatoria de 7 es: " << funcionSumatoria(5) << endl;
    cout << "La sumatoria de 10 es: " << funcionSumatoria(5) << endl;

    for (int contadorNumero = 1; contadorNumero <=20; contadorNumero++){
        cout << "La sumatoria de " << contadorNumero << " es: " <<funcionSumatoria(contadorNumero) << endl;
    }

    return 0;
}

//Implementacion de la funcion
int funcionSumatoria(int pNumero){
    int contador =1;
    int sumatoria=0;

    while(contador<= pNumero){
        sumatoria = sumatoria + contador;
        contador++;
    }

    return sumatoria;
}
