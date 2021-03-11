#include <iostream>
#include <ctime>
#include <fstream>
#include "Numarreglo.h"
#include "ordenar.h"
#include "repeticion.h"
#include "lineal.h"
using namespace std;
void menu();
//Funciones Ejercicio 1
void imprimir(int arr[], int tam);
//Funciones Ejercicio 2
void dividir(int a[], int inicial, int fin);
void fusionar(int a[],int pinicial,int pfinal,int medio);
//Funciones Ejercicio 3
int main() {
 int a, num1,num2;
 int numeros[500];
 int tam;
 ofstream archivo1;
 archivo1.open("ejercicio1.txt",ios::app);
 ofstream archivo2;
 archivo2.open("ejercicio2.txt",ios::app);
 int ce,el,aux;
 int matr[100];
 ofstream archivo3;
 string nombrearchivo;
 string nombre,estado;
 string nombreP,cuidad,codigo;
 int telefono;
 int cantidad,cantidad1;
 float precio,precio1,precio2;
 char r;
 int suma,cont,nProductos,valor;
 int op;
 cout<<endl<<"\t\tTaller de Estructura de datos"<<endl;
 do{
 menu();
 scanf("%d",&op);
 switch(op){
 case 1:
 cout<<endl<<"Ingrese el tamaño del arreglo: ";
 cin>>a;
 archivo1<<endl<<"Tamaño del arreglo: "<<a<<endl<<"Arreglo: "<<endl;
 cout<<"Arreglo: "<<endl;
 Numeros_arreglo(numeros, a);
 imprimir(numeros, a);
 ordenar (numeros, a);
 num1 = repeticiones(numeros, a, numeros[0]);
 num2 = repeticiones(numeros, a, numeros[a-1]);
 cout<<"El numero menor es: "<<numeros[0]<<" No. Repeticiones:"<<num1<<endl;
 cout<<"El numero mayor es: "<<numeros[a-1]<<" No. Repeticiones:"<<num2<<endl;
 archivo1<<endl<<"El numero menor es: "<<numeros[0]<<" No. Repeticiones:"<<num1<<endl;
 archivo1<<"El numero mayor es: "<<numeros[a-1]<<" No. Repeticiones:"<<num2<<endl<<endl;
 archivo1.close();
 break;
 case 2:
 cout<<"Cantidad de elementos a ingresar: ";
 cin>>ce;
 archivo2<<endl<<"Tamaño del arreglo: "<<ce<<endl<<"Arreglo: "<<endl;
 for (int i=0;i<ce;i++){
 cout<<"Ingrese numero "<<i+1<<": ";
 cin>>matr[i];
 }
 cout<<endl<<"Matriz principal: ";
 archivo2<<"Matriz principal: ";
 for (int i=0;i<ce;i++){
 cout<<"│"<<matr[i]<<"│";
 archivo2<<"│"<<matr[i]<<"│";
 }
 cout<<endl;
 archivo2<<endl;
 cout<<endl<<"Matriz ordenada: ";
 archivo2<<"Matriz ordenada: ";
 dividir(matr,0,ce-1);
 for (int i=0;i<ce;i++){
 cout<<"│"<<matr[i]<<"│";
 archivo2<<"│"<<matr[i]<<"│";
 }
 cout<<endl<<"Elemento a buscar: ";
 cin>>el;
 archivo2<<endl<<"Elemento a buscar: "<<el;
 aux =busquedaLineal(matr,ce,el);
 if(aux!=-1) {
 cout<<endl<< "Su valor se encuentra en la posicion "<<aux<<endl;
 archivo2<<endl<<"Su valor se encuentra en la posicion "<<aux<<endl;
 }
 else {
 cout<<endl<<"Valor no encontrado";
 archivo2<<"Valor no encontrado";
 }
 archivo2.close();
 break;
 case 3:{
 cout<<"Ingrese el nombre del proveedor"<<endl;
 getline(cin,nombreP);
 cout<<"Ingrese la cuidad"<<endl;
 getline(cin,cuidad);
 cout<<"Ingrese el codigo"<<endl;
 getline(cin,codigo);
 cout<<"Ingrese el telefono"<<endl;
 cin>>telefono;
 cout<<"cuantos productos desea ingresar: ";
 cin>>nProductos;
 while(getchar()!='\n');
 archivo3.open("Productos.txt",ios::out);
 archivo3<<"*DATOS DEL PROVEEDOR**"<<endl;

archivo3<<"codigo"<<"\t\t"<<"nombre"<<"\t\t"<<"cuidad"<<"\t\t"<<"telefono"<<endl;
 archivo3<<codigo<<"\t\t"<<nombreP<<"\t\t"<<cuidad<<"\t\t"<<telefono<<"\t\t"<<endl;

 archivo3<<endl;
 archivo3<<endl;
 archivo3<<"*DATOS DEL PRODUCTO**"<<endl;

archivo3<<"nombre"<<"\t\t"<<"precio"<<"\t\t"<<"cantidad"<<"\t\t"<<"estado"<<endl;
 while(cont<nProductos)
 {
 cout<<"-----------------------------------------"<<endl;
 cout<<"ingrese nombre del producto "<<cont+1<<":"<<endl;
 getline(cin,nombre);
 cout<<"ingrese estado: "<<endl;
 getline(cin,estado);
 cout<<"ingrese el precio del producto: "<<endl;
 cin>>precio;
 cout<<"ingrese cantidad : "<<endl;
 cin>>cantidad;
 archivo3<<nombre<<"\t\t"<<precio<<"\t\t"<<cantidad<<"\t\t"<<estado<<"\t\t"<<endl;

 cont=cont+1;
 precio1=precio1+precio;
 cantidad1=cantidad1+cantidad;
 cin.ignore();
 }
 while(getchar()!='\n')
 archivo3<<endl;
 archivo3<<"\n El precio total de productos: "<<precio1<<endl;
 archivo3<<" Cantidad de productos ingresados: "<<nProductos<<endl;
 archivo3<<" El valor total: "<<precio1*nProductos<<endl;
 archivo3.close();
 //GUARDO LOS DATOS EN UN ARCHIVO

 ifstream archivolectura;
 string texto;
 archivolectura.open("Productos.txt",ios::in);
 while (!archivolectura.eof())
 {

 if(!archivo3.eof())
 {
 getline(archivolectura,texto);
 cout<<texto<<endl;
 }
 }
 archivolectura.close();
 }
 break;
 case 4:
 break;
 default:
 cout<<endl<<"La opcion ingresada es incorrecta"<<endl;
 break;
 }
 }while(op!=4);
}


