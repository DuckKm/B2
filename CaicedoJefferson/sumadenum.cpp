#include <iostream>
using namespace std;
int main() 
{
	float JXCA_x,JXCA_s=0.0;
	int JXCA_i=0,JXCA_l;
	cout<<"Ingrese el valor de l: ";cin>>JXCA_l;
	do{
		cout<<"Ingrese el valor de x: ";cin>>JXCA_x;
		JXCA_i=JXCA_i+1;
		JXCA_s=JXCA_s+JXCA_x;

	}while(JXCA_i<JXCA_l);
	cout<<"La suma de los numeros es: "<<JXCA_s<<endl;
	return 0;
}
