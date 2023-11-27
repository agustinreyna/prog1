#include <iostream>
using namespace std;

 int main(){
    int v[100];
    int i,sum;
    float media=0;
    sum=0;
    for (i = 0;i < 100;i++){
        v[i]=i+1;
    }

    for (i=0;i < 100;i++){
        sum=sum+v[i];
    }
    media=(float)sum/100;
    cout<<"La suma de todos los numeros del vector es: "<<sum<<endl;
    cout<<"La media de la suma de todos los nuemros del vector es igual a: "<<media<<endl;
}
