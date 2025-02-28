#include "iostream"
#include "string"

using namespace std;
int main()
{
	float PRECIOPRODUCTO,DEVOLUCION;
	float PAGO;
	cout<<" Escribe el costo del articulo:  "<<"\n";
	cin>> PRECIOPRODUCTO;
	cout<<"Escribe cuanto fue el pago del articulo:  "<<"\n";
	cin>>PAGO;
	DEVOLUCION=PAGO-PRECIOPRODUCTO;
	cout<<"El cambio del cliente es  "<<DEVOLUCION;
	return 0;
}
