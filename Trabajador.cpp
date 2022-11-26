 /*
 A un trabajador le descuentan de su sueldo el 10% si su sueldo es menor o igual a 1000. 
 por encima de 1000  y hasta 2000 el 15%, 
 y por encima de 2000 el 20%. 
 Calcular el descuento y sueldo neto que recibe el trabajador dado su sueldo 
*/


#include<iostream>
using namespace std;

int main(){
 
  setlocale(LC_CTYPE,"Spanish");  
  
  //Declaracón de Variables
  float sueldo=0, desc=0, montodesc=0, nsueldo=0;
  
  //Entrada de Datos
  cout<<"Ingrese su sueldo: ";
  cin>>sueldo;
  
  if (sueldo>=0)
  {
  	 if (sueldo>=0 && sueldo<=1000)
  	   desc=0.10;
  	 if (sueldo>1000 && sueldo<=2000)
  	   desc=0.15;
  	 if (sueldo>2000)
  	   desc=0.20;
  	
  	 montodesc=sueldo*desc;
  	 nsueldo=sueldo-montodesc;
  	 
  	 cout<<"-------- REPORTE -----------------"<<endl;
     cout<<"Sueldo (+)      :  "<<sueldo<<endl;
     cout<<"Monto Desct.(-) :  "<<montodesc<<endl;
     cout<<"----------------------------------"<<endl;
     cout<<"Sueldo a pagar   :  "<<nsueldo<<endl;
  	
  }
  else
    cout<<"Ingreso un sueldo errado ...";
    
  return 0;
}
