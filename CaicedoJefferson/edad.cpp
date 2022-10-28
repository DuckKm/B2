#include <iostream>
using namespace std;
int main ()
{
	int JXCA_aa,JXCA_ma,JXCA_da,JXCA_an,JXCA_mn,JXCA_dn,JXCA_a,JXCA_m,JXCA_d;
	cout<<"Ingrese la fecha actual Año-Mes-Dia :";cin>>JXCA_aa>>JXCA_ma>>JXCA_da;
	cout<<"Ingrese la fecha de nacimiento Año-Mes-Dia : ";cin>>JXCA_an>>JXCA_mn>>JXCA_dn;

      	if(JXCA_da>JXCA_dn){

		JXCA_d=JXCA_da-JXCA_dn;

	}else{
		JXCA_da=JXCA_da+30;
		JXCA_ma=JXCA_ma-1;
		JXCA_d=JXCA_da-JXCA_dn;
	}

      	if(JXCA_ma>JXCA_mn){
	
		JXCA_m=JXCA_ma-JXCA_mn;

	}else{

		JXCA_ma=JXCA_ma+12;
		JXCA_aa=JXCA_aa-1;
		JXCA_m=JXCA_ma-JXCA_mn;
	}
                JXCA_a=JXCA_aa-JXCA_an;

	cout<<"Usted tiene "<<JXCA_a<<" años, "<<JXCA_m<<" meses,"<<JXCA_d<<" dias"<<endl;
	return 0;
	
}
