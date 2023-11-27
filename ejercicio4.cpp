#include <iostream>
using namespace std;

char signo(int num){
    char resultado;
    if(num<0){
        resultado='N';
    }
    else if(num==0){
        resultado='0';
    }
    else{
        resultado='P';
    }

    return resultado;
}

int main(){
    int num;
    char resultado;
    cout<<"Ingrese un numero"<<endl;
    cin>>num;
    resultado=signo(num);
    cout<<resultado<<endl;
}
