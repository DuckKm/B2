#include <iostream>
using namespace std;
int main () 
{
	float IJCP_imc,IJCP_peso,IJCP_altura;
	cout<<"Ingrese el peso (kg): ";cin>>IJCP_peso;
	cout<<"Ingrese la altura (metros): ";cin>>IJCP_altura;
	IJCP_imc=IJCP_peso/(IJCP_altura*IJCP_altura);
	if(IJCP_imc<18.5){
		cout<<"Usted tiene bajo peso"<<endl;
	}
	if(IJCP_imc>=18.5 && IJCP_imc<24.9){
		cout<<"Usted tiene peso normal"<<endl;
	}

	if(IJCP_imc>=25 && IJCP_imc<26.9){
		cout<<"Usted tiene sobrepeso grado I"<<endl;
	}

	if(IJCP_imc>=27 && IJCP_imc<29.9){
		cout<<"Usted tiene sobrepeso grado II"<<endl;
	}

	if(IJCP_imc>=30 && IJCP_imc<34.9){
		cout<<"Usted tiene obesidad tipo I"<<endl;
	}

	if(IJCP_imc>=35 && IJCP_imc<39.9){
		cout<<"Usted tiene obesidad tipo II"<<endl;
	}

	if(IJCP_imc>=40 && IJCP_imc<49.9){
		cout<<"Usted tiene obesidad tipo III (mórbida)"<<endl;
	}

	if(IJCP_imc>=50){
		cout<<"Usted tiene obesidad tipo IV (extrema)"<<endl;
	}
	return 0;
}
