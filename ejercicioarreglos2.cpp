#include <iostream>
using namespace std;

int main(){
int n,x;
cin>>n;
cin>>x;
int A[n];
A[1]=x;
for(int i=2;i <= n;i++){
    A[i]=x*i;
}

for(int i=1;i <= n;i++){
    cout<<A[i];
    cout<<"";
}

}
