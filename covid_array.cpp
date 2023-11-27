#include <iostream>
using namespace std;

int main(){
int A[14],menores[14],mayores[14],i;
int j=0;
int t=0;

    for(i=0;i<14;i++){
    cin>>A[i];
    if(A[i]>17){
        mayores[j]=A[i];
        j=j+1;
    }
    else if(){
      menores[j]=A[i];
        t=t+1;
    }
}
    cout<<"La cantidad de personas menores son "<<t<<endl;
    for(i=0;i<t;i++)cout<<menores[i]<<endl;

    cout<<"La cantidad de personas mayores son "<<j<<endl;
    for(i=0;i<j;i++)cout<<mayores[i]<<endl;
}
