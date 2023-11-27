#include <iostream>
using namespace std;

int main (){
int Edades[10], i,t=0;
string Nombre[10], Mayores[10];


for (i=0;i<10;i++){

    cout<<"Nombre: ";
    cin>>Nombre[i];
    cout<<"Edad: ";
    cin>>Edades[i];
    cout<<""<<endl;

if (Edades[i]>19){
        Mayores[t]=Nombre[i];
        t=t+1;
}
}
for(i=0;i<10;i++)cout<<Mayores[i]<<endl;
}
