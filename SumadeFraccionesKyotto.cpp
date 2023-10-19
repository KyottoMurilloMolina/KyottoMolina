//programa: suma de fracciones 
//archivo: SumadeFraccionesKyotto.cpp
//autor: Kyotto Murillo
//fecha de creacion: 2023-09-24
/*descripcion: crear un programa que haga la suma de 3 fracciones
 */
#include<iostream>
using namespace std;
int main()
{
	float n1, d1, n2, d2, n3, d3, n4, d4;
	cout<<"primera fraccion n1 d1: "; cin>>n1>>d1;
	cout<<"segunda fraccion n2 d2: "; cin>>n2>>d2;
	cout<<"tercera fraccion n3 d3: "; cin>>n3>>d3;
	d4= d1*d2*d3;
	n4= n1/d1+n2/d2+n3/d3;
	cout<<"el resultado es: "<<n4<<"/"<<d4<<endl;
	return(0);
}