void menu(){
 cout<<"=============================================";
 cout<<endl<<"\t\t\t\t\tMenu"<<endl;
 cout<<"1. Ejercicio 1"<<endl<<"2. Ejercicio 2"<<endl<<"3. Ejercicio 3"<<endl<<"4. Salir"<<endl;
 cout<<"=============================================";
 cout<<endl<<"Ingrese una opcion: ";
}

void imprimir(int arr[], int tam){
 ofstream archivo1;
 archivo1.open("ejercicio1.txt",ios::app);
 for(int i = 0; i < tam; i++)
 {
 cout <<"|"<< arr[i]<<"|";
 archivo1<<"|"<< arr[i]<<"|";
 }
 cout<<endl;
}


void dividir(int a[], int inicial, int fin)
{
 int mitad;
 if(inicial < fin)
 {
 mitad=(inicial+fin)/2;
 dividir(a,inicial,mitad);
 dividir(a,mitad+1,fin);
 fusionar(a,inicial,fin,mitad);
 }
}
void fusionar(int a[],int pinicial,int pfinal,int medio)
{
 int i,j,k, temp[pfinal-pinicial+1];
 i=pinicial;
 k=0;
 j=medio+1;
 while(i<=medio && j<=pfinal)
 {
 if(a[i]<a[j])
 {
 temp[k]=a[i];
 k++;
 i++;
 }
 else
 {
 temp[k]=a[j];
 k++;
 j++;
 }
 }
 while (i<=medio)
 {
 temp[k] = a[i];
 k++;
 i++;
 }
 while(j<=pfinal)
 {
 temp[k]=a[j];
 k++;
 j++;
 }
 for(i=pinicial; i<=pfinal; i++)
 {
   a[i]= temp[i-pinicial];
 }
}
