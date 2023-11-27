#include <iostream>
#include <string.h>
using namespace std;

/*void mayores(int A[20]){
int i,cont=0;
for(i=0;i<20;i++){
    if(A[i].edad>60)cont++;
}
cout<<"La cantidad de empleados mayores a 60 anios es "<<cont<<endl;
}*/

int main(){
    struct empleados{
    char nombre[20];
    int edad;
    float sueldo;
    };

  empleados A[20];
  int i,j;
  for(i=0;i<20;i++){
    cin.ignore();
    cout<<"Ingrese el nombre del empleado numero "<<i+1<<endl;
    cin.getline(A[i].nombre,20,'\n');
    cout<<"Ingrese la edad del empleado numero "<<i+1<<endl;
    cin>>A[i].edad;
    cout<<"Ingrese el sueldo del empleado numero"<<i+1<<endl;
    cin>>A[i].sueldo;
  }

  int cont=0;
for(i=0;i<20;i++){
    if(A[i].edad>60)cont++;
}
cout<<"La cantidad de empleados mayores a 60 anios es "<<cont<<endl;
  //mayores(A[20]);
}
