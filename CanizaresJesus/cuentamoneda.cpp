#include <iostream>
using namespace std;
int main ()
{
	float IJCP_x,IJCP_s=0,IJCP_s1=0,IJCP_s5=0;
	int IJCP_i=0,IJCP_l,IJCP_i1=0,IJCP_i5=0;
	cout<<"Ingrese l: ";cin>>IJCP_l;
	do{

	cout<<"Ingrese x: ";cin>>IJCP_x;
	IJCP_i=IJCP_i+1;
	IJCP_s=IJCP_s+IJCP_x;
	if(IJCP_x==1){
		IJCP_i1=IJCP_i1+1;
		IJCP_s1=IJCP_s1+IJCP_x;
	}else{

		IJCP_i5=IJCP_i5+1;
		IJCP_s5=IJCP_s5+IJCP_x;
	}

	}while(IJCP_i<IJCP_l);
	cout<<"La cantidad de monedas es: "<<IJCP_i<<endl;
	cout<<"El valor es: "<<IJCP_s<<endl;


	cout<<"La cantidad de monedas de 1$ es: "<<IJCP_i1<<endl;
	cout<<"El valor es: "<<IJCP_s1<<endl;

	cout<<"La cantidad de monedas de 50ctvs es: "<<IJCP_i5<<endl;
	cout<<"La cantidad de moneda es: "<<IJCP_s5<<endl;
	return 0;
}
