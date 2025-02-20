#include "iostream"
#include <stdio.h>
using namespace std; 

int main()
{
	int A,B;
	float RES;
	
	cout << "Hola! Este programa 1.7 Escribir el resultado de la expresion";
	
	cout << "Por favor ingrese el valor A:   " << "\n";
	
	cin >> A;
	
	cout << "Por favor ingrese el valor B:   " << "\n";
	
	cin >> B;
	
	RES=((A+B)*(A+B))/3.0;
	
	printf ("\n El resultado de la expresion es %5.4f \n", RES);
	cout << "EL RESULTADO DE LA EXPRESION ES   " << RES << "\n";
	
	return 0; 
}

