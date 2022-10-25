#include <iostream>
using namespace std;
int main ()
{
	int IJCP_aa,IJCP_ma,IJCP_da,IJCP_an,IJCP_mn,IJCP_dn,IJCP_a,IJCP_m,IJCP_d;
	cout<<"Ingrese la fecha actual Año-Mes-Dia :";cin>>IJCP_aa>>IJCP_ma>>IJCP_da;
	cout<<"Ingrese la fecha de nacimiento Año-Mes-Dia : ";cin>>IJCP_an>>IJCP_mn>>IJCP_dn;

      	if(IJCP_da>IJCP_dn){

		IJCP_d=IJCP_da-IJCP_dn;

	}else{
		IJCP_da=IJCP_da+30;
		IJCP_ma=IJCP_ma-1;
		IJCP_d=IJCP_da-IJCP_dn;
	}

      	if(IJCP_ma>IJCP_mn){
	
		IJCP_m=IJCP_ma-IJCP_mn;

	}else{

		IJCP_ma=IJCP_ma+12;
		IJCP_aa=IJCP_aa-1;
		IJCP_m=IJCP_ma-IJCP_mn;
	}
                IJCP_a=IJCP_aa-IJCP_an;

	cout<<"Usted tiene "<<IJCP_a<<" años, "<<IJCP_m<<" meses,"<<IJCP_d<<" dias"<<endl;
	return 0;
	
}
