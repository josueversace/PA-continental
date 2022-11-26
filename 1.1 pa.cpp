/******************************************************************************

     Registro:
1.	El ingreso del tipo de juguete. (debe validar que sólo sea: A, B, C, D)
2.	El ingreso del tipo de cliente. (A – Vip   B – Regular)
3.	El ingreso de la cantidad a comprar de juguetes. (debe validar que la cantidad sea mayor a cero).
4.	Actualizar el stock de los productos vendidos con la nueva cantidad, siempre que cuente con stock. En caso de que la cantidad sea mayor al stock, se puede dejar de atender o se puede atender solo una parte (la indicada por el cliente) o se puede atender todo siempre y cuando se actualice el stock.
5.	Revisar si el stock se mantiene por encima del stock mínimo, caso contrario solicitar actualizar stock y enviar un mensaje en pantalla: “Actualizando Stock Mínimo”.
6.	Debe mostrar en pantalla los montos por cada ingreso:
•	MontoBruto=cantidad * precio
•	MontoDescuento=MontoBruto * descuento
•	Total=MontoBruto-MontoDescuento
•	TotalPagar=Total*1.18

Reportar:
1.	La cantidad de juguetes que se vendió del tipo A-Juguetes de goma.
2.	La cantidad de clientes atendidos (solo si se completó todo el pedido).
3.	La cantidad de veces que se actualizo el stock mínimo.
4.	El monto acumulado del total vendido de cada producto.
5.	El monto acumulado de ventas del tipo de juguetes de plástico.
6.	El monto valorizado en stock final de cada producto.
*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "spanish");

    char tipocliente, tipojuguete, continua;
    double precioProd = 0, PorcDscto = 0, MontoBruto = 0, MontoDscto = 0;
    double Total = 0, TotalPago = 0;
    int cantProd;
    int stockA = 300, stockB = 150, stockC = 250, stockD = 350;
    int stockAmin = 20, stockBmin = 30, stockCmin = 40, stockDmin = 50;
    int clienteatendido = 0, clienteNOatendido = 0;
    int cantidadvendidaA = 0, cantidadvendidaB = 0, cantidadvendidaC = 0, cantidadvendidaD = 0;
    int actualizacionStock = 0;
    int acumuladoA = 0, acumuladoB = 0, acumuladoC = 0, acumuladoD = 0;
    double montoacumuladoA = 0, montoacumuladoB = 0, montoacumuladoC = 0, montoacumuladoD = 0;
    double montostockA = 0, montostockB = 0, montostockC = 0, montostockD = 0;
    int opcion = 0, actstock=0, nvacantidad=0, continuarcompra =0;

    do
    {
           
    cout << "\n\n========== Menu de Opciones =========" << endl;
    cout << "1. Registrar venta" << endl;
    cout << "2. Reportes" << endl;
    cout << "3. Salir   " << endl;
    cout << "=====================================" << endl;
    cout << "Su opcion: ";
    cin >> opcion;

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
                cout << "\nError!, ingreso tipo errado..." << endl;
            }

        } while (tipojuguete != 'A' && tipojuguete != 'B' && tipojuguete != 'C' && tipojuguete != 'D' && tipojuguete != 'a' && tipojuguete != 'b' && tipojuguete != 'c' && tipojuguete != 'd');
        
        switch (tipojuguete)
        {
        case 'a':
        case 'A':
            {
            do
            {
                do
                {
                    cout << "\nIngrese cantidad de juguetes a comprar: ";
                    cin >> cantProd;
                    if (cantProd <= 0)
                        cout << "\nError, ingreso dato negativo ...";

                } while (cantProd <= 0);

                if (cantProd > (stockA - stockAmin))
                {
                    cout << "\n\nNo hay stock disponible!" << endl;
                    cout << "\n Actualizar stock 1. SI  2. NO:    " << endl;
                    cin >> actstock;

                    if (actstock == 1)
                    {
                        do
                        {
                            cout << "\nCantidad para añadir al stock:   ";
                            cin >> nvacantidad;
                            if (nvacantidad <= 0)
                                cout << "\nError, ingreso dato negativo ...";
                            if (nvacantidad > 0)
                                stockA = stockA + nvacantidad;
                                cout << "\n=================="<<endl;
                                cout << "Actualizando stock"<<endl;
                                cout << "==================" << endl;

                                actualizacionStock++;

                        } while (nvacantidad <= 0);
                    }

                    if (actstock != 1)
                        break;
                    
                }

                cout << "Desea registrar otra venta del mismo producto? (S/N):  ";
                cin >> continua;                

            } while (continua == 'S' || continua == 's');

            if (cantProd > 4)
            {
                precioProd = 15;
                PorcDscto = 0.06;
                montoacumuladoA = montoacumuladoA + ((cantProd * precioProd) * (1 - PorcDscto));
            }

            if (cantProd < (stockA - stockAmin))
            {
                precioProd = 15;
                stockA = stockA - cantProd;
                clienteatendido++;
                cantidadvendidaA = cantidadvendidaA + cantProd;
                acumuladoA++;
                montostockA = stockA * precioProd;
            
            }
            
                break;
            
            }break;

        case 'b':
        case 'B':
            {
            do
            {
                do
                {
                    cout << "\nIngrese cantidad de juguetes a comprar: ";
                    cin >> cantProd;
                    if (cantProd <= 0)
                        cout << "\nError, ingreso dato negativo ...";

                } while (cantProd <= 0);

                if (cantProd > (stockB - stockBmin))
                {
                    cout << "\n\nNo hay stock disponible!" << endl;
                    cout << "\n Actualizar stock 1. SI  2. NO:    " << endl;
                    cin >> actstock;

                    if (actstock == 1)
                    {
                        do
                        {
                            cout << "\nCantidad para añadir al stock:   ";
                            cin >> nvacantidad;
                            if (nvacantidad <= 0)
                                cout << "\nError, ingreso dato negativo ...";
                            if (nvacantidad > 0)
                                stockB = stockB + nvacantidad;

                            actualizacionStock++;

                        } while (nvacantidad <= 0);
                    }

                    if (actstock != 1)
                        break;
                    
                }

                cout << "Desea registrar otra venta del mismo producto? (S/N):  ";
                cin >> continua;                

            } while (continua == 'S' || continua == 's');

            if (cantProd > 9)
            {
                precioProd = 22;
                PorcDscto = 0.05;
                montoacumuladoB = montoacumuladoB + ((cantProd * precioProd) * (1 - PorcDscto));
            }

            if (cantProd < (stockB - stockBmin))
            {
                precioProd = 22;
                stockA = stockA - cantProd;
                clienteatendido++;
                cantidadvendidaB = cantidadvendidaB + cantProd;
                acumuladoB++;
                montostockB = stockB * precioProd;
            
            }
            
                break;
            
            }break;

        case 'c':
        case 'C':
            {
            do
            {
                do
                {
                    cout << "\nIngrese cantidad de juguetes a comprar: ";
                    cin >> cantProd;
                    if (cantProd <= 0)
                        cout << "\nError, ingreso dato negativo ...";

                } while (cantProd <= 0);

                if (cantProd > (stockC - stockCmin))
                {
                    cout << "\n\nNo hay stock disponible!" << endl;
                    cout << "\n Actualizar stock 1. SI  2. NO:    " << endl;
                    cin >> actstock;

                    if (actstock == 1)
                    {
                        do
                        {
                            cout << "\nCantidad para añadir al stock:   ";
                            cin >> nvacantidad;
                            if (nvacantidad <= 0)
                                cout << "\nError, ingreso dato negativo ...";
                            if (nvacantidad > 0)
                                stockC = stockC + nvacantidad;

                            actualizacionStock++;

                        } while (nvacantidad <= 0);
                    }

                    if (actstock != 1)
                        break;
                    
                }

                cout << "Desea registrar otra venta del mismo producto? (S/N):  ";
                cin >> continua;                

            } while (continua == 'S' || continua == 's');

            if (cantProd > 6)
            {
                precioProd = 30;
                PorcDscto = 0.06;
                montoacumuladoC = montoacumuladoC + ((cantProd * precioProd) * (1 - PorcDscto));
            }

            if (cantProd < (stockC - stockCmin))
            {
                precioProd = 30;
                stockC = stockC - cantProd;
                clienteatendido++;
                cantidadvendidaC = cantidadvendidaC + cantProd;
                acumuladoC++;
                montostockC = stockC * precioProd;
            
            }
            
                break;
            
            }break;
        
        case 'd':
        case 'D':
            {
            do
            {
                do
                {
                    cout << "\nIngrese cantidad de juguetes a comprar: ";
                    cin >> cantProd;
                    if (cantProd <= 0)
                        cout << "\nError, ingreso dato negativo ...";

                } while (cantProd <= 0);

                if (cantProd > (stockD - stockDmin))
                {
                    cout << "\n\nNo hay stock disponible!" << endl;
                    cout << "\n Actualizar stock 1. SI  2. NO:    " << endl;
                    cin >> actstock;

                    if (actstock == 1)
                    {
                        do
                        {
                            cout << "\nCantidad para añadir al stock:   ";
                            cin >> nvacantidad;
                            if (nvacantidad <= 0)
                                cout << "\nError, ingreso dato negativo ...";
                            if (nvacantidad > 0)
                                stockD = stockD + nvacantidad;

                            actualizacionStock++;

                        } while (nvacantidad <= 0);
                    }

                    if (actstock != 1)
                        break;
                    
                }

                cout << "Desea registrar otra venta del mismo producto? (S/N):  ";
                cin >> continua;                

            } while (continua == 'S' || continua == 's');

            if (cantProd > 7)
            {
                precioProd = 35;
                PorcDscto = 0.07;
                montoacumuladoD = montoacumuladoD + ((cantProd * precioProd) * (1 - PorcDscto));
            }

            if (cantProd < (stockA - stockAmin))
            {
                precioProd = 35;
                stockD = stockD - cantProd;
                clienteatendido++;
                cantidadvendidaD = cantidadvendidaD + cantProd;
                acumuladoD++;
                montostockD = stockD * precioProd;
            
            }
            
                break;
            
            }break;

        
        }
        MontoBruto = cantProd * precioProd;
        MontoDscto = MontoBruto * PorcDscto;
        Total = MontoBruto - MontoDscto;
        TotalPago = Total * 1.18;

        cout << "\n==========RESUMEN DE COMPRA========= " << endl;
        cout << "Monto bruto:...................." << MontoBruto << endl;
        cout << "Descuento(-):..................." << MontoDscto << endl;
        cout << "Total:.........................." << Total << endl;
        cout << "TotalPago:......................" << TotalPago << endl;

        }break; 


    case 2:
        cout << "\n_________________________________ " << endl;
        cout << "\n==============REPORTE============ " << endl;
        cout << "\n--------------------------------- " << endl;
        cout << "1.Cantidad juguetes tipo A:.." << cantidadvendidaA << endl;
        cout << "2.Clientes atendidos:........" << clienteatendido << endl;
        cout << "3.Ctd actualizacion stock:..." << actualizacionStock << endl;
        cout << "4.Monto acumulado vendido:" << endl;
        cout << "  A- Juguetes de goma ......." << montoacumuladoA << endl;
        cout << "  B- Juguetes de trapo......." << montoacumuladoB << endl;
        cout << "  C- Juguetes de plastico...." << montoacumuladoC << endl;
        cout << "  D- Juguetes de madera......" << montoacumuladoD << endl;
        cout << "_________________________________ " << endl;
        cout << "\n\nAcumulado venta Juguete Plastico:" << endl;
        cout << "  C- Juguetes de Plastico ......." << montoacumuladoC << endl;
        cout << "_________________________________ " << endl;
        cout << "\n\nMonto Valorizado de stock restante:" << endl;
        cout << "  A- Juguetes de goma ......." << montostockA << endl;
        cout << "  B- Juguetes de trapo......." << montostockB << endl;
        cout << "  C- Juguetes de plastico...." << montostockC << endl;
        cout << "  D- Juguetes de madera......" << montostockD << endl;
        cout << "_________________________________ " << endl;
        break;

    case 3:
        cout << "Gracias, vuelva pronto!!!" << endl;
        break;    

    default:
        cout << "Ingreso dato errado..." << endl;
        break;

    }

    } while (opcion != 3);

    return 0;
}
