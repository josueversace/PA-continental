 /*
      Se ingresa el nombre del cliente
	  Se ingresa el género del cliente F o M  
      Si es Masculino: 
         cantidad <=10 el descuento será 20% sino 50%
      Si es Femenino:
         cantidad <=10 el descuento será 30% sino 40%
                  
*/

#include<iostream>
#include<string>
using namespace std;

int main(){
	//declaración de variables
	string nombClie;
	char geneClie;
	double precioProd=100;
	int cantProd;
	double PorcDscto=0, MontoBruto=0, MontoDscto=0, MontoPago=0;
	  
	
	//datos de entrada
	cout<<"Ingrese Nombre del Cliente   : ";
	cin>>nombClie;
	cout<<"Ingrese Cantidad de Productos: ";
	cin>>cantProd;
	
	//validar cantidad mayor a cero
	if (cantProd>0)
	{
		cout<<"Ingrese genero de Cliente: "; 
		cin>>geneClie;
		
		//validar que se ingrese genero
		if (geneClie == 'm' || geneClie=='M' || geneClie=='f'|| geneClie=='F') 
		{
			switch (geneClie)
			{
				case 'm':
				case 'M':
					{
						if (cantProd <=10)
						  PorcDscto=0.2;
						else
						  if (cantProd >10)
						    PorcDscto=0.5;
					} break;
				case 'f':
				case 'F':
					{
						if (cantProd <=10)
						  PorcDscto=0.3;
						else
						  if (cantProd >10)
						    PorcDscto=0.4;
					} break;
			}
			MontoBruto = cantProd*precioProd;
			MontoDscto = MontoBruto*PorcDscto;
			MontoPago = MontoBruto- MontoDscto;
			
			cout<<endl;
			cout<<"El monto bruto es    : "<< MontoBruto<<endl;
			cout<<"El monto descuento es: "<< MontoDscto<<endl;
			cout<<"El monto de pago es  : "<< MontoPago<<endl;
			
		}
		else
		   cout<< "ERROR. Debe ingresar [f]emenino o [m]asculino";
	}
	else
	 	cout<< "ERROR. Debe ingresar cantidad mayor a cero";
	 	
	 	
	return 0;
}

