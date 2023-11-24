//programa: tabla de multiplicar
//fecha:24-11-2023
//autor: Murillo Molina Kyotto
#include<iostream>
using namespace std;
int main()
{
	int m, i=0;
	cout<<"ingrese m: "; 
	cin>>m;
	do{
		i=i+1;
		cout<<m<<"*"<<i<<"="<<m*i<<endl;
	}while(i<10);
	cout<<endl;
	return(0);
}
