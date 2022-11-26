#include<iostream>
#include<math.h>
#include<locale.h>
#include<string.h>
#include "LecturaDatos.h"
#include "ConvierteDatos.h"

using namespace std;

float Precio(int producto, int tipo);
float Descuento(int producto, int tipo, int can, int precio);
float Oferta(int producto, int tipo, int can, int precio);
void RegistroVentas(int n);
int Opciones();
void ReporteTipoProducto();
void ReporteVendedor();

float M1=0,M2=0,M3=0,M4=0,M5=0,M6=0,M7=0,M8=0,MV1=0,MV2=0,MV3=0;
int CV1=0,CV2=0,CV3=0, rpta=0;

int main()
{    
	setlocale(LC_CTYPE,"Spanish");
	do
	{rpta=Opciones(); 
	}while (rpta!=4);
	
	return 0;
}

int Opciones()
{
	int opc,vent;
	setlocale(LC_CTYPE,"Spanish");
	do
	{
		cout<<"\n         Menú de Opciones \n";
		cout<<"-------------------------------------\n";
		cout<<"1. Registro de Ventas de Productos \n";
		cout<<"2. Reportes x Tipo de Productos\n";
		cout<<"3. Reportes x Vendedor\n";
		cout<<"4. Salir \n";
		cout<<"-------------------------------------";
		cout<<"\nSeleccione una opción: ";
		opc=leedatoePositivos();
		if (opc<1 || opc>4)
		   cout <<"Error,,, digite bien las opciones! "<<endl;
	}while(opc<1 || opc>4);

	switch (opc)
	{
	case 1:
		 
		cout<<"Ingrese la cantidad de ventas: ";
		do{
		     vent=leedatoePositivos(); 
		     if (vent<0)
		 	     cout <<"Error...ingrese número positivo "<<endl;
         }while (vent<0);
         
		RegistroVentas(vent);
		break;
	case 2:
		ReporteTipoProducto();
		break;
	case 3:
		ReporteVendedor();
		break;
	case 4:
		cout<<"Hasta pronto...\n";
		break;
	}
	
	return opc;
	
}

