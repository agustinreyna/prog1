#include <iostream>
using namespace std;

int main (){
int Edades[10], i;
string Nombre[10], Mayores[10];


for (i=0;i<10;i++){

    cout<<"Nombre: ";
    cin>>Nombre[i];
    cout<<"Edad: ";
    cin>>Edades[i];
    cout<<""<<endl;

if (Edades[i]>19)Mayores[i]=Nombre[i];
else Mayores[i]="sin datos";
}
for(i=0;i<10;i++)cout<<Mayores[i]<<endl;

}
