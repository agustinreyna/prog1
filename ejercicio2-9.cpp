#include<iostream>
using namespace std;
int invertir (int x){
int n1= 0;
while (x>0){
    n1=n1*10 + x%10;
    x=x/10;
}
return n1;
}

int main(){
int n;
cout<<"indique el numero :"<<endl;
cin>>n;
bool capicua;
if(n==invertir(n))capicua=true;

if(capicua==true)cout<<"El numero "<<n<<" es capicua";
else cout<<"El numero "<<n<<" no es capicua";
}
