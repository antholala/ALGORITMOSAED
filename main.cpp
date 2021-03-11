#include <iostream>
#include <fstream>
#include "heapsort.h"
using namespace std;
void HeapSort(int b[], int n);
int main()
{
ofstream archivo1;
archivo1.open("heapsort",ios::app);
int A[100],n;
cout<<"\n\t\tORDENAMINETO HEAPSORT";
archivo1<<"\n\t\tORDENAMINETO HEAPSORT";
cout<<"\nIngresa la cantidad de elementos del arreglo: ";
cin>>n;
for(int i=1;i<=n;i++)
{
  cout<<"\nElemento "<<i<<":";
cin >> A[i];
}
cout<<"\nArreglo Desordenado\n";
archivo1<<"\nArreglo Desordenado\n";
for(int i=1;i<=n;i++)
{
cout<< "|"<<A[i]<< "|";
archivo1<< "|"<<A[i]<< "|";
}
HeapSort(A,n);
cout<<"\nArreglo Ordenado\n";
archivo1<<"\nArreglo ordenadoO\n";
for(int i=1;i<=n;i++)
{
cout<< "|"<<A[i]<< "|";
archivo1<<"|"<<A[i]<< "|";
}
return 0;
archivo1.close();
}

