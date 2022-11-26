#include <iostream>
using namespace std;


int leedatoe()
{
	int dato;
	cin>>dato;
	return dato;
}

float leedatof()
{
	float dato;
	cin>>dato;
	return dato;
}

char leedatoc()
{
	char dato;
	cin>> dato;
	return dato;
}
void Venta()
{
	int cant=0, tipo=0;
	float precio=0, dscto=0, MBruto=0, MDcto=0, Mtotal=0;
	
	cout<<"\n\n";
	cout<<"\t\t --- REALIZAR VENTA -----";
	cout<<"\n\n";
	do{
		cout<<endl<<"\t\t Ingrese cantidad: \t\t";
		cant = leedatoe();
		if (cant<=0)
		   cout<<"Error. Debe ser >0";
	}while (cant<=0);
	
	do{
		cout<<endl<<"\t\t Ingrese precio: \t\t";
		precio = leedatof();
		if (precio<=0)
			cout<<"Error. Debe ser >0";		
	}while (precio<=0);
	
	if (cant>100)
	   dscto=0.4;
	else
	   if (cant>25 and cant<=100)
	       dscto=0.2;
	    else
	     	if (cant>10 and cant<=25)
	           dscto=0.1;
	        else
	       	    if ( cant<=10)
	       		   dscto=0;
	       		   
	MBruto=cant*precio;
	MDcto=dscto*MBruto;
	Mtotal= MBruto - MDcto;
	
	cout<<endl;
	cout<<"\t\t El monto bruto es:\t"<<MBruto<<endl;
	cout<<"\t\t El monto descuento es:\t"<<MDcto<<endl;
	cout<<"\t\t El monto total es:\t"<<Mtotal<<endl;
	system ("pause");
}

int Menu()
{
	int op;
	do{
		//system ("cls");
		cout<<"\n\n";
		cout<<"\t\t --------------- MENU --------------";
		cout<<"\n";
		cout<<"\t\t 1.Procesar"<<endl;
		cout<<"\t\t 2.Salir "<<endl;
		cout<<"\n";
		cout<<"\t\t Ingrese opción (1 o 2): \t";
		op=leedatoe();
		
		if (op<1 or op>2)
		   cout <<"\t\t ERROR. Vuelve a Ingresar.";
		   
	}while (op<1 or op>2);
	
	switch (op)
	{
		case 1:{
				Venta();
				cout<<"\n";
			   }break;
		case 2:{
				cout<<"\n";
				cout<<"\t\t Gracias... Vuelva pronto..!\n\n";
				cout<<"\n";
				//system ("pause");
				}break;
	}
	return op;
}

int main()
{
    setlocale (LC_CTYPE, "Spanish");
	int rpta;
	
	do{
		rpta=Menu();
		
	}while(rpta==1);
	
	return 0;
}













