/*	Se cuenta con una tienda de artefactos que vende lo siguiente:
  C- Celulares con precio 2200, si lleva  de 3  a 5 tiene un 20%, si lleva mas de 5 un 30%
  T- Televisores con precio de 3500, si lleva 2 tiene 10%, si llevan mas de 5 un 35%
  Realizar el calculo respectivo a pagar de acuerdo al ingreso de los productos.
*/
#include<iostream>
using namespace std;

int main()
{
    setlocale(LC_CTYPE,"Spanish");  //acentos
    
    //Definición de Variables
    char tipo;
    int cantidad=0;
    float precio=0, desc=0;
    float montobruto=0, montodesc=0, montototal=0;
    
    //Entrada de Datos
    cout<<"Ingrese tipo de Producto (C- Celulares T-Televisores): ";
    cin>>tipo;
    
    if(tipo=='C' || tipo=='c'|| tipo=='T'|| tipo=='t')
    {
    	cout<<"Ingrese cantidad: ";
        cin>>cantidad;
        
        if (cantidad>0)
        {
        	switch (tipo)
        	{
        		case 'c':
        		case 'C':
        			{
        			  precio=2200;
					  if (cantidad>=3 && cantidad<=5)
					     desc=0.2;
					  else	
					     if (cantidad>5)
        				    desc=0.5;
					}break;
        		case 't':
        		case 'T':
        			{
        			  precio=3500;
					  if (cantidad==2)
					     desc=0.1;
					  else	
					     if (cantidad>5)
        				    desc=0.35;
					}break;
			}
        	montobruto=cantidad*precio;
        	montodesc=montobruto*desc;
        	montototal=montobruto-montodesc;
        	
        	cout<<"-------- REPORTE -----------------"<<endl;
        	cout<<"Monto Bruto (+) :  "<<montobruto<<endl;
        	cout<<"Monto Desct.(-) :  "<<montodesc<<endl;
        	cout<<"----------------------------------"<<endl;
        	cout<<"Total a pagar   :  "<<montototal<<endl;
		}
    	
    	else
    	   cout<<"Ingreso mal la cantidad"<<endl;
	}
    else
       cout<<"Ingreso mal el tipo de producto"<<endl;
       

	 return 0;
	 
}


