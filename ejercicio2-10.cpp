#include<iostream>
using namespace std;

int main(){
    int n,x;
    cin>>n;
    x=0;
    if(n>0){
        x=x*10+n%10;
        n=n/10;
        if(x%2==0)cout<<"El digito es par"<<endl;
        else cout<<"El digito es impar"<<endl;
    }
}
