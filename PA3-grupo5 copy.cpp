

#include <iostream>
#include <stdlib.h>
#include <ctype.h>
#include <string>
#include "LecturaDatos.h"
#include "ConvierteDatos.h"
using namespace std;

void Opciones();
void RegistroAreas(int n);
void Reporte();
void Salir();


int cantquej1=0, cantFtip4=0, canttip2M=0;
int tipoqueja = 0, tipocliente;
float totaltres=0, precio3=0, Promquej2=0;
float  acum=0, total=0, acumtipo2=0, pagotipo2=0, contadortipo2=0;
float Precio(int producto, int tipo);
char res;

int main()
{
	setlocale(LC_CTYPE,"Spanish");
	Opciones();
	return 0;
}

void Opciones()
{
	int opc;
	
	setlocale(LC_CTYPE,"Spanish");

	do
	{
		cout<<"+-------------------------------------+\n";
		cout<<"|             Menu de Opciones        |\n";     
		cout<<"+-------------------------------------+\n";
		cout<<"[1]. REGISTRAR QUEJAS \n";
		cout<<"[2]. REPORTE DE QUEJAS\n";
		cout<<"[3]. SALIR \n";
		cout<<"-------------------------------------";
		cout<<"\nSeleccione una opcion: ";
		cin>>opc;
		if (opc<1 || opc>3)
			cout <<"\nError... digite una opcion valida!   \n"<<endl;
		
		switch (opc)
		{
		case 1:

			RegistroAreas(opc);
			break;

		case 2:
			Reporte();
			break;
		
		case 3:
			Salir();
			break;
		}
	}while(opc!=3);
	cout<<"+-------------------------------------+\n";
	cout<<"|            SESION FINALIZADA        |\n";
	cout<<"+-------------------------------------+\n";
}

float xPrecio(int tipo)
{
	switch (tipo)
	{
		case 1:
		 return 25;
		 break;
		case 2:
		 return 15;
		 break;
		case 3:
		 return 20;
		 break;
		case 4:
		 return 14;
		 break;
	}
}

void Reporte()
{
	cout<<"\n---------------------------- REPORTES ---------------------------\n";
	cout<<"Nro de quejas registradas Tipo de queja 1                       : "<<cantquej1<<endl;
	cout<<"Nro de quejas registradas de mujeres por tipo de producto 4	: "<<cantFtip4<<endl;
	cout<<"Nro de quejas registradas de Tipo de Clientes 2 & Gnro 'M' 	: "<<canttip2M<<endl;
	cout<<"Monto total de Importe Neto                                     : "<<acum<<endl; 
	cout<<"Monto total de Importe Neto de Tipo de Clte 1 & Tipo de pdto 3  : "<<totaltres<<endl;
	cout<<"Prom. Importe Neto de Tipo de Quejas 2                          : " <<Promquej2<< endl;
	cout << "---------------------------------------------------------------" << endl;
	
}

void RegistroAreas(int n)
{
	string name;
	char genero, cantquej;
	int cantidad, tipoprod;
	float montopago, montoIgv, igv = 0.18, montotal, brutototal;

	
	cout << "\nIngrese nombre:  ";
	name = leedatoc();
	cin>> name;


	// TIpo de cliente

	do
	{
		cout << "\nIngrese tipo de cliente (1. Empresa   2. Distribuidor   3. Directo) : ";
		tipocliente = leedatoePositivos();
		if (tipocliente <= 0 || tipocliente > 3)
			cout << "Error, Ingrese una opcion valida";
	} while (tipocliente <= 0 || tipocliente > 3);

	// genero
	do
	{
		cout << "\n====Ingrese genero====  :" << endl;
		cout << "M. Masculino" << endl;
		cout << "F. Femenino" << endl;
		cout << "Ingrese opcion  : " ;
		genero = leedatoc();
		genero = toupper(genero);
		if (genero != 'M' && genero != 'F')
			cout << "ERROR. ingrese opcion valida." << endl;
	} while (genero != 'M' && genero != 'F');

	// TIPO DE PRODUCTO
	do
	{
		cout << "\n\n======Tipo de Producto====== " << endl;
		cout << "1. Pintura Látex" << endl;
		cout << "2. Pintura Esmalte" << endl;
		cout << "3. Pintura Imprimación" << endl;
		cout << "4. Pintura Mineralseca  :" << endl;
		cout << "Ingrese opcion	:	 " ;

		tipoprod = leedatoePositivos(); // 4
		if (tipoprod != 1 and tipoprod != 2 and tipoprod != 3 and tipoprod != 4)
			cout << "Error ingrese el codigo otra vez!!!\n";
	} while (tipoprod != 1 and tipoprod != 2 and tipoprod != 3 and tipoprod != 4);

	
	// cantidad de quejas
	do
	{ cout<<"\nIngrese la cantidad quejas: ";
		cantquej=leedatoePositivos();
		if(cantquej<0 || cantquej>3)
			cout<<"Error, ingreso dato errado"<<endl;
	} while (cantquej<0 || cantquej>3);

	for(int i=1;i<=cantquej;i++)
	{
		cout<<"\n\n:::::REGISTRO #"<<i<<":::::\n";
		
		// TIPO DE QUEJA
		do
		{
			cout << " ======MOTIVO de QUEJA====== " << endl;
			cout << "1. Pintura seca  " << endl;
			cout << "2. Mal servicio " << endl;
			cout << "3. Cobro errado " << endl;
			cout << "4. Cambio de pintura : " ;

			tipoqueja = leedatoePositivos(); // 4
			if (tipoqueja != 1 and tipoqueja != 2 and tipoqueja != 3 and tipoqueja != 4)
				cout << "Error ingrese el codigo otra vez!!!\n";
		} while (tipoqueja != 1 and tipoqueja != 2 and tipoqueja != 3 and tipoqueja != 4);


		brutototal= xPrecio(tipoqueja);
		montoIgv = igv * brutototal;
		montotal = brutototal + montoIgv;
		acum = montotal + acum;
		Promquej2 = acumtipo2 / contadortipo2;

		cout << "\n\nTota                : " << brutototal << endl;
		cout << "IGV                  : " << montoIgv << endl;
		cout << "Monto Total a pagar  : " << montotal << endl;

		// Acumulador x tipo queja
		switch(tipoqueja)
		{
		case 1:
			cantquej1++;
			break;
		case 2:
			acumtipo2 = acumtipo2 + montotal;
			contadortipo2++;
		case 3:
			break;
		case 4:
			break;
			
		}

	   // Acumulador x tipo cliente
	   switch (tipocliente)
		{
		case 1:
		if (tipoprod == 3)
		{
			totaltres = totaltres + montotal;
		}

		break;
		case 2:
		if (genero == 'M')
		{
			canttip2M++;
		}
		break;
		case 3:

		break;
		}

		// Acumulador x tipo producto
		switch (tipoprod)
		{
		case 1:

		break;
		case 2:

		break;
		case 3:

		break;
		case 4:
		if(genero=='F')
		{
			cantFtip4++;
		}
		break;
		}
	}	

}

void Salir()

	{
		do
		{
		cout << "\n\tEstas seguro que desea salir (s/n)?: " << endl;
		res = leedatoc();
		res = toupper(res);
		if (res != 'S' )
			Opciones();
		} while (res != 'S' );
		
		
	}
