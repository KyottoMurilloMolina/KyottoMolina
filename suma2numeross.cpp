//programa: suma 2 numeros 
//autor: Murillo Kyotto
//fecha: 19-10-2023
#include<iostream>
using namespace std;
int main()
{
	float A, B, C;
	float x[3];
	cout<<"ingrese A B: ";cin>>A>>B;
	cout<<"ingrese X: ";cin>>x[0]>>x[1];
	C=A+B;
	x[2]=x[0]+x[1];
	cout<<A<<"+"<<B<<"="<<C<<endl;
	cout<<x[0]<<"+"<<x[1]<<"="<<x[2]<<endl;
	return(0);
}
