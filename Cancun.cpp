#include<iostream>
#include <cstdlib>
using namespace std;
int main()
{ 
    setlocale(LC_ALL,"spanish");
    int personas=0, opcion=0, puntacana=0, cancun=0, sanandres=0 ;
    float Descuento=0, Neto=0, desc=0, total=0, precio=0, P_Neto=0, S_Neto=0, C_Neto=0;
    
    
	do
	 {
	 
	    cout<<"\n\n----- Menú de Opciones -----"<<endl;
		cout<<"1. Punta Cana"<<endl;
		cout<<"2. San Andrés"<<endl;
		cout<<"3. Cancún    "<<endl;
		cout<<"4. Salir     "<<endl;
		cout<<"--------------------------------"<<endl;
		cout<<"Su opción: ";
		cin>>opcion;
		switch (opcion)
		    {
		     case 1:
		     	{
					 do
					 {
						 cout<<"Ingrese cant. personas ";
			     	     cin>>personas;
			     	     if (personas<0)
			     	       cout<<"Error, ingreso dato negativo..."<<endl;
		     	     }while(personas<0);
		     	     precio=780;
		     	     total=precio*personas;
		     	     if (personas>4)
		     	     {
		     	     	desc=0.035;
		     	     	puntacana++;
					 }
					 Descuento=total*desc;
					 Neto=total-Descuento;
					 P_Neto=P_Neto+Neto;
		     	     cout<<"--- Reporte Vta------"<<endl;
		     	     cout<<"# Paquetes :  "<<puntacana<<endl;
		     	     cout<<"Precio     :  "<<precio<<endl;
		     	     cout<<"# Personas :  "<<personas<<endl;
		     	     cout<<"Sub Total  :  "<<total<<endl;
		     	     cout<<"Descuento  :  "<<Descuento<<endl;
		     	     cout<<"A pagar    :  "<<Neto<<endl;
		     	     
				}break;
				
				case 2:
					{
						do
					 {
						 cout<<"Ingrese cant. personas ";
			     	     cin>>personas;
			     	     if (personas<0)
			     	       cout<<"Error, ingreso dato negativo..."<<endl;
		     	     }while(personas<0);
		     	     
		     	     precio=1350;
		     	     total=precio*personas;
		     	     if (personas>4)
		     	     {
		     	     	desc=0.04;
		     	     	sanandres++;
					 }
					 Descuento=total*desc;
					 Neto=total-Descuento;
					 S_Neto=S_Neto+Neto;
		     	     cout<<"Reporte Vta------"<<endl;
		     	     cout<<"# Paquetes :  "<<sanandres<<endl;
		     	     cout<<"Precio     :  "<<precio<<endl;
		     	     cout<<"# Personas :  "<<personas<<endl;
		     	     cout<<"Sub Total  :  "<<total<<endl;
		     	     cout<<"Descuento  :  "<<Descuento<<endl;
		     	     cout<<"A pagar    :  "<<Neto<<endl;
				}break;
				
				case 3:
					{
						do
					 {
						 cout<<"Ingrese cant. personas ";
			     	     cin>>personas;
			     	     if (personas<0)
			     	       cout<<"Error, ingreso dato negativo..."<<endl;
		     	     }while(personas<0);
		     	     
		     	     precio=2550;
		     	     total=precio*personas;
		     	     if (personas>4)
		     	     {
		     	     	desc=0.045;
		     	     	cancun++;
					 }
					 Descuento=total*desc;
					 Neto=total-Descuento;
					 C_Neto=C_Neto+Neto;
		     	     cout<<"Reporte Vta------"<<endl;
		     	     cout<<"# Paquetes :  "<<cancun<<endl;
		     	     cout<<"Precio     :  "<<precio<<endl;
		     	     cout<<"# Personas :  "<<personas<<endl;
		     	     cout<<"Sub Total  :  "<<total<<endl;
		     	     cout<<"Descuento  :  "<<Descuento<<endl;
		     	     cout<<"A pagar    :  "<<Neto<<endl;
				}break;	 
			}
	}while (opcion!=4);	
	
	cout <<"\n\n-------- PAQUETES VENDIDOS ------------"<<endl;
    cout <<" Paquetes de Punta Cana   :   "<<puntacana<<endl;
    cout <<" Monto Total Vta          :   "<<P_Neto<<endl;
	cout <<" Paquetes de San Andres   :   "<<sanandres<<endl;
    cout <<" Monto Total Vta          :   "<<S_Neto<<endl;
	cout <<" Paquetes de Cancun       :   "<<cancun<<endl;
    cout <<" Monto Total Vta          :   "<<C_Neto<<endl;
    cout <<"------------------------------------------------"<<endl;
    
    
    
   return 0;
}
