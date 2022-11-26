/* Integrantes del grupo:
   ELIZANT BAYONA PFOCCORI   70%
   SUSAN ELIZABETH BAUTISTA MANRIQUE 100%
   MOISES ASTETE SAMATA    30%
   FREDY CESAR PACHAURI GONZ  (no participo)
   NRC:01312-13736
 */
#include<iostream>
#include<math.h>
#include<locale.h>
#include<string.h>
#include "ConvierteDatos.h"
#include "LecturaDatos.h"

using namespace std;
int Opciones();
void RegistroVentas();
float Precio(int producto, int tipo);
void Reportegeneral();
void salir();
char gerero,res;
int vent,reg, opc=0;
int tipolibro=0, cantidad, countreg=0, resp=0;
double importebruto, montoDescuento, importeNeto, countV , mtotalneto , mtotalnetoNovelas, netoCuentos;
int clfc, clf_desc6, cv_desc2002500,  procvlc;

int main()
{
	setlocale(LC_CTYPE,"Spanish");
	do
	{
		resp=Opciones();
	
	}while (resp!=3);
 
	return 0;
}
int Opciones()
{
	int vent;
	setlocale(LC_CTYPE,"Spanish");
	 
		 
        cout << "\n\t+--------------------------------------------------+" << endl;
	    cout << "\n\t|               LIBRERIA COLIBRI DORADO            |" << endl;
     	cout << "\n\t+--------------------------------------------------+" << endl;
        cout << "\n\n\t\t\tMenu de Opciones" << endl;
        cout << "\n\t1. REGISTRAR VENTA" << endl;
        cout << "\t2. REPORTAR VENTA" << endl;
        cout << "\t3. SALIR" << endl;
        cout << "\n\tIngrese una opcion: ";
		do
		{
			opc=leedatoePositivos();
			if (opc<1 || opc>4)
			{
			cout << "\n\tError, Ingrese una opcion valida de 1 a 3 :";
			}
		} while (opc<1 || opc>4);
		switch (opc)
		{
		case 1:
			RegistroVentas();
			break;
		case 2:{
			  Reportegeneral();
			}
			break;
		case 3:
		    cout<<"\n\tEstas seguro que desea salir (s/n)?: ";
			cin>>res;
			if(res=='s')
			   salir();
			else
			   opc=1;
			break;
		}
 	
	
	
	return opc;
}

float Precio(int tipo)
{
	switch (tipo)
	{
	    case 1:
		 return 90;
		 break;
	    case 2:
		 return 100;
		 break;
	    case 3:
		 return 80;
		 break;
	    case 4:
		 return 150;
		 break;	
	}
}

float Descuento(int tipo, int can, int precio)
{
	switch (tipo)
	{
		case 1:
			if(can >= 1 && can <= 2)
				return	can*precio*0.05;
			if(can >= 3 && can <= 6){
				clf_desc6++;
				return	can*precio*0.06;
			}
			if(can >= 7 )
				return	can*precio*0.08;
			break;
		case 2:
			if(can >= 1 && can <= 2)
				return	can*precio*0.08;
			if(can >= 3 && can <= 6)
				return	can*precio*0.16;
			if(can >= 7 )
				return	can*precio*0.32;
			break;
		case 3:
			if(can >= 1 && can <= 2)
				return	can*precio*0.09;
			if(can >= 3 && can <= 6)
				return	can*precio*0.18;
			if(can >= 7 )
				return	can*precio*0.36;
			break;
		case 4:
			if(can >= 1 && can <= 2)
				return	can*precio*0.02;
			if(can >= 3 && can <= 6)
				return	can*precio*0.02;
			if(can >= 7 )
				return	can*precio*0.04;
			break;		 
	}
}
void RegistroVentas()
{
	
	do{	 
		cout<<"\n\t¿Cuál es su género (F ó M)?: ";
		gerero=toupper(leedatoc());
		if(gerero!='F' && gerero!='M')
		{
			cout<<"\n\tERROR. Digite de vuelta";
		}
	}while(gerero!='F' && gerero!='M' );
	
	do{	 
		cout<<"\n\tTipo de Libros	Precio (S/.)";
		cout<<"\n\t1-Ficción		90";
		cout<<"\n\t2-Novelas		100";
		cout<<"\n\t3-Cuentos		80";
		cout<<"\n\t4-Física Cuántica	150";
		cout<<"\n\tLibro a Vender: ";
		tipolibro=leedatoePositivos();
		if (tipolibro!=1 and tipolibro!=2 and tipolibro!=3 and tipolibro!=4)
			{
			cout << "\n\tError, Ingrese una opción valida de 1 a 4 :";
			}
	} while (tipolibro!=1 and tipolibro!=2 and tipolibro!=3 and tipolibro!=4);
	
	do{	 
		cout<<"\n\tCantidad de libros: ";
		cantidad=leedatoePositivos();
		if(cantidad < 1 )
			cout<<"\n\tERROR Digite la cantidad correcta";
	}while(cantidad < 1 );
	
	importebruto = cantidad * Precio(tipolibro);
	montoDescuento = Descuento(tipolibro,cantidad,Precio(tipolibro));
	importeNeto = importebruto - montoDescuento;
	if(tipolibro==4)
		clfc++;	
	if( gerero=='M'&& montoDescuento >= 200 && montoDescuento <=2500 )
		cv_desc2002500++;
		
	mtotalneto+=importeNeto;
	
	if(tipolibro==2 && gerero=='F')
		mtotalnetoNovelas+=importeNeto;
		
	if(tipolibro==3 && gerero=='M'){
		countV++;
		netoCuentos+=importeNeto;
		if(countV>0)
		   procvlc = netoCuentos /countV;
	}		
	cout <<"\n\tDESCUENTOS REALIZADOS" << endl;
	cout<<"\n\tImporte Bruto     : " << importebruto << endl;
	cout<<"\n\tMonto de Descuento: " << montoDescuento << endl;
	cout<<"\n\tImporte Neto      : " << importeNeto << endl;
	countreg++;
}
void Reportegeneral()
{       
        cout <<" " << endl;
	    cout <<"\n\t+--------------------------------------------------+" << endl;
	    cout <<"\n\t|       REPORTE GENERAL DE VENTA DE LIBROS         |" << endl;
    	cout <<"\n\t+--------------------------------------------------+" << endl;
    	cout<<"\n\tCantidad de venta registradas de  libros de Física Cuántica: "<< clfc<<endl;
	    cout<<"\n\tCantidad de ventas registradas de libros de Ficción que tengan un descuento de 6%: "<< clf_desc6 <<endl;
        cout<<"\n\tCantidad de ventas registradas de clientes varones cuyo Descuento Neto sea >=200 y <=2500: "<< cv_desc2002500 <<endl;
    	cout<<"\n\tMonto total de Importe Neto: "<< mtotalneto <<endl;	 
	    cout<<"\n\tMonto total de Importe Neto de los clientes mujeres que compraron libros de Novelas: "<< mtotalnetoNovelas <<endl;
    	cout<<"\n\tPromedio de Importe Neto de clientes varones que compraron libros de Cuentos: "<< procvlc <<endl;
}
void salir()
{
	cout<<"\n\tGracias vuelva acceder al sistema"<<endl;

}

