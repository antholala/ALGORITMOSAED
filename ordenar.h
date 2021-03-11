void ordenar (int a[], int n)
{
 int aux;
 for (int i=0 ; i<n ; i++)
 {
 for(int j=i+1 ; j<n ; j++)
 {
 if(a[j]<a[i])
 {
 aux=a[i];
 a[i]=a[j];
 a[j]=aux;
 }
 }
 }
}