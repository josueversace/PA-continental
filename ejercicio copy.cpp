#include<iostream>
using namespace std;

int main()
{  
    setlocale(LC_ALL,"spanish");
	setlocale(LC_ALL, "spanish");

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
						cout << "Ingrese tipo Cliente (A-Vip  B-Regular)";
						cin >> tipocliente;
						if (tipocliente != 'A' && tipocliente != 'a' && tipocliente != 'B' && tipocliente != 'b')
							cout << "Error, ingreso categor�a errado..." << endl;
					} while (tipocliente != 'A' && tipocliente != 'a' && tipocliente != 'B' && tipocliente != 'b');

					do
					{
						cout << "\nIngresa tipo de juguete:" << endl;
						cout << "A- Juguetes de goma " << endl;
						cout << "B- Juguetes de trapo" << endl;
						cout << "C- Juguetes de plastico" << endl;
						cout << "D- Juguetes de madera" << endl;
						cout << "Ingrese tipo de producto: ";
						cin >> tipojuguete;
						if (tipojuguete != 'A' && tipojuguete != 'B' && tipojuguete != 'C' && tipojuguete != 'D' && tipojuguete != 'a' && tipojuguete != 'b' && tipojuguete != 'c' && tipojuguete != 'd')
						{
							cout << "Error, ingreso tipo errado..." << endl;
						}
					} while (tipojuguete != 'A' && tipojuguete != 'B' && tipojuguete != 'C' && tipojuguete != 'D' && tipojuguete != 'a' && tipojuguete != 'b' && tipojuguete != 'c' && tipojuguete != 'd');

					switch (tipojuguete)
					{
					 	case 'A':
					 	case 'a':
							do
							{
								cout << "Ingrese tipo Cliente (A-Vip  B-Regular)";
								cin >> tipocliente;
								if (tipocliente != 'A' && tipocliente != 'a' && tipocliente != 'B' && tipocliente != 'b')
									cout << "Error, ingreso categor�a errado..." << endl;
							} while (tipocliente != 'A' && tipocliente != 'a' && tipocliente != 'B' && tipocliente != 'b');

							do
							{
								cout << "\nIngresa tipo de juguete:" << endl;
								cout << "A- Juguetes de goma " << endl;
								cout << "B- Juguetes de trapo" << endl;
								cout << "C- Juguetes de plastico" << endl;
								cout << "D- Juguetes de madera" << endl;
								cout << "Ingrese tipo de producto: ";
								cin >> tipojuguete;
								if (tipojuguete != 'A' && tipojuguete != 'B' && tipojuguete != 'C' && tipojuguete != 'D' && tipojuguete != 'a' && tipojuguete != 'b' && tipojuguete != 'c' && tipojuguete != 'd')
								{
									cout << "Error, ingreso tipo errado..." << endl;
								}

							} while (tipojuguete != 'A' && tipojuguete != 'B' && tipojuguete != 'C' && tipojuguete != 'D' && tipojuguete != 'a' && tipojuguete != 'b' && tipojuguete != 'c' && tipojuguete != 'd');

							switch (tipojuguete)
							{
								case 'a':
								case 'A':
							}
				}
					break;

			case 2:
				{
					cout <<"\n\n-------- VENTAS DEL DIA  ------------"<<endl;
				    cout <<" Clientes atendidos          :   "<<endl;
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


   
   
