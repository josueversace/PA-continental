/******************************************************************************
1.	Escriba un programa para que la fábrica 
de juguetes Toys in House pueda registrar las 
ventas del día.  Para lo cual, se tiene
4 tipos de juguetes con sus precios 
respectivos y descuentos que se muestra
en la tabla.
A – Juguetes de goma	15.00	cantidad > 4, Descuento 3%
B – Juguetes de trapo 	22.00	cantidad > 9, Descuento 5%
C-  Juguetes de Plásticos  	30.00	cantidad > 6, Descuento 7%
D – Juguetes de madera	35.00	cantidad > 7, Descuento 9%
Debe solicitar:
1.	El ingreso del tipo de juguete. 
(debe validar que sólo sea: A, B, C, D)
2.	El ingreso del tipo de cliente. 
(A – Vip   B – Regular)
3.	El ingreso de la cantidad a comprar
de juguetes. (debe validar que la 
cantidad sea mayor a cero).
Debe mostrar en pantalla los montos 
por cada ingreso:

•	MontoBruto=cantidad * precio
•	MontoDescuento=MontoBruto * descuento
•	Total=MontoBruto-MontoDescuento
•	TotalPagar=Total*1.18

*******************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_CTYPE, "Spanish");
    
    //Declaracion de Variables
    char tipocliente;
    char tipoproducto;
    float precio = 0;
    int cnt;
    double PorcDscto=0, MontoBruto=0, MontoDscto=0, SubTotal=0,TotalPago=0;
    
    
    //Entrada de Datos
    cout<< "\n              PRODUCTOS          "
        << "\n ================================"
        << "\n A – Jug. de goma.......(Pulsa A)"
        << "\n B – Jug. de trapo......(Pûlsa B)"
        << "\n C-  Jug. de Plásticos..(Pulsa C)"
        << "\n D – Jug. de madera ....(Pulsa D)"
        << "\n 5.- Salir .............( Otros )"
        << "\n ================================"
        << "\n Ingresa tipo producto: ";
    
    cin>>tipoproducto;
    
    switch(tipoproducto)
    {
        case 'A':
        case 'a':
            cout<< "\n        TIPO DE CLIENTE          "
            << "\n ================================"
            << "\n A – VIP................(Pulsa A)"
            << "\n B – REGULAR............(Pûlsa B)"
            << "\n Ingresa tipo cliente: ";
            cin>>tipocliente;
    
            cout<<"Ingrese la cantidad: ";
            cin>>cnt;
            {
				if (cnt > 4){
				    precio= 15.00;
				    PorcDscto=0.03;}
				else
				{
				    precio= 15.00;
			    }
			} break;
        
        case 'B':
        case 'b':
            cout<< "\n        TIPO DE CLIENTE          "
            << "\n ================================"
            << "\n A – VIP................(Pulsa A)"
            << "\n B – REGULAR............(Pûlsa B)"
            << "\n Ingresa tipo cliente: ";
            cin>>tipocliente;
            cout<<"Ingrese la cantidad: ";
            cin>>cnt;
            {
				if (cnt > 9){
				    precio= 22.00;
				    PorcDscto=0.05;}
				else
			    {
				    precio= 22.00;
			    }
			} break;
        
        case 'C':
        case 'c':
            cout<< "\n        TIPO DE CLIENTE          "
            << "\n ================================"
            << "\n A – VIP................(Pulsa A)"
            << "\n B – REGULAR............(Pûlsa B)"
            << "\n Ingresa tipo cliente: ";
            cin>>tipocliente;
            cout<<"Ingrese la cantidad: ";
            cin>>cnt;
            {
				if (cnt > 6){
				    precio= 30.00;
				    PorcDscto=0.07;}
				else
				{
				    precio= 30.00;
				}
            } break;
            
        case 'D':
        case 'd':
            cout<< "\n        TIPO DE CLIENTE          "
            << "\n ================================"
            << "\n A – VIP................(Pulsa A)"
            << "\n B – REGULAR............(Pûlsa B)"
            << "\n Ingresa tipo cliente: ";
            cin>>tipocliente;
            cout<<"Ingrese la cantidad: ";
            cin>>cnt;
            {
				if (cnt > 7){
				    precio= 35.00;
				    PorcDscto=0.09;}
				else
				{
				    precio= 35.00;
				}
            } break;
        default:
            cout <<"\nERROR: Opcion incorrecta\n\n";
            break;
    }
    
    MontoBruto= cnt* precio; 
    MontoDscto= MontoBruto * PorcDscto; 
    SubTotal=MontoBruto - MontoDscto;
    TotalPago= SubTotal*1.18;
    
    cout<<"============ REPORTE ==============="<<endl;
    cout<<"Monto Bruto (+) : "<<MontoBruto<<endl;
    cout<<"Monto Desct.(-) : "<<MontoDscto<<endl;
    cout<<"Sub Total       : "<<SubTotal<<endl;
    cout<<"------------------------------------"<<endl;
    cout<<"Total a pagar   :  "<<TotalPago<<endl;
    
    cout<<endl;
    return 0;
}
