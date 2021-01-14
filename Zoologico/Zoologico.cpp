#include <stdio.h>

int main(void) {
  int o, m,nm,c1=0,c2=0,c3=0,a=0;
  float pm,pmm=0,pa=0,pr=0;
  char animalm[20];
  do{
  printf("ZOOLÓGICO\n");
  printf(">>MENÚ PRINCIPAL<<\n");
  printf("1.Mamíferos\n");
  printf("2.Reptiles\n");
  printf("3.Aves\n");
  printf("4.Registro\n");
  printf("5.Salir\n");
  printf("------------------------------------------\n");
  printf("Ingrese opcion: ");
  scanf("%d",&o);
  printf("------------------------------------------\n");
  switch (o){
    case 1:{
      printf("Cuantos mamiferos va a ingresar: ");
      scanf("%d",&m);
      printf("********************************************\n");
      while (c1<m){
        printf("Mamifero %d \n",c1+1);
        printf("De que animal se trata:\n");
        scanf("%s",animalm);
        printf("Cuantos %ss ingresara: \n", animalm);
        scanf("%d",&nm);
        printf("Peso de los %ss ingresados en Kg: \n", animalm);
        scanf("%f",&pm);
        printf("********************************************\n");
        c1++;
        a=a+nm;
        pmm=pmm+(pm*nm);
      }
      break;
    }
    case 2:{
      printf("Cuantos reptiles va a ingresar: ");
      scanf("%d",&m);
      printf("********************************************\n");
      while (c2<m){
        printf("Reptil %d \n",c2+1);
        printf("De que animal se trata:\n");
        scanf("%s",animalm);
        printf("Cuantos %ss ingresara: \n", animalm);
        scanf("%d",&nm);
        printf("Peso de los %ss ingresados en Kg: \n", animalm);
        scanf("%f",&pm);
        printf("********************************************\n");
        c2++;
        a=a+nm;
        pr=pr+(pm*nm);
      }
      break;
    }
    case 3:{
      printf("Cuantas Aves va a ingresar: ");
      scanf("%d",&m);
      printf("********************************************\n");
      while (c3<m){
        printf("Ave %d \n",c3+1);
        printf("De que animal se trata:\n");
        scanf("%s",animalm);
        printf("Cuantas %ss ingresara: \n", animalm);
        scanf("%d",&nm);
        printf("Peso de los %ss ingresados en Kg: \n", animalm);
        scanf("%f",&pm);
        printf("********************************************\n");
        c3++;
        a=a+nm;
        pa=pa+(pm*nm);
      }
      break;
    }
    case 4:{
      printf("Animales ingresados: %d\n",a);
      printf("Peso total de los mamiferos ingresados: %.2f\n",pmm);
      printf("Peso total de los reptiles ingresados: %.2f\n",pr);
      printf("Peso total de los aves ingresados: %.2f\n",pa);
      printf("********************************************\n");
      break;
    }
  }
  }while (o!=5);
  printf("Gracias vuelva pronto!!");
  return 0;
}
