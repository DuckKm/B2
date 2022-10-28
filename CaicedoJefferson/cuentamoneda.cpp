#include <iostream>
using namespace std;
int main ()
{
	float JXCA_x,JXCA_s=0,JXCA_s1=0,JXCA_s5=0;
	int JXCA_i=0,JXCA_l,JXCA_i1=0,JXCA_i5=0;
	cout<<"Ingrese l: ";cin>>JXCA_l;
	do{

	cout<<"Ingrese x: ";cin>>JXCA_x;
	JXCA_i=JXCA_i+1;
	JXCA_s=JXCA_s+JXCA_x;
	if(JXCA_x==1){
		JXCA_i1=JXCA_i1+1;
		JXCA_s1=JXCA_s1+JXCA_x;
	}else{

		JXCA_i5=JXCA_i5+1;
		JXCA_s5=JXCA_s5+JXCA_x;
	}

	}while(JXCA_i<JXCA_l);
	cout<<"La cantidad de monedas es: "<<JXCA_i<<endl;
	cout<<"El valor es: "<<JXCA_s<<endl;


	cout<<"La cantidad de monedas de 1$ es: "<<JXCA_i1<<endl;
	cout<<"El valor es: "<<JXCA_s1<<endl;

	cout<<"La cantidad de monedas de 50ctvs es: "<<JXCA_i5<<endl;
	cout<<"La cantidad de moneda es: "<<JXCA_s5<<endl;
	return 0;

}
