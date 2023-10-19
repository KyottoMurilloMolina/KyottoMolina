#include<iostream>
using namespace std;
int main()
{
	int c11,c12,c13,c01,c02,c03;
	cout<<"Ingrese la contraseña c11 c12 c13";
	cin>>c11>>c12>>c13;
	if(c11==c01){
	if(c12==c02){
	if(c13==c03){
	cout<<"acceso correcto/n";
	}else{
		cout<<"la clave 3 fallo"<<endl;
	}
	}else{
		cout<<"la clave 2 fallo"<<endl;
	}
	}else{
		cout<<"la clave 1 fallo"<<endl;
	}
         return(0);
	}


