#include <iostream>
using namespace std;
int main ()
{
	float JXCA_x,JXCA_s=0;
	int JXCA_i=0,JXCA_l;
	cout<<"Ingrese cantidad de egresos  ";cin>>JXCA_l;
	cout<<"Ingrese saldo inicial : ";cin>>JXCA_s;
	
	do{
	cout<<"Ingrese egreso(x): ";cin>>JXCA_x;
	JXCA_i=JXCA_i+1;
	JXCA_s=JXCA_s-JXCA_x;

	}while(JXCA_i<JXCA_l);
	cout<<"El saldo final es: "<<JXCA_s<<endl;
	return 0;
}
