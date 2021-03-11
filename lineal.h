int busquedaLineal(const int arreglo[], int tamano, int num){
 int aux=-1;
 for (int i = 0; i< tamano ; i++){
 if (arreglo[i] == num){
 aux= i;
 }
}
return aux;
}