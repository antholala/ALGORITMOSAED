void Numeros_arreglo(int arr[], int tam){
 srand(time(0));
 for(int i = 0; i < tam; i++)
 {
 arr[i] = rand() % 100;
 }
}