#include "iostream"
#include <stdio.h>
using namespace std;
int main ()
{
	int NUM,CUA,CUB;
	cout << "Hola! Este programa 1.9 Calcula el cuadrado y el cubo de un numero entero positivo" << "\n";
	cout << "Por favor ingrese el valorde NUMERO:   " << "\n";
	cin >> NUM;
	CUA=NUM*NUM;
	CUB=NUM*CUA;
	cout << "El cuadrado de " <<NUM<<"  es:  "<<CUA<<" y el cubo es:  "<<CUB<<endl;
	return 0;
}
