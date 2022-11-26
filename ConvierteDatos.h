#include <iostream>
#include <stdlib.h>
#include <ctype.h>
#include <string>
using namespace std;
  
float leedatofPositivos()
{
	float dato;
	string cadIngreso;
	
	cin >> cadIngreso;

	if (isalpha(cadIngreso[0]))
	{
		dato = -5;
		cout << "Error. Es letra.\n";

	}
	else
	{
		dato = atof(cadIngreso.c_str());
		if(dato < 0)
			cout << "Error, debe ser un numero positivo.\n";
	}
	return dato;
}

int leedatoePositivos()
{
	int dato;
	string cadIngreso;
	
	cin >> cadIngreso;

	if (isalpha(cadIngreso[0]))
	{
		dato = -5;
		cout << "Error. Es letra.\n";

	}
	else
	{
		dato = atoi(cadIngreso.c_str());
		if(dato < 0)
			cout << "Error, debe ser un numero positivo.\n";
	}
	return dato;
}


