#include <iostream>
#include <string.h>
using namespace std;

int main(){
struct producto{
    char descripcion[20];
    int stock;
    int vto;
};
int i,n;
producto A[100];

cout<<"Ingrese la cantidad de productos"<<endl;
cin>>n;

for(i=0;i<n;i++){
    cin.ignore();
    cout<<"Ingrese la descripcion del producto numero "<<i+1<<endl;
    cin.getline(A[i].descripcion,20,'\n');
    cout<<"Ingrese la cantidad de ese producto en stock"<<endl;
    cin>>A[i].stock;
    cout<<"Ingrese el año de vto del producto"<<endl;
    cin>>A[i].vto;
}

for(i=0;i<n;i++){
    if(A[i].vto<2022){
        strcpy(A[i].descripcion,A[n-1].descripcion);
        A[i].stock=A[n-1].stock;
        A[i].vto=A[n-1].vto;
        n=n-1;
        i=i-1;
    }
}

for(i=0;i<n;i++){
    cout<<A[i].descripcion<<",";
    cout<<A[i].stock<<",";
    cout<<A[i].vto<<",";
    cout<<endl;
}

}
