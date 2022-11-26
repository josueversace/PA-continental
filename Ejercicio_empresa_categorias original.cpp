/*Desarrollar un sistema que permita el registro y reporte de datos.
Se debe ingresar en una empresa 3 areas, cada área tiene n empleados, 

-	Edad (0-130 años)
-	Estado Civil C,S,V,D
-	3 Bonificaciones (validar ingreso de cantidades positivas)

Reportear:
a.	La cantidad de personas Solteras
b.	La cantidad de personas Casadas
c.	La cantidad de personas mayores de 50 años  
d.	El monto de las bonificaciones por empleado
e.	La cantidad de areas con bonificaciones > S/1000.*/

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


string cadenaIngresada;
int ps=0, pv=0,pd=0, pc=0, pm50=0, pab=0, edad=0;
float bonifica=0, mboni=0, a1=0,a2=0,a3=0;
float  mbe=0;

int main()
{
	setlocale(LC_CTYPE,"Spanish");
	Opciones();
	return 0;
}



void Opciones()
{
	int opc,vent;
	
	setlocale(LC_CTYPE,"Spanish");
	do
	{
		cout<<"\n         Menú de Opciones \n";
		cout<<"-------------------------------------\n";
		cout<<"1. Registro de Areas \n";
		cout<<"2. Reportes\n";
		cout<<"3. Salir \n";
		cout<<"-------------------------------------";
		cout<<"\nSeleccione una opción: ";
		cin>>opc;
		switch (opc)
		{
		case 1:
			do 
			{
				cout<<"Ingrese la cantidad de ventas: ";
				vent=leedatoePositivos(); 
				if(vent<=0)
					  cout<<"Error, tiene que ser numero positivo\n";
			} while (vent<=0);
			if(vent>0)
				RegistroAreas(vent);
			break;
		case 2:
			Reporte();
			break;
	 
		}
	}while(opc!=3);
	cout<<"Hasta pronto...\n";
}


void Reporte()
{
	cout<<"\n----------------- Reportes -----------------------\n";
	cout<<"a.	La cantidad de personas Solteras: "<<ps<<"\n";
	cout<<"b.	La cantidad de personas Casadas: "<<pc<<"\n";
	cout<<"c.	La cantidad de personas mayores de 50 años: "<<pm50<<"\n";;
	cout<<"d.	El monto de las bonificaciones  por empleado: "<<mboni<<"\n"; 
	cout<<"e.	La cantidad de areas  con bonificaciones > S/1000 :  "<<a1+a2+a3<<"\n";
	cout<<" 	Area 1: "<< a1 <<"\n";
	cout<<" 	Area 2: "<< a2 <<"\n";
	cout<<" 	Area 3: "<< a3<<"\n";
	 
}
			
void RegistroAreas(int n)
{
	int area;
	char genero;
	
	for(int i=1;i<=n;i++)
	{
	
		float boni1=0,boni2=0,boni3=0, bonifica=0;
		cout<<"\n:::::REGISTRO #"<<i<<":::::\n";
		// INGRESO DE Area
		do
		{
			cout<<"-->Código de Area (1,2,3): ";
			 area=leedatoePositivos();                 //3
			if(area!=1 and area!=2 and area!=3)
				cout<<"Error ingrese el codigo otra vez!!!\n";
		}while(area!=1 and area!=2 and area!=3);
		
		
		// INGRESO DE Estado Civil
		do{
			cout << "Ingrese Estado Civil  :"<<endl;
			cout << "C. Casado" << endl;
			cout << "S. Soltero" << endl;
			cout << "D. Divorciado" << endl;
			cout << "V. Viudo" << endl;
			genero = leedatoc();
			genero=toupper(genero);
			if (genero != 'C' && genero!='S' && genero != 'V' && genero!='D')
				cout<<"ERROR. vuelva a Ingresar."<<endl;
		}while(genero != 'C' && genero!='S' && genero != 'V' && genero!='D');  
				
		// INGRESO DE Edad
		do 
		{
				cout<<"-->Edad: ";
				edad=leedatoePositivos();
				if(edad<=0 or edad>130)
					  cout<<"Error, tiene que ser número positivo\n";
				 
		} while (edad<=0 or edad>130);
		
		// INGRESO DE Bonificaciones
		
		do 
		{
				cout<<"-->Bonificacion 1: ";
				boni1=leedatoePositivos();
				if(boni1<0 )
					  cout<<"Error, tiene que ser número positivo\n";
				 
		} while (boni1<0 );
		do 
		{
				cout<<"-->Bonificacion 2: ";
				boni2=leedatoePositivos();
					if(boni2<0 )
					  cout<<"Error, tiene que ser número positivo\n";
				 
		} while (boni2<0 );
		do 
		{
				cout<<"-->Bonificacion 3: ";
				boni3=leedatoePositivos();
				if(boni3<0 )
					  cout<<"Error, tiene que ser número positivo\n";
			 
		} while (boni3<0 );
		
		switch (genero)
		{
			case 'C': pc++; break;
			case 'D': pd++; break;
			case 'S': ps++; break;
			case 'V': pv++; break;
			
		}
	    if (edad>50)
	       pm50++;
	    
	    bonifica=boni1+boni2+boni3;
	    mboni=mboni+bonifica;
	    cout <<"Bonificacion por empleado: "<<bonifica<<endl;
	    if (bonifica>1000)
	    {
	    	switch (area)
			{
			case 1 : a1++; break;
			case 2 : a2++; break;
			case 3 : a3++; break;
			}	
		}
		 
	}
}
