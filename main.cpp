#include <iostream>
#include <fstream>
#include <ctime>


using namespace std;

void dividir(int a[], int inicial, int final);
void fusionar(int a[],int pinicial,int pfinal,int medio);


int main()
{
    int A[10];
    ofstream archivo;

 archivo.open("mergesort.txt",ios::app);
    srand(time(0));
 archivo<<"\n\t\t\t\tAlgoritmo de ordenamiento Mergesort"<<endl;
    for(int i=0; i< 7; i++)
    {
        A[i]=1+rand()%(50-1);
    }

    cout<<endl;
    archivo<<"Arreglo original: "<<endl;
    for(int i=0; i< 7; i++)
    {
        cout<<"|"<<A[i]<<"|";
        archivo<<"|"<<A[i]<<"|";
    }
    cout<<endl;
    
    archivo<<endl<<"Arreglo ordenado: "<<endl;
    dividir(A,0,6);
     cout<<endl;

    for(int i=0; i< 7; i++)
    {
        cout<<"|"<<A[i]<<"|";
        archivo<<"|"<<A[i]<<"|";
    }

    archivo<<endl;
    return 0;
}



void dividir(int a[], int inicial, int final)
{
    int mitad;
    if(inicial < final)
    {
        mitad=(inicial+final)/2;
        dividir(a,inicial,mitad);
        dividir(a,mitad+1,final);
        fusionar(a,inicial,final,mitad);
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