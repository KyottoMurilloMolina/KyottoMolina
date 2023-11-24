//programa: numeroNP0.cpp
//fecha: 24-11-2023
//autor: Murillo Molina Kyotto
#include <iostream>
using namespace std;
int main() 
{
	float numero;
    cout << "Ingrese un número: ";
    cin >> numero;
    if (numero > 0) {
	    cout << "El número es positivo" <<endl;
    } else if (numero < 0) {
	    cout << "El número es negativo" <<endl;
    } else {
	    cout << "El número es cero" <<endl;
    }

    return 0;
}

