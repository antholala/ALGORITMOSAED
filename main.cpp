#include <iostream>
#include <fstream>
using namespace std;
#define tam = 50

void menu();
///Primer ejer
int v[6];
void llamar();
void imprimir();
//Segundo ejer
void ingresar (int vector[], int tamanio);
void ordenar (int vector[], int tamanio);
void imprimir (int vector[], int tamanio);
//tercer ejer
void menu_banco();
void banco();
int banco_busqueda(float arr[]);
////
void arch_intercambiar();
void arch_ordenamiento(int arr[], int t);
void arch_cuenta(float arr[]);
void arch_cuenta_bus(float arr[], float monto);

int main() {
  int op;
  int vector1[100];
  int tamanio;
  cout<<"\n\t\t\t\tTrabajo En Grupo"<<endl;
  cout<<"\n\t\tAlgoritmos y Estructuras de Datos"<<endl;
  do{
    menu();
    cin>>op;
    switch(op){
      case 1:
      cout<<"\n**EJERCICIO 1**\n";
      llamar();
      imprimir();
          
      break;
      case 2:  
      cout<<"Ingresar el tamaño del vector: ";
      cin>>tamanio;
      ingresar(vector1,tamanio);
      cout<<endl;
      cout<<"Los elementos del vector son:"<<endl;
      imprimir(vector1,tamanio);
      cout<<endl;
      cout<<"Los elementos ordenados del vector son:"<<endl;
      ordenar(vector1,tamanio);
      cout<<endl;
      imprimir(vector1,tamanio);
      break;
      case 3:
        banco();
      break;
      case 4:
      break;
      default:
      cout<<"La opción ingresada es incorrecta";
      break;
    }


  }while(op!=4);
  
}

void menu(){
  cout<<"\n******************";
  cout<<"\n\t\t\t\t\tMenu"<<endl;
  cout<<"1.- Intercambio de posiciones de un vector\n2.- Ordenamiento de un vector\n3.- Cuenta de ahorros virtual Banco de Pichicha\n4.- Salir"<<endl;
  cout<<"****************"<<endl;
  cout<<"Ingrese una opcion: ";
}
///////////////////////////////////////////
void llamar()
{
for(int x=0; x<6;x++){
  cout<<"\nIngrese un numero "<<x+1<<":";
  cin>>v[x];
}
}

void imprimir()
{
 cout<<"\nLos valores introducidos, mostrados en orden inverso, son:\n";
 for (int j=5; j>=0; j--){
 cout<<"--"<<v[j];
 }

 arch_intercambiar();
 
}

void arch_intercambiar(){
  ofstream archivointercambiar;
  archivointercambiar.open("Intercambiar.txt", ios::app);

  archivointercambiar<<"\nValores introducidos\n";
  for (int j=0; j<6; j++){
    archivointercambiar<<"["<<v[j]<<"]";
  }
 archivointercambiar<<endl;   
  archivointercambiar<<"\nOrden Inverso:\n";

 for (int i=5; i>=0; i--)
 {archivointercambiar<<"["<<v[i]<<"]";}
   archivointercambiar<<endl<<endl; 
  archivointercambiar.close();
}
////////////////////////////////////////
void ingresar (int vector[], int tamanio)
{
    int i;

    for (int i=0 ; i<tamanio ; i++)
    {
        cout<<"Ingresar los elementos del vector "<<i+1<<": ";
        cin>>vector[i];
    }

}

void ordenar (int vector[], int tamanio)
{
    int aux;
    for (int i=0 ; i<tamanio ; i++)
    {
        for(int j=i+1 ; j<tamanio ; j++)
        {
            if(vector[j]<vector[i])
            {
                aux=vector[i];

                vector[i]=vector[j];

                vector[j]=aux;
            }
        }
    }
}


void imprimir(int vector[], int tamanio)
{
    int i;
    for (i=0 ; i<tamanio; i++)
    {     
        cout<<"|"<<vector[i]<<"|";
    }
    arch_ordenamiento(vector, tamanio);
}
void arch_ordenamiento(int arr[], int t){
ofstream archivoordenamiento;
archivoordenamiento.open("Ordenamiento.txt", ios::app);
archivoordenamiento<<"Vectores"<<endl;
for (int i=0 ; i<t; i++)
  {     
    archivoordenamiento<<"|"<<arr[i]<<"|";
  }
archivoordenamiento<<endl<<endl;
archivoordenamiento.close();
}
////////////////////////////////////
void menu_banco(){
  cout<<"\n\t\tMENU-BANCO VIRTUAL"<<endl;
  cout<<"1.- Deposito de dinero\n2. Busqueda de monto\n3.- Salir"<<endl;
  cout<<"Ingrese una opcion: ";
}

void banco(){
   float dinero[12];
   int aux = 0;
   int op_ban;

   do{
        menu_banco();
        cin>>op_ban;
        switch(op_ban){
          case 1:
           for(int i=0;i<12;i++){
          cout<<"Ingrese el deposito del mes "<<i+1<<" : ";
          cin>>dinero[i];
          
          }
          break;
          case 2:     
          aux = banco_busqueda(dinero);
             if(aux!=-1)
            cout<<"El dinero fue depositado en el mes: "<<aux+1;
          else cout<<"El monto no fue encontrado";
          break;
          case 3:
          break;
          default:
          cout<<"La opción ingresada es incorrecta";
          break;
        }
      }while(op_ban!=3);

  
   
}
int banco_busqueda(float arr[]){
  float monto;
   int aux=-1;

     cout<<"Monto a buscar: ";
   cin>> monto;

   for(int i = 0; i<12; i++){
     if(arr[i]==monto) aux = i;
   }
   arch_cuenta(arr);
   arch_cuenta_bus(arr,monto);
   
return aux;
}

void arch_cuenta(float arr[]){
ofstream archivocuenta;
archivocuenta.open("Cuenta.txt", ios::app);
archivocuenta<<"Cuenta Alberto Pérez"<<endl;
for(int x=0; x<12;x++){
archivocuenta<<"Deposito del mes "<<x+1<<" : "<<arr[x]<<endl;
}
archivocuenta<<endl;
archivocuenta.close();
}
void arch_cuenta_bus(float arr[], float monto){
  int aux=-1;
  ofstream archivocuenta;
archivocuenta.open("Cuenta.txt", ios::app);
archivocuenta<<"El monto a buscar: "<<monto<<endl;
for(int i = 0; i<12; i++){
     if(arr[i]==monto){
      aux = i;
     }
     }
     if(aux!=-1){
       archivocuenta<<"El dinero fue depositado en el mes: "<<aux+1<<endl<<endl;
     }
     else archivocuenta<<"El monto no fue enconrado"<<endl<<endl;
  archivocuenta.close();  
}