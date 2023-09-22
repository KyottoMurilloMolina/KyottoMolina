// programa: hallar velocidad
// archivo: DistanciarecorridaMurilloKyotto.cpp
// autor: Kyotto Murillo
// fecha: 2023-09-20
/* descripcion: este programa nos permite hallar la velocidad de un objeto en metros/segundos
 */
#include<iostream>
using namespace std;
int main()
{
	float V, D, T;
	cout<<"ingrese la distancia en metros: "; cin>>D;
	cout<<"ingrese el tiempo en segundos: "; cin>>T;
	V=D/T;
	cout<<"la velocidad en metros/segundos es:  "<<V<<endl;
	return(0);
}
