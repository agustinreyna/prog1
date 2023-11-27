#include <iostream>
using namespace std;

void intercambio(int x[],int y){
    int j,aux;

     for(j=0;j<y/2;j++){
        aux=x[y-j-1];
        x[y-j-1]=x[j];
        x[j]=aux;
    }
    for(j=0;j<y;j++){
        cout<<x[j]<<endl;
    }
}


int main(){
    int a[100],i,aux,n,j,t;
    cin>>n;

    for(i=0;i<n;i++){
        cin>>a[i];
    }

    intercambio(a,n);

}


/*for(i=0;i<t;i++){
        for(j=n-1;j=t;){
            aux=a[i];
            a[i]=a[j];
            a[j]=aux;
        }
    }
   */

