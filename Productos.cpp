//Ejercicio  Ventas de Productos
// 

#include<iostream>
#include<math.h>
#include<locale.h>
#include<string.h>
#include "ConvierteDatos.h"
#include "LecturaDatos.h"

using namespace std;
float Descuento(int producto, int tipo, int precio);
float Precio(int producto, int tipo, int cant);
float Oferta(int producto, int tipo, int can);
int Opciones();

int n, i=1, codigo, pr, tipo, canti, precio; 
float oferta=0.0,total=0,toferta=0,descuento=0, ttotal=0, toferta3=0,toferta2=0,toferta1=0;
float tot1t1=0,tot1t2=0,tot1t3=0,tot1t4=0,tot1t5=0,tot1t6=0,tot1t7=0,tot1t8=0;
float desc, tot1=0,tot2=0,tot3=0, montoneto=0;

int opc=0, rpta=0;


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
	
// ------------- definición de variables ----------------
    
    
    setlocale(LC_CTYPE,"Spanish");
   
	do 
    {
		cout<<"\n\n";
	    cout<<" ---------- Menú de Opciones ---------- "<<"\n\n";
		cout<<" 1. Registro de Ventas de Productos"<<"\n";
		cout<<" 2. Reporte x Tipo de Producto"<<"\n";
		cout<<" 3. Reporte x Oferta Productos"<<"\n";
		cout<<" 4. Salir"<<"\n";
		cout<<" -------------------------------------- "<<"\n";
		cout <<" Ingrese opcion: "; 
		opc=leedatoePositivos();
	    if (opc<1||opc>4)
	      cout <<"Error...ingrese bien las opciones "<<endl;
		
	}while (opc<1||opc>4);
		
	switch(opc)
	{
	case 1: {

         // ------------- Opción 1  ----------------		 	
		 cout<<"Ingrese la cantidad productos vendidos:  "; 
		 do{
		     n=leedatoePositivos(); 
		     if (n<0)
		 	     cout <<"Error...ingrese número positivo "<<endl;
         }while (n<0);
		 for (i=1;i<=n;i++)
	     {
	     	cout<<"\n------------------------------ "<<"\n"; 
			cout<<"      VENTA PRODUCTO # "<<i<<" : "<<"\n";
			cout<<" ------------------------------ "<<"\n";
			do{
				cout<<"Código de vendedor (1,2,3) : ";
				codigo=leedatoePositivos();
				if(codigo!=1 and codigo!=2 and codigo!=3)
					cout<<"ERROR. Digite de vuelta"<<endl;
			}while(codigo!=1 and codigo!=2 and codigo!=3);
 			do{
				cout<<"Código de Producto (1.Comida, 2.Bebidas, 3.Limpieza):: ";
				pr=leedatoePositivos();
				if(pr!=1 and pr!=2 and pr!=3 )
					cout<<"ERROR. Digite de vuelta"<<endl;
			}while(pr!=1 and pr!=2 and pr!=3);	 
			if(pr==1) {
				do{
					cout<<"Tipo de Producto(1.Verduras, 2.Enlatados): ";
					tipo=leedatoePositivos();
					if(tipo!=1 and tipo!=2 )
					   cout<<"ERROR. Digite de vuelta"<<endl;
				}while(tipo!=1 and tipo!=2 );
			}
			if(pr==2) {
				do{
					cout<<"Tipo de Producto(3.Bot.chica, 4.Bot.1.5lt., 5.Bot.2.5lt): ";
					tipo=leedatoePositivos();
					if(tipo!=3 and tipo!=4 and tipo!=5 )
					   cout<<"ERROR. Digite de vuelta"<<endl;
				}while(tipo!=3 and tipo!=4 and tipo!=5 );
			}
			if (pr==3){
				do{
					cout<<"Tipo de Producto(6.Baldes, 7.Escobas, 8.Jabones): ";
					tipo=leedatoePositivos();
					if(tipo!=6 and tipo!=7 and tipo!=8 )
					   cout<<"ERROR. Digite de vuelta"<<endl;
				}while(tipo!=6 and tipo!=7 and tipo!=8 );
			}
			do{
				cout<<"Cantidad: ";
				canti=leedatoePositivos();
				if(canti<0)
				   cout<<"ERROR. Digite de vuelta"<<endl;
			}while(canti<0);
			
			total=Precio(pr,tipo,canti); 
			oferta=Oferta(pr,tipo,canti)*total; 
			
			cout<<"oferta: "<<oferta<<endl;  
			
			  
		//	cout<<"total antes: "<<total<<endl;		
			descuento=Descuento(pr,tipo,total);   //
			total=total-oferta-descuento;  // 
			cout<<"total: "<<total<<endl;
		//	cout<<"descuento: "<<descuento<<endl;
		//	cout<<"toferta "<<toferta<<endl;
			if (pr==1){      
			  tot1=tot1+total;
			  toferta1=toferta1+oferta;
		//	  cout<<"tot1: "<<tot1<<endl;
		//	  cout<<"toferta1: "<<toferta1<<endl;
			  if (tipo==1)
				tot1t1=tot1t1+total;
			  if (tipo==2)
				tot1t2=tot1t2+total;	
			}
			if (pr==2){	 
				tot2=tot2+ttotal;
				toferta2=toferta2+oferta;
				if (tipo==3) 
					tot1t3=tot1t3+total;
				if (tipo==4)
					tot1t4=tot1t4+total;
				if (tipo==5)
					tot1t5=tot1t5+total;
			}
			if (pr==3){ 
				tot3=tot3+ttotal;
				toferta3=toferta3+oferta;
				if (tipo==6)
					tot1t6=tot1t6+total;
				if (tipo==7)
					tot1t7=tot1t7+total;
				if (tipo==8)
					tot1t8=tot1t8+total;
			}
		}
	 break;
	 }
	 
	case 2:{
		// ------------- Opción 2  ----------------	
		cout <<"\n------ RESULTADOS TIPO PRODUCTO ---------\n";
	    cout <<" Tipo de Producto: Comida\n";
	    cout <<"\tMonto Final Verduras:   "<<tot1t1<<"\n";
	    cout <<"\tMonto Final Enlatados:   "<<tot1t2<<"\n";
	    
	    cout <<" Tipo de Producto: Bebidas \n";
	    cout <<"\tMonto Final Botella chica :   "<<tot1t3<<"\n";
	    cout <<"\tMonto Final Botella 1.5 ltrs:   "<<tot1t4<<"\n";
	    cout <<"\tMonto Final Botella 2.5 ltrs:   "<<tot1t5<<"\n";
	    
	    cout <<" Tipo de Producto: Limpieza \n";
	    cout <<"\tMonto Final Baldes :   "<<tot1t6<<"\n";
	    cout <<"\tMonto Final Escobas:   "<<tot1t7<<"\n";
	    cout <<"\tMonto Final Jabones:   "<<tot1t8<<"\n";
        cout <<"\n--------------------------------------";
	    break;
      }
    case 3:{
		// ------------- Opción 3  ----------------	
		cout <<"\n--- RESULTADOS x Ofertas  ---\n";
	    cout <<" Ofertas Comidas:  "<<toferta1<<"\n";
	    cout <<" Ofertas Bebidas:  "<<toferta2<<"\n";
	    cout <<" Ofertas Limpieza: "<<toferta3<<"\n";
        cout <<"\n--------------------------------------";
	    break;
      }
   }
   return opc;
 }
 

