#include <stdio.h>
#include "iostream"
using namespace std;

int main ()
{
	float Altura,Base;
	float SUPERFICIE, PERIMETRO;
	cout << "Hola! Este programa 1.10 Calcula la superficie y el perimetro de un rectangulo" << "\n";
	cout << "Por favor ingrese el valor de la Base:  " << "\n";
	cin >> Base;
	cout << "Por favor ingrese el valor de Altura:  " << "\n";
	cin >> Altura;
	SUPERFICIE=Base*Altura;
	PERIMETRO=2*(Base+Altura);
	printf ("\n La Superficie del rectangulo es %5.2f \n", SUPERFICIE);
	printf ("\n El perimetro del rectangulo es %5.2f \n", PERIMETRO);
	return 0;
}
