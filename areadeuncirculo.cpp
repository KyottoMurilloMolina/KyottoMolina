//programa: areadeuncirculo.cpp
//fecha: 24-11-2023
//autor: Murillo Molina Kyotto
#include<iostream>
using namespace std;
#define pi 3.1416
int main()
{
	float a,r; 
	cout<<"ingrese radio";
	cin>>r;
	a=pi*r*r;
	cout<<"area="<<a<<endl;
	return 0;
}
