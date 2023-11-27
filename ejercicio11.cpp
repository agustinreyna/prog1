#include <iostream>
using namespace std;

void factorial(int num){
    int resultado=1;
    for (int i=1;i <= num;i++)resultado=resultado*i;
    cout<<"El factorial del numero "<<num<<" es "<<resultado<<endl;
}

int main(){
    int num;
    cout<<"Ingrese un numero para saber su factorial"<<endl;
    cin>>num;
    factorial(num);
}
