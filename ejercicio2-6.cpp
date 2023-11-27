#include <iostream>
using namespace std;

int main(){
    int h,m,s;
    cout<<"Indique la cantidad de horas"<<endl;
    cin>>h;

    cout<<"Indique la cantidad de minutos"<<endl;
    cin>>m;

    cout<<"Indique la cantidad de segundos"<<endl;
    cin>>s;

    m=m+s/60;
    s=s%60;
    h=h+m/60;
    m=m%60;

    cout<<"la hora resultante es"<<endl<<"horas"<<h<<endl<<"minutos"<<m<<endl<<"segundos"<<s<<endl;
}
