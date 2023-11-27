#include <iostream>
using namespace std;

int main(){
    int A[50];
    int i,j,aux,tam;

    cout<<"Ingrese el largo del arreglo: "<<endl;
    cin>>tam;

    for(i=0;i<tam;i++){
        cout<<"Ingrese el valor de la posicion numero "<<i<<" del arreglo: ";
        cin>>A[i];
        cout<<"";
    }

    for(i=0;i<tam;i++){
        for(j=i+1;j<tam;j++){
            if(A[i]<A[j]){
                aux=A[i];
                A[i]=A[j];
                A[j]=aux;
            }
        }
    }
    cout<<"Los valores del arreglo ordenados de mayor a menor son los siguientes..."<<endl;
    for(i=0;i<tam;i++){
        cout<<A[i]<<" ";
    }

}