float Descuento(int producto, int tipo, int montoneto)
{
	float desc=0.00;
	if (producto==1 and tipo==1)
		desc=0.18;
 	if (producto==2 and tipo==5)
		desc=0.15;		 		
	if (producto==3 and tipo==8)
		desc=0.10;
	cout<<"Descuento: "<<desc<<"\n";	
	desc=montoneto*desc;	 
	return desc;     
}

float Oferta(int producto, int tipo, int can)
{
	float oferta=0;
	if (producto==1 and tipo==2){
		if (can>=2) 
			oferta=0.05;
	}
	if (producto==2 and tipo==4){
		if (can>=3) 
			oferta=0.07;
	}
	if (producto==3 and tipo==7){
		if (can>=2) 
			oferta=0.15;
	}		
	return oferta;
}

float Precio(int producto, int tipo, int cant)
{   
	float precio;
	if (producto==1){
		if (tipo==1)    
			precio=5.00;
		if (tipo==2)
			precio=8.00;
		}
	if (producto==2){
		if (tipo==3)    
			precio=1.5;
		if (tipo==4)
			precio=3.00;
		if (tipo==5)    
			precio=5.50;
		}
	if (producto==3){
		if (tipo==6)
			precio=8.00;
		if (tipo==7)    
			precio=12.00;
		if (tipo==8)
			precio=3.00;
		}	 
	cout<<"Monto: "<<precio*cant<<"\n";
	return precio*cant; 
}
