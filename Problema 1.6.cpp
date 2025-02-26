#include "iostream"
using namespace std;
int main ()
{
	int DIAS;
	float SEGUNDOS;
	cout<< "Escribe el numero de dias para calcular los segundos  "<<"\n";
	cin>>DIAS;
	
	SEGUNDOS=DIAS*24*60*60;
	
	cout<<"En "<<DIAS<<"  dias, hay "<<SEGUNDOS<<" segundos"<<"\n";
	return 0;
}
