int repeticiones(int a[], int n, int ele){
 int contador=0;
for (int i=0; i<n; i++)
{
 if(a[i]== ele){
 contador++;
 }
}
return contador;
}