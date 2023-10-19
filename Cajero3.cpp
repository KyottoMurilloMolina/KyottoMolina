//programa 5: Cajero Automatico
//autor: Kyotto Murillo
//fecha: 12-10-2023
//archivo: CajeroAutomatico.cpp
#include<iostream>
using namespace std;
int main()
{
	int c1, c2, c3, c01=22,c02=50, c03=30;
	float valor, saldodisponible=10000;
	cout<<"Ingrese c1 c2 c3: "; cin>>c1>>c2>>c3;
if(c1==c01){
	if(c2==c02){
		if(c3==c03){
			cout<<"Ingrese el valor a retirar: "; cin>>valor;
			saldodisponible=saldodisponible-valor;
		}else{
			cout<<"contraseña c3 invalido"<<endl;
		}
	}else{
		cout<<"contraseña c2 incorrecto"<<endl;
	}
}else{
	cout<<"contraseña c1 incorrecto"<<endl;
}
	return(0);
}
