#include<iostream>
using namespace std;

int main()
{  
    setlocale(LC_ALL,"spanish");
     char categoria;
     float totales=0, monto=0, recargo=0, total=0, total_A=0,total_B=0,total_M=0,total_E=0;
     int regA=0, regB=0, regM=0, regE=0, opcion=0;
     
    
    do 
    {
    	cout<<"\n\n----- Men� de Reporte -----"<<endl;
		cout<<"1. Registrar"<<endl;
		cout<<"2. Reportes"<<endl;
		cout<<"3. Salir   "<<endl;
		cout<<"--------------------------------"<<endl;
		cout<<"Su opci�n: ";
		cin>>opcion;
		switch (opcion)
    	{
    		case 1:
    			{				
	    		    do
	    			{
	    				cout <<"Categor�a Mascota : A. Alto B.Bajo M. Mediano E.Enano: ";
	    				cin>>categoria;
	    				if (categoria!='A'&& categoria!='a'&& categoria!='B'&& categoria!='b'&& categoria!='M'&& categoria!='m'&&categoria!='E'&&categoria!='e')
	    				  cout<<"Error, ingreso categor�a errado..."<<endl;	  
					}while (categoria!='A'&& categoria!='a'&& categoria!='B'&& categoria!='b'&& categoria!='M'&& categoria!='m'&&categoria!='E'&&categoria!='e');
					   
					do
	    			{
	    				cout <<"Ingrese monto : ";
	    				cin>>monto;
	    				if (monto<0)
	    				  cout<<"Error, ingreso monto negativo ..."<<endl;	  
					}while (monto<0);
					
					 switch (categoria)
					 {
					 	case 'A':
					 	case 'a':
					 		{ cout<<"\nTalla del perro es Alto ";
					 		  total=monto+(monto*0.15);
					 		  cout<<"Monto a Pagar es :"<<total<<endl;
					 		  regA++;
					 		  total_A=total_A+total;
							 }break;
					 	case 'B':
					 	case 'b':
					 		{ cout<<"\nTalla del perro es Bajo ";
					 		  total=monto+(monto*0.08);
					 		  cout<<"Monto a Pagar es :"<<total<<endl;
					 		  regB++;
					 		  total_B=total_B+total;
							 }break;
					    case 'M':
					 	case 'm':
					 		{ cout<<"\nTalla del perro es Mediano ";
					 		  total=monto+(monto*0.12);
					 		  cout<<"Monto a Pagar es :"<<total<<endl;
					 		  regM++;
					 		  total_M=total_M+total;
							 }break;
							 
					    case 'E':
					 	case 'e':
					 		{ cout<<"\nTalla del perro es Enano ";
					 		  total=monto+(monto*0.05);
					 		  cout<<"Monto a Pagar es :"<<total<<endl;
					 		  regE++;
					 		  total_E=total_E+total;
							 }break;
					 }
				    
				}break;
				
			case 2:
				{
					totales=total_A+total_M+total_E+total_B;
					cout <<"\n\n-------- VENTAS DEL DIA  ------------"<<endl;
				    cout <<" Clientes atendidos          :   "<<regA+regB+regM+regE<<endl;
				    cout <<" Monto Total Vta             :   "<<totales<<endl;
				    cout <<" Venta Categoria Alta        :   "<<total_A<<endl;
				    cout <<" Venta Categoria Mediano     :   "<<total_M<<endl;
				    cout <<" Venta Categoria Bajo        :   "<<total_B<<endl;
				    cout <<" Venta Categoria Enano       :   "<<total_E<<endl;
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


   
   
