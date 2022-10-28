#include <iostream>
using namespace std;
int main ()
{
	float JXCA_x,JXCA_s=0,JXCA_vb,JXCA_piva=12,JXCA_viva,JXCA_pdesc=10,JXCA_vdesc,JXCA_vn;
	int JXCA_i=0,JXCA_l;
	cout<<"Ingrese l: ";cin>>JXCA_l;
	do{
		cout<<"Ingrese x: ";cin>>JXCA_x;
		JXCA_i=JXCA_i+1;
		JXCA_s=JXCA_s+JXCA_x;
	}while(JXCA_i<JXCA_l);
	JXCA_vb=JXCA_s;
	JXCA_viva=JXCA_vb*JXCA_piva/100;
	JXCA_vdesc=JXCA_vb*JXCA_pdesc/100;
	JXCA_vn=JXCA_vb+JXCA_viva-JXCA_vdesc;
	cout<<"El valor a pagar es de: "<<JXCA_vn<<endl;
	return 0;
}
