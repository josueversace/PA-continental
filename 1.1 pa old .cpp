/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
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
    int opcion = 0, Cantidadxsumar = 0;

    // Datos de entrada

    do
    {
        do
        {
            cout << "\nIngrese tipo Cliente (A-Vip  B-Regular)  : ";
            cin >> tipocliente;

            if (tipocliente == 'A' || tipocliente == 'B' || tipocliente == 'a' || tipocliente == 'b')
                do
                {
                    cout << "\nIngresa tipo de juguete:" << endl;
                    cout << "A- Juguetes de goma " << endl;
                    cout << "B- Juguetes de trapo" << endl;
                    cout << "C- Juguetes de plastico" << endl;
                    cout << "D- Juguetes de madera" << endl;
                    cout << "Ingrese tipo de producto: ";
                    cin >> tipojuguete;

                    // if(tipojuguete!='A'||tipojuguete!='B'||tipojuguete!='C'||tipojuguete!='D'||tipojuguete!='a'||tipojuguete!='b'||tipojuguete!='c'||tipojuguete!='d')
                    if (tipojuguete == 'A' || tipojuguete == 'B' || tipojuguete == 'C' || tipojuguete == 'D' || tipojuguete == 'a' || tipojuguete == 'b' || tipojuguete == 'c' || tipojuguete == 'd')
                    {

                        switch (tipojuguete)

                        {
                        case 'A':
                        case 'a':

                            do
                            {
                                cout << "\nIngrese cantidad de juguetes a comprar: ";
                                cin >> cantProd;
                                if (cantProd <= 0)
                                    cout << "Error, ingreso dato negativo ...";
                            } while (cantProd <= 0);

                            if (cantProd < stockA)
                            {
                                precioProd = 15;
                                stockA = stockA - cantProd;
                                clienteatendido++;
                                cantidadvendidaA = cantidadvendidaA + cantProd;
                                acumuladoA++;
                                montostockA = stockA * precioProd;

                                if (cantProd > 4)
                                {
                                    precioProd = 15;
                                    PorcDscto = 0.06;
                                    montoacumuladoA = montoacumuladoA + ((cantProd * precioProd) * (1 - PorcDscto));
                                }
                            }
                        }
                        break;
                    }

                    else
                    {
                        cout << "\nIngrese un tipo valido";
                    }

                } while (tipojuguete != 'A' || tipojuguete != 'B' || tipojuguete != 'C' || tipojuguete != 'D' || tipojuguete != 'a' || tipojuguete != 'b' || tipojuguete != 'c' || tipojuguete != 'd');

            else
            {
                cout << "Ingresa un tipo correcto:..";
            }

        } while (tipocliente != 'A', tipocliente != 'B', tipocliente != 'a', tipocliente != 'b');

        MontoBruto = cantProd * precioProd;
        MontoDscto = MontoBruto * PorcDscto;
        Total = MontoBruto - MontoDscto;
        TotalPago = Total * 1.18;

        cout << "\n==========RESUMEN========= " << endl;
        cout << "Monto bruto:........" << MontoBruto << endl;
        cout << "Descuento(-):......." << MontoDscto << endl;
        cout << "Total:.............." << Total << endl;
        cout << "TotalPago:.........." << TotalPago << endl;

        cout << "\nDesea registrar otra venta?(S/N): ";
        cin >> continua;

    } while (continua == 'S' || continua == 's');

    cout << "\n==============REPORTE============ " << endl;
    cout << "1.Cantidad juguetes tipo A:.." << cantidadvendidaA << endl;
    cout << "2.Clientes atendidos:........" << clienteatendido << endl;
    cout << "3.Ctd actualizacion stock:..." << actualizacionStock << endl;
    cout << "4.Monto acumulado vendido:" << endl;
    cout << "  A- Juguetes de goma ......." << montoacumuladoA << endl;
    cout << "  B- Juguetes de trapo......." << montoacumuladoB << endl;
    cout << "  C- Juguetes de plastico...." << montoacumuladoC << endl;
    cout << "  D- Juguetes de madera......" << montoacumuladoD << endl;

    cout << "\nAcumulado venta Juguete Plastico:" << endl;
    cout << "  C- Juguetes de Plastico ......." << montoacumuladoC << endl;

    cout << "\nMonto Valorizado de stock restante:" << endl;
    cout << "  A- Juguetes de goma ......." << montostockA << endl;
    cout << "  B- Juguetes de trapo......." << montostockB << endl;
    cout << "  C- Juguetes de plastico...." << montostockC << endl;
    cout << "  D- Juguetes de madera......" << montostockD << endl;

    return 0;
}
