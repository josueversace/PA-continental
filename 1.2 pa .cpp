/******************************************************************************
ejercicio 1.2
Se pide registrar las ventas de cursos en línea con los siguientes datos: nombre del estudiante, género (M o F), curso (1. Inglés básico, 2. Inglés Intermedio, 3. Inglés Avanzado, 4. Inglés de Negocios), Pago (1. Efectivo, 2. Tarjeta), Edad (entre 0 a 120), el precio de curso es 560, y cantidad de cursos, y que reporte:

•	El número de ventas de cursos de Inglés Intermedio
•	El número de mujeres que se matricularon.
•	El número de hombres con pagos en Tarjeta
•	El número de mujeres con edades entre 18 a 35.
•	El monto total de pagos realizados.
•	La edad promedio de las mujeres que estudian Inglés básico.
•	El monto total de pago en efectivo.
*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "spanish");
    string nombre;
    int numventas = 0, ctdmujeres = 0, tipocurso = 0, tipopago = 0;
    int pagotarjeta = 0, pagoefectivo = 0, ctdhombres = 0;
    int edad = 0, totalpagos = 0, cantidadcursos=0;
    float preciocurso = 560, montototalpagos;
    char genero;
    char continua;
    int totalcurso2 = 0, hombretarjeta = 0;
    int opcion, masde18 = 0, registro = 0, totalefectivo = 0, totalventas = 0;

    do
    {
        cout << "\n\n----- Menu de Opciones -----" << endl;
        cout << "1. Registrar alumno" << endl;
        cout << "2. Reportes" << endl;
        cout << "3. Salir   " << endl;
        cout << "--------------------------------" << endl;
        cout << "Su opcion: ";
        cin >> opcion;
        switch (opcion)
        {
            case 1:
                {                   
                cout<<"Ingrese el nombre  :";
    			cin>> nombre;

                do
                {
                    cout << "Ingrese genero (M o F) : ";
                    cin >> genero;
                    if (genero != 'M' && genero != 'm' && genero != 'f' && genero != 'F')
                    {
                        cout << "Error, ingreso genero incorrecto..." << endl;
                    }
                } while (genero != 'M' && genero != 'm' && genero != 'f' && genero != 'F');

                do
                {
                    cout << "Ingrese edad : ";
                    cin >> edad;
                    if (edad < 0 || edad > 120)
                        cout << "Error, ingreso dato errado..." << endl;
                } while (edad < 0 || edad > 120);
                
                
                
                do
                {
                    cout << "Ingrese Tipo de Curso : 1. Basico  2. Intermedio 3. Avanzado  4. Negocios: ";
                    cin >> tipocurso;
                    if (tipocurso < 0 || tipocurso > 4)
                        cout << "Error, ingreso dato errado..." << endl;
                } while (tipocurso < 0 || tipocurso > 4);

                do
                {
                    cout << "Ingrese Forma de Pago : 1.Efectivo  2.Tarjeta:  ";
                    cin >> tipopago;
                    if (tipopago < 0 || tipopago > 2)
                        cout << "Error, ingreso dato errado..." << endl;
                } while (tipopago < 0 || tipopago > 2);

                do
                {
                    cout << "Ingrese cantidad :  ";
                    cin >> cantidadcursos;
                    if (cantidadcursos < 0)
                        cout << "Error, ingreso dato errado..." << endl;
                } while (cantidadcursos < 0);

                if (cantidadcursos > 2)
                {
                    totalcurso2 = totalcurso2 + cantidadcursos -1;
                }

                if (tipopago == 2)
                {
                    pagotarjeta++;                        
                }

                if (tipopago == 1)
                {
                    pagoefectivo++;
                }

                if (tipocurso == 2)
                {
                    totalcurso2++;
                }

                if (genero == 'm' || genero == 'M')
                {
                    ctdhombres++;
                    if (tipopago == 2)
                    {
                        hombretarjeta++;
                    }
                }

                if (genero == 'f' || genero == 'F')
                {
                    ctdmujeres++;
                    if (edad > 17 || edad < 35)
                    {
                        masde18++;
                    }
                }
                
                registro++;
                totalventas = registro * preciocurso;
                totalefectivo = pagoefectivo * preciocurso;
                montototalpagos = pagoefectivo + pagotarjeta;
                }break;

            case 2:
                {
                    cout << "\n\n--------- REPORTE DEL DIA  -----------" << endl;
                    cout << " Ctd Ingles Intermedio             :   " << totalcurso2 << endl;
                    cout << " Ctd Mujeres                       :   " << ctdmujeres << endl;
                    cout << " Ctd Hombres pagaron c/tarjeta     :   " << hombretarjeta << endl;
                    cout << " Mujeres con edades entre 18 y 35  :   " << masde18 << endl;
                    cout << " Monto total de pagos              :   " << montototalpagos << endl;
                    cout << " Monto total pago efectivo         :   " << totalefectivo << endl;
                }
                break;

            case 3:
                cout << "Gracias, vuelva pronto!!!" << endl;
                break;

            default:
                cout << "Ingreso dato errado..." << endl;
        }

    } while (opcion != 3);

    return 0;
}
