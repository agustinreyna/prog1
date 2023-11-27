#include <iostream>
using namespace std;

void saltos(int YX,int D){
int saltos=0;
   do
   {
    YX=YX-D;
    saltos++;
   }while(YX>0);
cout<<"La cantidad de saltos es "<<saltos;
}

int main(){
int X,Y,D,YX;
cout<<"Ingrese la posicion X inicial"<<endl;
cin>>X;
cout<<"Ingrese la posicion Y final"<<endl;
cin>>Y;
cout<<"Ingrese cuanto salta el grillo"<<endl;
cin>>D;

YX=Y-X;
saltos(YX,D);
}
