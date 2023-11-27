#include <iostream>
#indlude <string.h>
using namespace std;

int main(){
struct fecha{
    int dia,mes,anio;
};
struct datosp{
char nombres[20],pais[20];
fecha fechan;
};
struct atleta{
char deportes[20];
int medallas;
datosp datos;
};

int i,n,A[100],maximo=0;
cout<<"Ingrese la cantidad de atletas"<<endl;
cin>>n;

for(i=0;i<n;i++){
    cin.ignore();
    cout<<"Ingrese el deporte del atleta numero "<<i+1<<endl;
    cin.getline(A[i].deportes,20,'\n')
    cout<<"Ingrese la cantidad de medallas del atleta numero "<<i+1<<endl;
    cin>>A[i].medallas;
    cout<<"Ingrese el nombre del atleta numero "<<i+1<<endl;
    cin>>A[i].nombres;
    cout<<"Ingrese el pais del atleta numero "<<i+1<<endl;
    cin>>A[i].pais;
    cout<<"Ingrese el dia de nacimiento del atleta numero "<<i+1<<endl;
    cin>>A[i].dia;}
    cout<<"Ingrese el mes de nacimiento del atleta numero "<<i+1<<endl;
    cin>>A[i].mes;
    cout<<"Ingrese el anio de nacimiento del atleta numero "<<i+1<<endl;
    cin>>A[i].anio;
}s
}
