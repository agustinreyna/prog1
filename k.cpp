#include <iostream>
using namespace std;

int main(){
int A,B,K,BA,i,cont=0;
cout<<"Decime el numero A"<<endl;
cin>>A;
cout<<"Decime el numero B"<<endl;
cin>>B;
cout<<"Decime el numero K"<<endl;
cin>>K;
for(i=A;i<=B;i++){
    if(i%K==0)cont++;
}
cout<<"La cantidad de numeros divisibles por K son "<<cont<<endl;
}
