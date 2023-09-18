//Programa: Suma.cpp
//Fecha: 14-09-2023
//Autor: Kyotto Murillo
//Descripcion: Suma de dos numeros
#include<iostream>
using namespace std;
float a,b,c;
int ingreso()
{
	cout<<"ingrese a :" ; cin>>a;
	cout<<"ingrese b :" ; cin>>b;
	return(0);
	}
int salida()
{
	cout<<"la suma de"<<a<<"+"<<b<<"="<<c<<endl;
	return(0);
}
int main()
{
	ingreso();
	c=a+b;
	salida();
	return(0);
}
