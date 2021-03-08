#include <iostream>
#include <fstream>
#include "Quicksort.h"
using namespace std;
using namespace ordenamiento;
int main()
{
ofstream archivo;
archivo.open("quicksort.txt",ios::out);
int A[10]={88,-6,69,-33, 98,7,23,-5,0,100};
archivo<<"ALGORITMOS DE ORDENAMIENTO QUICKSORT"<<endl;
cout<<"ALGORITMOS DE ORDENAMIENTO QUICKSORT"<<endl;
archivo<<endl<<"Arreglo original"<<endl;
cout<<endl<<"Arreglo original"<<endl;
for(int i=0;i<10;i++){
cout<<"|"<<A[i]<<"|";
archivo<<"|"<<A[i]<<"|";
}
cout<<endl;
archivo<<endl<<"Arreglo Ordenado"<<endl;
cout<<endl<<"Arreglo Ordenado"<<endl;
ordenar(A, 0, 9);
for(int i=0;i<10;i++){
cout<<"|"<<A[i]<<"|";
archivo<<"|"<<A[i]<<"|";
}
archivo<<endl;
return 0;
}