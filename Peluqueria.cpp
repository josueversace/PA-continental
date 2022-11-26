#include<iostream>
using namespace std;

int main()
{  
    setlocale(LC_ALL,"spanish");
    string nombre;
     
    int edad=0, tipo=0, peluquero=0, cedad50=0, cedad18=0, reg=0, opcion;
    float precio=0, tventa=0, venta_cc=0, venta_cm=0, venta_cl=0;
    
    do 
    {
    	cout<<"\n\n----- Menú de Reporte -----"<<endl;
		cout<<"1. Registrar"<<endl;
		cout<<"2. Reportes"<<endl;
		cout<<"3. Salir   "<<endl;
		cout<<"--------------------------------"<<endl;
		cout<<"Su opción: ";
		cin>>opcion;
		switch (opcion)
    	{
    		case 1:
    			{
    			cout<<"Ingrese el nombre  :";
    			cin>> nombre;
    			
    			do
    			{
    				cout <<"Ingrese edad : ";
    				cin>>edad;
    				if (edad<0)
    				  cout<<"Error, ingreso dato errado..."<<endl;	  
				}while (edad<0);				
    		    do
    			{
    				cout <<"Ingrese Tipo de Corte : 1. Corto  2. Mediano 3. Largo: ";
    				cin>>tipo;
    				if (tipo<0|| tipo>4)
    				  cout<<"Error, ingreso dato errado..."<<endl;	  
				}while (tipo<0 || tipo>4);
				
				
				
				do
    			{
    				cout <<"Ingrese Codigo de Peluquero (1-5) : ";
    				cin>>peluquero;
    				if (peluquero<0|| peluquero>5)
    				  cout<<"Error, ingreso dato errado..."<<endl;	  
				}while (tipo<0 || tipo>5);
				
				
				if (tipo==1)
				{precio=10;
				 venta_cc=venta_cc+precio;   //venta_cc=0+10=10   
				}
				   
				if (tipo==2)
				{precio=25;
				 venta_cm=venta_cm+precio;
				}
				   
				if (tipo==3)
				{precio=40;
			  	 venta_cl=venta_cl+precio;
				}
				   
				
				if (edad>50)
                   cedad50++;   //cedad50=cedad50+1     
			
			
				if (edad<18)
                   cedad18++;  //cedad18=cedad18+1      
	   		
			   
			   	reg++;	       //reg=reg+2    
				
				
				tventa=tventa+precio;     
				}break;
				
			case 2:
				{
					cout <<"\n\n-------- REPORTE DEL DIA  ------------"<<endl;
				    cout <<" Clientes atendidos          :   "<<reg<<endl;
				    cout <<" Clientes mayores  a 50 años :   "<<cedad50<<endl;
					cout <<" Clientes menores de 18 años :   "<<cedad18<<endl;
				    cout <<" Monto Total Vta             :   "<<tventa<<endl;
				    cout <<" Ingreso por corte cabello chico   :   "<<venta_cc<<endl;
				    cout <<" Ingreso por corte cabello mediano :   "<<venta_cm<<endl;
				    cout <<" Ingreso por corte cabello largo   :   "<<venta_cl<<endl;
				    if (reg>0)
				      cout <<" Promedio de las ventas del dia  :   "<<tventa/reg<<endl;
				    else 
				       cout <<" Promedio de las ventas del dia  :  0 "<<endl;
				}break;
			case 3: 
			    cout <<"Gracias, vuelva pronto!!!"<<endl;
			    break;
			default: 
			      cout <<"Ingreso dato errado..."<<endl;
		}
    	
	}while (opcion!=3);	
  
  
  
  
  
  
	return 0;
}


   
   
