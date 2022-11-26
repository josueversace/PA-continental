/*
	Una vendedora de pan tiene cierta cantidad de unidades de pan
	al comenzar el dia.  Si cada cliente le pide cierta cantidad de panes:
	�Cu�ntos clientes son atendidos completamente? 
	�Cu�ntos panes quedan para el �ltimo cliente?
*/

#include<iostream>
using namespace std;
int main()
{ 
  //Declaraci�n de Variables
  int cantidad=0, Noventa=0, stock=0, clienteNoAtendido=0, clienteAtendido=0, venta=0;
  char continua;
  int nvacantidad = 0;
  
  do
  {
  	cout<<"Ingrese total de inventario: ";
  	cin>>stock;
  	if (stock<=0)
  	   cout<<"Error, ingreso dato negativo ...";  
  }while (stock<=0);
  
  
  do
   {  
	
	  do
	  {
	  	cout<<"\nIngrese cantidad de panes a comprar: ";
	  	cin>>cantidad;
	  	if (cantidad<=0)
	  	   cout<<"Error, ingreso dato negativo ...";  
	  }while (cantidad<=0);
	  
	  if (cantidad<=stock)
	  {
	  	clienteAtendido++;      //clienteAtendido=clienteAtendido+1      contadores
	  	stock=stock-cantidad;   // actualizamos el stock
	  	venta=venta+cantidad;   // acumulado de panes vendidos           acumuladores
	  }
	  else
	  {
	  	cout<<"No hay stock disponible!!! "<<endl;
	  	clienteNoAtendido++;  
	  	Noventa=Noventa+cantidad;

		do
		{
			cout << "\nIngrese cantidad  : ";
			cin >> nvacantidad;
			if (nvacantidad <= 0)
				cout << "Error, ingreso dato negativo ...";
			if (nvacantidad > 0 )
				stock = stock + nvacantidad;

		} while (nvacantidad <= 0);
	  }
	    
	    
     cout<<"Desea registrar otra venta? (S/N) ";
     cin>>continua;
     
  
  }while (continua=='S' || continua=='s');
  
   cout <<"========= RESULTADO ============="<<endl;
   cout <<"Total de panes vendidos :  "<<venta<<endl;
   cout <<"Clientes Atendidos      :  "<<clienteAtendido<<endl;
   cout <<"Total panes No vendidos :  "<<Noventa<<endl;
   cout <<"Clientes No Atendidos   :  "<<clienteNoAtendido<<endl;
   cout <<"Stock final             :  "<<stock<<endl;
   

return 0;
}
