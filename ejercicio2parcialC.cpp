#include <iostream>
using namespace std;

bool comprobar(char M[4][4],char v1[4],char v2[4],char v3[4],char v4[4]){
bool check;
int i;
    for(i=0;i<4;i++){
        if(v1[i]!=M[0][i]){
            check=false;
            return check;
        }
        if(v2[i]!=M[1][i]){
            check=false;
            return check;
        }
        if(v3[i]!=M[2][i]){
            check=false;
            return check;
        }
        if(v4[i]!=M[3][i]){
            check=false;
            return check;
        }
    }
check=true;
return check;
}

int main(){
char M[4][4],v1[4],v2[4],v3[4],v4[4];
int i,j;
bool check;

    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            cout<<"Ingrese el valor de la posicion "<<i<<" "<<j<<" de la matriz"<<endl;
            cin>>M[i][j];
        }
    }

    for(i=0;i<4;i++){
        cout<<"Ingrese el valor de la posicion "<<i<<" del primer vector"<<endl;
        cin>>v1[i];
        cout<<"Ingrese el valor de la posicion "<<i<<" del segundo vector"<<endl;
        cin>>v2[i];
        cout<<"Ingrese el valor de la posicion "<<i<<" del tercer vector"<<endl;
        cin>>v3[i];
        cout<<"Ingrese el valor de la posicion "<<i<<" del cuarto vector"<<endl;
        cin>>v4[i];
    }
    check=comprobar(M,v1,v2,v3,v4);
    if(check==true)cout<<"La matriz esta conformada por sus respectivos vectores!"<<endl;
    else cout<<"La matriz no esta conformada por sus respectivos vectores!"<<endl;
    cout<<endl;
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            cout<<M[i][j]<<" ";
        }
        cout<<endl;
    }
cout<<endl;
cout<<endl;
    for(i=0;i<4;i++){
        cout<<v1[i]<<" ";
    }
cout<<endl;
cout<<endl;
for(i=0;i<4;i++){
        cout<<v2[i]<<" ";
    }
cout<<endl;
cout<<endl;
for(i=0;i<4;i++){
        cout<<v3[i]<<" ";
    }
cout<<endl;
cout<<endl;
for(i=0;i<4;i++){
        cout<<v4[i]<<" ";
    }
cout<<endl;
cout<<endl;
}
