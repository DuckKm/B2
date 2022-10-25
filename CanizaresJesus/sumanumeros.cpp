#include <iostream>
using namespace std;
int main() 
{
	float IJCP_x,IJCP_s=0.0;
	int IJCP_i=0,IJCP_l;
	cout<<"Ingrese el valor de l: ";cin>>IJCP_l;
	do{
		cout<<"Ingrese el valor de x: ";cin>>IJCP_x;
		IJCP_i=IJCP_i+1;
		IJCP_s=IJCP_s+IJCP_x;

	}while(IJCP_i<IJCP_l);
	cout<<"La suma de los numeros es: "<<IJCP_s<<endl;
	return 0;
}
