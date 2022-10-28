#include <iostream>
using namespace std;
int main ()
{
	float JXCA_x,JXCA_pm=0;
	int JXCA_i=0,JXCA_l;
	cout<<"Ingrese l: ";cin>>JXCA_l;
	do{
	
	cout<<"Ingrese x: ";cin>>JXCA_x;
	JXCA_i=JXCA_i+1;
	if(JXCA_x>JXCA_pm){
		JXCA_pm=JXCA_x;
	}
	
	}while(JXCA_i<JXCA_l);
	cout<<"El promedio maximo del curso es: "<<JXCA_pm<<endl;
	return 0;
}