void RegistroVentas(int n)
{
	int vend,prod,tipo,canti;
	float prec,MB,O,D,MN;
	
	for(int i=1;i<=n;i++)
	{
		cout<<":::::REGISTRO #"<<i<<":::::\n";
		
		// INGRESO DE VENDEDORES
		do
		{
			cout<<"-->Código de Vendedor (1,2,3): ";
			vend=leedatoePositivos();
			if(vend!=1 and vend!=2 and vend!=3)
				cout<<"Error ingrese el codigo otra vez!!!\n";
		}while(vend!=1 and vend!=2 and vend!=3);
		
		// INGRESO DE PRODUCTOS
		do
		{
			cout<<"-->Código de Producto (1. Ropa 2. Zapatos 3. Implementos): ";
			prod=leedatoePositivos();
			if(prod!=1 and prod!=2 and prod!=3)
				cout<<"Error ingrese el codigo otra vez!!!\n";
		}while(prod!=1 and prod!=2 and prod!=3);
		
		switch(prod)
		{
		case 1:
			do
			{
				cout<<"-->Tipo de producto(1.Verano 2.Invierno): ";
				tipo=leedatoePositivos();
				if(tipo!=1 and tipo!=2)
					cout<<"Error ingrese el codigo otra vez!!!\n";
			}while(tipo!=1 and tipo!=2);
			break;
		case 2:
			do
			{
				cout<<"-->Tipo de producto(3.Deportivos 4.Vestir 5.Escalar): ";
				tipo=leedatoePositivos();
				if(tipo!=3 and tipo!=4 and tipo!=5)
				cout<<"Error ingrese el codigo otra vez!!!\n";
			}while(tipo!=3 and tipo!=4 and tipo!=5);
			break;
		case 3:
			do
			{
				cout<<"-->Tipo de producto(6.Lentes 7.Guantes 8.Carpas): ";
				tipo=leedatoePositivos();
				if(tipo!=6 and tipo!=7 and tipo!=8)
				cout<<"Error ingrese el codigo otra vez!!!\n";
			}while(tipo!=6 and tipo!=7 and tipo!=8);
			break;
		}
		// INGRESO DE CANTIDAD
		do
		{
			cout<<"-->Cantidad: ";
			canti=leedatoePositivos();
			if(canti<0)
				cout<<"Error ingrese cantidad otra vez!!!\n";
		}while(canti<0);
		
		// CALCULO DEL PROCESO
		prec=Precio(prod,tipo);
		MB=canti*prec;
		O=Oferta(prod,tipo,canti,prec);
		D=Descuento(prod,tipo,canti,prec);
		MN=MB-O-D;
		
		// IMPRESION DE DATA
		cout<<"Monto Bruto S/.= "<<MB<<"\n"; 
		if (O!=0)
			cout<<"Oferta      S/. = "<<O<<"\n";
		if (D!=0)   
			cout<<"Descuento   S/. = "<<D<<"\n";	 
		cout<<"Monto Neto  S/.= "<<MN<<"\n";
		
		// ACUMULADOR POR TIPO PRODUCTO
		switch(tipo)
		{
		case 1:
			M1=M1+MN;
			break;
		case 2:
			M2=M2+MN;
			break;
		case 3:
			M3=M3+MN;
			break;
		case 4:
			M4=M5+MN;
			break;
		case 5:
			M5=M5+MN;
			break;
		case 6:
			M6=M6+MN;
			break;
		case 7:
			M7=M7+MN;
			break;
		case 8:
			M8=M8+MN;
			break;
		}
		
		// ACUMULADOR POR VENDEDOR
		switch(vend)
		{
		case 1:
			MV1=MV1+MN;
			CV1=CV1+1;
			break;
		case 2:
			MV2=MV2+MN;
			CV2=CV2+1;break;
		case 3:		
			MV3=MV3+MN;
			CV3=CV3+1;break;
		}
	}
}
float Precio(int producto, int tipo)
{
	switch (tipo)
	{
	case 1:
		return 25;
		break;
	case 2:
		return 45;
		break;
	case 3:
		return 70;
		break;
	case 4:
		return 90;
		break;
	case 5:
		return 155;
		break;
	case 6:
		return 65;
		break;
	case 7:
		return 32;
		break;
	case 8:
		return 130;
		break;
	}
}
float Oferta(int producto, int tipo, int can, int precio)
{
	switch (tipo)
	{
		case 1:
			return 0;
			break;
		case 2:
			if(can>5)
				{return can*precio*0.10;}
			else
				return 0;
			break;
		case 3:
			return 0;
			break;
		case 4:
			if(can>3)
				{return can*precio*0.20;}
			else
				return 0;
			break;
		case 5:
			return 0;
			break;
		
		case 6:
			return 0;
			break;
		case 7:
			if(can>4)
				{return can*precio*0.15;}
			else
				return 0;
			break;
		case 8:
			return 0;
			break;
	}
}
float Descuento(int producto, int tipo, int can, int precio)
{
	switch (tipo)
	{
		case 1:
			return can*precio*0.18;
			break;
		case 2:
			return 0;
			break;
		case 3:
			return 0;
			break;
		case 4:
			return 0;
			break;
		case 5:
			return can*precio*0.15;
			break;
		case 6:
			return 0;
			break;
		case 7:
			return 0;
			break;
		case 8:
			return can*precio*0.1;
			break;
	}
}
void ReporteTipoProducto()
{
	cout<<"\n Tipo de Producto: Ropa\n";
	cout<<"-->Total de Monto Neto de Verano = "<<M1<<"\n";
	cout<<"-->Total de Monto Neto de Invierno = "<<M2<<"\n";
	
	cout<<" Tipo de Producto: Zapatos\n";
	cout<<"-->Total de Monto Neto de Deportivos = "<<M3<<"\n";
	cout<<"-->Total de Monto Neto de Vestir = "<<M4<<"\n";
	cout<<"-->Total de Monto Neto de Escalar = "<<M5<<"\n";
	
	cout<<" Tipo de Producto: Implementos\n";
	cout<<"-->Total de Monto Neto de Lentes = "<<M6<<"\n";
	cout<<"-->Total de Monto Neto de Guantes = "<<M7<<"\n";
	cout<<"-->Total de Monto Neto de Carpas = "<<M8<<"\n";
}
void ReporteVendedor()
{
	cout<<"\n Reportes por Vendedor\n";
	cout<<"-->Cantidad de Ventas del empleado 1 = "<<CV1<<"\n";
	cout<<"-->Cantidad de Ventas del empleado 2 = "<<CV2<<"\n";
	cout<<"-->Cantidad de Ventas del empleado 3 = "<<CV3<<"\n";
	cout<<"-->Total Monto Neto del empleado 1 y 2 = "<<MV1+MV2<<"\n";
}


