#include "iostream"
using namespace std;
int main()
{
	float RADIO, ALTURA, VOLUMEN, AREA;
	const float PI=3.141592;
	cout<< "Escribe la medida del radio  "<<"\n";
	cin>>RADIO;
	cout<<"Escribe la medida de la altura  "<<"\n";
	cin>>ALTURA;
	
	VOLUMEN=PI*(RADIO*RADIO)*ALTURA;
	AREA=2*PI*RADIO*ALTURA;
	cout<<"El volumen del cilindro es de  "<<VOLUMEN<<"\n";
	cout<<"El area del cilindro es de  "<<AREA<<"\n";
	return 0;
}
