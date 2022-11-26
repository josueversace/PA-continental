/*
1.	Escriba un programa en código C++ para que una ONG ABC pueda registrar los montos de las donaciones recibidas por cada empresa 
   (tipo de  empresa: 1, 2 y 3).  
"	Si la empresa es tipo 1 se distribuye el monto registrado como se indica: 35% para temas de medicamentos, 25% para temas de vivienda y 
    el 40% será para alimentos.
"	Si la empresa es tipo 2 se distribuye el monto registrado como se indica: 40% para temas de medicamentos, 15% para temas de vivienda y 
    el 45% será para alimentos.
"	Si la empresa es tipo 3 no se distribuye el monto.

Se mostrará en pantalla los montos asignados para medicamentos, vivivenda y alimentos.
Recuerde de validar los datos que se ingresan.

*/


#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    //setlocale(LC_CTYPE,"Spanish");  //acentos
    
    //Declaración de Variables
    int tipo=0;
    float monto=0, medicamento=0, vivienda=0, alimentos=0;
    
    //Datos de entrada
    cout<<"Ingrese el tipo de empresa (1,2,3) : ";
    cin>>tipo;
    if (tipo>=1 && tipo<=3)
    {
      cout<<"Ingrese monto a donar: ";
      cin>>monto;
      //if (monto>0)
   //   {
	      switch (tipo)
	      {

	      	case 1: {
	      		medicamento=monto*.35;
	      		vivienda=monto*0.25;
	      		alimentos=monto*0.4;
	      		
				break;
			    }
			case 2:
				{ medicamento=monto*.40;
	      		  vivienda=monto*0.15;
	      		  alimentos=monto*0.45;
	      		
				break;
				}
			default: cout<<"Monto no se distribuye...";
		  }
		  
		  
		  cout<<"\n------- Distribución ----------"<<endl;
		  cout<<"Medicamentos    "<<medicamento<<endl;
		  cout<<"Vivienda        "<<vivienda<<endl;
		  cout<<"Alimentos       "<<alimentos<<endl;
		  cout<<"------------------------------------"<<endl;
		  
		  
		  
	//  }
	//   else
    //  cout<<"Error... monto a donar negativo";
		
	}
	else
	   cout<<"Usted esta fuera de rango en tipo de empresa ...";
    
    
	 return 0;
	 
}
