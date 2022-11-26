/* 

Realice un programa donde se registre "n" veces la cantidad de productos consumidos en un restaurante, 
utilizar la estructura de control repetitiva FOR.

Utilice un Menú de Opciones para el registro, se adjunta los precios:

	Bocadillo de jamón= 3.5, Patatas fritas= 2.20, Refresco=3 y Cerveza=4.5
	
Utilice la funcion: double cuentaTotal(int bj,int pf,int r, int c) para generar la cuenta total a pagar.

 
*/
	
#include<iostream>
#include<math.h>
#include<locale.h>
#include<iomanip>
using namespace std;

double cuentaTotal(int bj,int pf,int r, int c);   //prototipo

int main()
{
	setlocale(LC_CTYPE, "Spanish");
	int n, i, pl, canti,can1=0,can2=0,can3=0,can4=0;
	float valor=0, igv=0, total=0;
	char opc;
	do{
		cout<<"Ingrese # unidades consumidas: ";    //3
		cin>>n; 
		if (n<0)
		   cout <<"Error, numero en negativo...";
	}while (n<0);
	    
	
	cout<<"\nIngrese Platillo consumido ";
	cout<<"\n---------------------------\n ";
	cout<<"\t1.Bocadillo de jamón      \n";
	cout<<"\t2.Patatas fritas \n";
	cout<<"\t3.Refresco       \n";
	cout<<"\t4.Cerveza        \n";
	cout<<"\t0.Salir          \n";
	for (i=1;i<=n;i++)      //i<=3
	
	{
		do 
		{
			cout<<"\nCódigo consumido: ";cin>>pl;     //-2 
			if (pl<0 ||pl>4)
			  cout<<"Codigo errado ...";
		}while (pl<0 ||pl>4);
		
		if (pl==0){
		   cout<<"Termino de ingresar (S/N)? ";cin>>opc;
		   if (opc=='s'||opc=='S')
		      i=n+2;
		   else{
		     cout<<"Vuelva a ingresar..."<<endl;
			 i--;} 
		}      
		else
		  do 
	   	  {
			 cout<<"Cantidad: ";cin>>canti;    
	   	 	 if (canti<0)
		   		cout <<"Error, numero en negativo...";
		  }while (canti<0);
		  
		  if (pl==1)
		     can1=can1+canti;     
		  if (pl==2)
		     can2=can2+canti;	
		  if (pl==3)
		     can3=can3+canti;    
		  if (pl==4)
		     can4=can4+canti;
	}	
	valor=cuentaTotal(can1,can2,can3,can4);     
	igv=valor*0.18;      
	cout<<"Igv         : "<<fixed<<setprecision(1)<<igv<<endl;	
	total=valor+igv;   
    cout<<"--------------------------------"<<endl;
	cout<<"\nLa cuenta total con IGV(18%) es: "<<fixed<<setprecision(2)<<total<<endl;
	cout<<endl<<endl;
	
	return 0;
}
   
double cuentaTotal(int bj,int pf,int r, int c)
{
	double monto, b,p,r1,c1;
	//cálculo del monto a pagar por producto: cantidad por precio
	b=(bj*3.5);    
	p=(pf*2.20);    
	r1=(r*3);      
	c1=(c*4.50);   
	
	//monto total a pagar
	monto=b+p+r1+c1;       
	
	if (monto!=0)
	cout<<"\n------ Consumo ---------"<<endl;
	if (b!=0)
		cout<<"Bocadillo de Jamón: "<<b<<endl;
	if (p!=0)  
		cout<<"Patatas fritas    : "<<p<<endl;
	if (r1!=0)  
		cout<<"Refresco          : "<<r1<<endl;
	if (c1!=0)  
		cout<<"Cerveza           : "<<c1<<endl;
	cout<<"--------------------------------"<<endl;
	cout<<"Monto Bruto  : "<<monto<<endl;
		
	return monto;       
}

