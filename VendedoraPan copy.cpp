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
  char tipocliente, tipojuguete, continua;
  double precioProd = 0, PorcDscto = 0, MontoBruto = 0, MontoDscto = 0;
  double Total = 0, TotalPago = 0;
  int cantProd;
  int stockA = 300, stockB = 150, stockC = 250, stockD = 350;
  int stockAmin = 20, stockBmin = 30, stockCmin = 40, stockDmin = 50;
  int clienteatendido = 0, clienteNOatendido = 0;
  int cantidadvendidaA = 0;
  int actualizacionStock = 0;
  int acumuladoA = 0, acumuladoB = 0, acumuladoC = 0, acumuladoD = 0;
  double montoacumuladoA = 0, montoacumuladoB = 0, montoacumuladoC = 0, montoacumuladoD = 0;
  double montostockA = 0, montostockB = 0, montostockC = 0, montostockD = 0;
  int opcion = 0, Cantidadxsumar = 0, actstock = 0, nvacantidad = 0, continuarcompra = 0;

  do
   {
	   cout << "\n\n----- Menu de Opciones -----" << endl;
	   cout << "1. Registrar venta" << endl;
	   cout << "2. Reportes" << endl;
	   cout << "3. Salir   " << endl;
	   cout << "--------------------------------" << endl;
	   cout << "Su opcion: ";
	   cin >> opcion;

	   do
	   {
		   cout << "\nIngrese cantidad de panes a comprar: ";
		   cin >> cantidad;
		   if (cantidad <= 0)
			   cout << "Error, ingreso dato negativo ...";  
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
