//programa: Sumade2nuneros.cpp
//fecha: 24-11-2023
//autor: Murillo Molina Kyotto
#include<iostream>
using namespace std;
float a,b,c;
int ingreso()
{
	cout<<"ingrese a:";
	cin>>a;
	cout<<"ingrese b:";
	cin>>b;
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
