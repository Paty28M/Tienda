#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <iomanip>
#include <string.h>
using namespace std;

struct tienda{
	char producto [10];
	float costo;
	char marca;
	int clave;
	int productorepetido;
	}mitienda[0];

int main(){
int claveProducto, compras, b;
int total=0;
    	cout<<"Creado por: Sandra Patricia Martinez Legorreta"<<endl;
	cout<<"ICO-22"<<endl;
	cout<<"ESTRUCUTURAS DE DATOS"<<endl;
    for (int i=0;i<10;i++){
    cout<<"Nombre del producto:";
	cin.getline (mitienda[i].producto,10,'\n');
	cin.getline (mitienda[i].producto,10,'\n');
    cout<<"Costo del producto:";
	cin>>mitienda[i].costo;
	cout<<"Marca del producto:";
	cin.getline (mitienda[i].marca,10,'\n');
	cin.getline (mitienda[i].marca,10,'\n');
	cout<<"Clave del producto:";
	cin>>mitienda[i].clave;
	i=i+1;

	}
system("cls");


	for (int i=0;i<10;i++)
{

cout<<"Producto:"<<mitienda[i].producto
                 <<"\t Costo:"<<mitienda[i].costo
                 <<"\t Marca:"<<mitienda[i].marca
	         <<"\t Clave:"<<mitienda.clave<<endl;
i=i+1;
	}

cout<<"¿Cuantos Productos desea comprar?"<<endl;
cin>>compras;
for (int i=0;i<compras;i++){
cout<<"Escribe la clave del producto que deseas comprar: "<<endl;
cin>>claveProducto;
cout<<"Cuantas veces desea comprar este producto:"<<endl;
cin>>b;

for (int i=0;i<10;i++){
if (claveProducto == mitienda[i].clave){
        if (b>mitienda[i].productorepetido){
            cout<<"No contamos con suficientes productos escriba  una 
cantidad menor a"<<mitienda[i].productorepetido<<endl;
            cout<<"Cuantas veces desea repetir el producto:"<<endl;
            cin>>b;
        }

    total= total+(mitienda[i].costo*b);

	}

	}}
	cout<<endl;
	cout<<"\nEl costo total es:"<<total<<endl;
return 0;
}
