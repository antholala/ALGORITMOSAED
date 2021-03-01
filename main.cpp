#include <iostream>
using namespace std;
#include <fstream>

int main() {
  int k=0;
  int matr[5][5];
  int valormat[26];
  int total;
  ofstream archivo;
  archivo.open("taller.txt", ios::app);
  for (int i=0;i<5; i++){
    for (int j=0; j<5;j++){
      cout<<"Matriz ["<<i<<"]"<<"["<<j<<"]"<<":";
      cin>>valormat[k];
      k++;
    }
  }
  cout<<valormat[0]<<" "<<valormat[1]<<" "<<valormat[2]<<" "<<valormat[3]<<" "<<valormat[4]<<endl;
  archivo<<valormat[0]<<" "<<valormat[1]<<" "<<valormat[2]<<" "<<valormat[3]<<" "<<valormat[4]<<endl;
  cout<<valormat[5]<<" "<<valormat[6]<<" "<<valormat[7]<<" "<<valormat[8]<<" "<<valormat[9]<<endl;
  archivo<<valormat[5]<<" "<<valormat[6]<<" "<<valormat[7]<<" "<<valormat[8]<<" "<<valormat[9]<<endl;
  cout<<valormat[10]<<" "<<valormat[11]<<" "<<valormat[12]<<" "<<valormat[13]<<" "<<valormat[14]<<endl;
  archivo<<valormat[10]<<" "<<valormat[11]<<" "<<valormat[12]<<" "<<valormat[13]<<" "<<valormat[14]<<endl;
  cout<<valormat[15]<<" "<<valormat[16]<<" "<<valormat[17]<<" "<<valormat[18]<<" "<<valormat[19]<<endl;
  archivo<<valormat[15]<<" "<<valormat[16]<<" "<<valormat[17]<<" "<<valormat[18]<<" "<<valormat[19]<<endl;
  cout<<valormat[20]<<" "<<valormat[21]<<" "<<valormat[22]<<" "<<valormat[23]<<" "<<valormat[24]<<endl;
  archivo<<valormat[20]<<" "<<valormat[21]<<" "<<valormat[22]<<" "<<valormat[23]<<" "<<valormat[24]<<endl;
  cout<<"Elementos de la diagonal principal: "<<valormat[0]<<","<<valormat[6]<<","<<valormat[12]<<","<<valormat[18]<<","<<valormat[24]<<endl;
  archivo<<"Elementos de la diagonal principal: "<<valormat[0]<<","<<valormat[6]<<","<<valormat[12]<<","<<valormat[18]<<","<<valormat[24]<<endl;
  total=valormat[0]*valormat[6]*valormat[12]*valormat[18]*valormat[24];
  cout<<"Producto de la diagonal principal: "<<total;
  archivo<<"Producto de la diagonal principal: "<<total;
}