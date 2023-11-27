#include<iostream>
using namespace std;

int invertir (int n){
int n1= 0;
while (n>0){
    n1=n1*10 + n%10;
    n=n/10;

}
return n1;
}

int main(){
int n;
cout<<"indique el numero :"<<endl;
cin>>n;
cout<<"el numero inverso es : "<<invertir(n)<<endl;

}
