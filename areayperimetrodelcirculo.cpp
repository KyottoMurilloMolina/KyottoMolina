// programa: halar el area y perimetro
// archivo: areayperimetrodelcirculo.cpp
// autor: Kyotto Murillo
// Fecha: 2023-09-20
/* descripcion: un programa que peemita sacar el area y perimetro de un circulo
 */
#include<iostream>
using namespace std;
#define pi 3.1416
int main()
{
        float a,r,p,Vc;
	cout<<"el valor del lado de un cuadrado: ";
	cin>>Vc;
	cout<<"ingrese el radio :";
        cin>>r;
        a=pi*r*r;
        cout<<"El area del circulo es :";<<a<<endl;
}return(0);
	{
	p=2*pi*r*r;
	cout<<"el perimetro de un circulo es: ";<<p<<endl;
	return (0);
}
