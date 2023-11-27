#include <iostream>
using namespace std;

bool primos(int d1[10],int d2[10]){
    int i;

    bool cond=true;
    for(i=0;i<10;i++){
        if(d1[i]!=d2[i])cond=false;
    }
    return cond;
}

int main()
{
    int i,j=0,k1,k2,d1[10],d2[10],aux;
    bool cond;
    cout<<"Decime un numero"<<endl;
    cin>>k1;
    cout<<"Decime otro numero"<<endl;
    cin>>k2;

    for(i=0;i<10;i++){
    d1[i]=0;
    d2[i]=0;
}

        for(i=2;k1>1;i++){
            while(k1%i==0){
                if(i!=d1[j-1]){
                    d1[j]=i;
                    j++;
                }
                k1/=i;
            }
        }

        j=0;
        for(i=2;k2>1;i++){
            while(k2%i==0){
                if(i!=d2[j-1]){
                    d2[j]=i;
                    j++;
                }
                k2/=i;
            }
        }

cond=primos(d1,d2);
if(cond==true)cout<<"Los divisores primos de ambos numeros son iguales"<<endl;
else cout<<"Los divisores primos de ambos numeros NO son iguales"<<endl;

for(i=0;i<10;i++){
    if(d1[i]!=0){
        cout<<d1[i];
        cout<<"-";
    }
}cout<<endl;

cout<<"--------------------"<<endl;

for(i=0;i<10;i++){
    if(d2[i]!=0){
        cout<<d2[i];
        cout<<"-";
    }
}
}
