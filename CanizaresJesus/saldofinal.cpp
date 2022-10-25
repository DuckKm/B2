#include <iostream>
using namespace std;
int main ()
{
	float IJCP_x,IJCP_s=0;
	int IJCP_i=0,IJCP_l;
	cout<<"Ingrese cantidad de egresos  ";cin>>IJCP_l;
	cout<<"Ingrese saldo inicial : ";cin>>IJCP_s;
	
	do{
	cout<<"Ingrese egreso(x): ";cin>>IJCP_x;
	IJCP_i=IJCP_i+1;
	IJCP_s=IJCP_s-IJCP_x;

	}while(IJCP_i<IJCP_l);
	cout<<"El saldo final es: "<<IJCP_s<<endl;
	return 0;
}
