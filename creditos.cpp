 /*
 Elaborar un programa que muestre el nivel de avance de un estudiante dentro de la universidad.
 La cantidad acumulada de créditos debe ser mayor igual a cero y como máximo 160 
 Creditos acumulados     Año Académico
   Menos de 32            Primer año
   entre 32 a 63          Segundo año
   entre 64 a 95          Tercer año
   entre 96 a 127         Cuarto año
   entre 128 a mas        Quinto año
*/


#include<iostream>
using namespace std;

int main(){
 
  setlocale(LC_CTYPE,"Spanish");  
  
  //Declaracón de Variables
  int creditos=0, precio=100,montoapagar=0;
  
  
  //Entrada de Datos
  cout<<"Ingrese los créditos acumulados: ";
  cin>>creditos;
  //Validación
  if (creditos>=0 && creditos<160)
  {  if (creditos<32)
        cout << " Primer año";
  	 if (creditos>=32 && creditos<=63)
  	   cout << " Segundo año";
  	 if (creditos>=64 && creditos<=95)
  	   cout << " Tercer año";
  	 if (creditos>=96 && creditos<=127)
  	   cout << " Cuarto año";
  	 if (creditos>=128)
        cout << " Quinto año";
  	//Proceso
  	 
  	 montoapagar=creditos*precio;
  	 
  	 //Salida de Datos
  	 cout<<"\n\n-------- REPORTE -----------------"<<endl;
     cout<<"Precio x Crédito:  "<<precio<<endl;
     cout<<"Creditos Acum   :  "<<creditos<<endl;
     cout<<"----------------------------------"<<endl;
     cout<<"Monto a pagar   :  "<<montoapagar<<endl;
  	
  }
  else
    cout<<"Ingreso errado ... debe ser mayor a 0";
    
  return 0;
}
