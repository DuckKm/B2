#include <iostream>
using namespace std;
int main () 
{
	float JXCA_imc,JXCA_peso,JXCA_altura;
	cout<<"Ingrese el peso (kg): ";cin>>JXCA_peso;
	cout<<"Ingrese la altura (metros): ";cin>>JXCA_altura;
	JXCA_imc=JXCA_peso/(JXCA_altura*JXCA_altura);
	if(JXCA_imc<18.5){
		cout<<"Usted tiene bajo peso"<<endl;
	}
	if(JXCA_imc>=18.5 && JXCA_imc<24.9){
		cout<<"Usted tiene peso normal"<<endl;
	}

	if(JXCA_imc>=25 && JXCA_imc<26.9){
		cout<<"Usted tiene sobrepeso grado I"<<endl;
	}

	if(JXCA_imc>=27 && JXCA_imc<29.9){
		cout<<"Usted tiene sobrepeso grado II"<<endl;
	}

	if(JXCA_imc>=30 && JXCA_imc<34.9){
		cout<<"Usted tiene obesidad tipo I"<<endl;
	}

	if(JXCA_imc>=35 && JXCA_imc<39.9){
		cout<<"Usted tiene obesidad tipo II"<<endl;
	}

	if(JXCA_imc>=40 && JXCA_imc<49.9){
		cout<<"Usted tiene obesidad tipo III (mórbida)"<<endl;
	}

	if(JXCA_imc>=50){
		cout<<"Usted tiene obesidad tipo IV (extrema)"<<endl;
	}
	return 0;
}
