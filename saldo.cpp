//titulo del programa: resta y comparacion
//monbre del programa: saldo.cpp
//autor: Kyotto Murillo Molina
//fecha: 2023-09-11
//descripcion: resta dos numeros y prrsentq el saldo
#include<iostream>
using namespace std;
int main()
{
	float a, b, c;
	cin>>a>>b;
	c=a-b;
	if(c<0)
	{
		cout<<"negativa";
	}else{
		cout<<"positiva";
	}
	return (0);
}
