
#include <iostream>
using namespace std;
int main ()
{
	float IJCP_x,IJCP_s=0,IJCP_vb,IJCP_piva=12,IJCP_viva,IJCP_pdesc=10,IJCP_vdesc,IJCP_vn;
	int IJCP_i=0,IJCP_l;
	cout<<"Ingrese l: ";cin>>IJCP_l;
	do{
		cout<<"Ingrese x: ";cin>>IJCP_x;
		IJCP_i=IJCP_i+1;
		IJCP_s=IJCP_s+IJCP_x;
	}while(IJCP_i<IJCP_l);
	IJCP_vb=IJCP_s;
	IJCP_viva=IJCP_vb*IJCP_piva/100;
	IJCP_vdesc=IJCP_vb*IJCP_pdesc/100;
	IJCP_vn=IJCP_vb+IJCP_viva-IJCP_vdesc;
	cout<<"El valor a pagar es de: "<<IJCP_vn<<endl;
	return 0;
}
