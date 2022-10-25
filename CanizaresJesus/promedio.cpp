#include <iostream>
using namespace std;
int main ()
{
	float IJCP_x,IJCP_pm=0;
	int IJCP_i=0,IJCP_l;
	cout<<"Ingrese l: ";cin>>IJCP_l;
	do{
	
	cout<<"Ingrese x: ";cin>>IJCP_x;
	IJCP_i=IJCP_i+1;
	if(IJCP_x>IJCP_pm){
		IJCP_pm=IJCP_x;
	}
	
	}while(IJCP_i<IJCP_l);
	cout<<"El promedio maximo del curso es: "<<IJCP_pm<<endl;
	return 0;
}
