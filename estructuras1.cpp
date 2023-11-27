#include <iostream>
#include <string.h>
using namespace std;
 int main (){
     struct equipo{
         char nombre[20];
         int golesh;
         int golesr;
     };

equipo A[100];
int i,n;

cout<<"cuantos equipos son: "<<endl;
cin>>n;

for(i=0;i<n;i++){
cin.ignore();
cout<<"indique el nombre del equipo: "<<i+1<<endl;
cin.getline(A[i].nombre,20, '\n');
cout<<"indique la cantidad de goles hechos por el equipo: "<<i+1<<endl;
cin>>A[i].golesh;
cout<<"indique la cantidad de goles recibidos por el equipo: "<<i+1<<endl;
cin>>A[i].golesr;

}
for (i=0;i<n;i++){
    if(A[i].golesh>A[i].golesr){
        cout<<"nombre del equipo: "<<A[i].nombre<<", goles hechos: "<<A[i].golesh<<", goles recibidos: "<<A[i].golesr<<endl;
    }
}
}
