#include <iostream>
using namespace std;

int main(){
    int num,i,total;
    bool triangular;
    cout<<"Digame un numero entero para saber si es triangular"<<endl;
    cin>>num;
    total=0;
    for(int i=1;i <= num;i++)
    {
        total=total+i;
        if(total==num)triangular=true;
    }
    if(triangular == true)cout<<"El numero ingresado es triangular";
    else cout<<"El numero ingresado no es triangular";
}
