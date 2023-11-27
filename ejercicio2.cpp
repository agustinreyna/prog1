#include <iostream>
#include <cstdlib>
#include <time.h>
#include <ctime>
using namespace std;

void mayor(int m[9][9]){
int i,j,f,c,k=0,num;
bool licito;

        while(k<41){


            licito=true;
            f=rand()%9;
            c=rand()%9;
            num=1+rand()%9;



            for(i=f;i<=f;i++){
    for(j=0;j<9;j++){
        if(num==m[i][j])licito=false;
    }
}

if(f>=0&&f<=2&&c>=0&&c<=2){//cuadrante 1
    for(i=0;i<=2;i++){
        for(j=0;j<=2;j++){
        if(num==m[i][j])licito=false;
        }
    }
}

if(f>=0&&f<=2&&c>=3&&c<=5){//cuadrante 2
    for(i=0;i<=2;i++){
        for(j=3;j<=5;j++){
        if(num==m[i][j])licito=false;
        }
    }
}

if(f>=0&&f<=2&&c>=6&&c<=8){//cuadrante 3
    for(i=0;i<=2;i++){
        for(j=6;j<=8;j++){
        if(num==m[i][j])licito=false;
        }
    }
}

if(f>=3&&f<=5&&c>=0&&c<=2){//cuadrante 4
    for(i=3;i<=5;i++){
        for(j=0;j<=2;j++){
        if(num==m[i][j])licito=false;
        }
    }
}

if(f>=3&&f<=5&&c>=3&&c<=5){//cuadrante 5
    for(i=3;i<=5;i++){
        for(j=3;j<=5;j++){
        if(num==m[i][j])licito=false;
        }
    }
}

if(f>=3&&f<=5&&c>=6&&c<=8){//cuadrante 6
    for(i=3;i<=5;i++){
        for(j=6;j<=8;j++){
        if(num==m[i][j])licito=false;
        }
    }
}

if(f>=6&&f<=8&&c>=0&&c<=2){//cuadrante 7
    for(i=6;i<=8;i++){
        for(j=0;j<=2;j++){
        if(num==m[i][j])licito=false;
        }
    }
}

if(f>=6&&f<=8&&c>=3&&c<=5){//cuadrante 8
    for(i=6;i<=8;i++){
        for(j=3;j<=5;j++){
        if(num==m[i][j])licito=false;
        }
    }
}

if(f>=6&&f<=8&&c>=6&&c<=8){//cuadrante 9
    for(i=6;i<=8;i++){
        for(j=6;j<=8;j++){
        if(num==m[i][j])licito=false;
        }
    }
}

for(i=0;i<9;i++){
    for(j=c;j<=c;j++){
        if(num==m[i][j])licito=false;
    }
}




           if(licito){
            m[f][c]=num;
            k=k+1;
            cout<<num<<endl;
           }
}
cout<<k<<endl;
}

int main (){
    int m[9][9],i,j;

    for(i=0;i<9;i++){//se inicializa la matriz en 0
    for(j=0;j<9;j++){
        m[i][j]=0;
    }
    }
    srand(time(NULL));
   mayor(m);

   for(i=0;i<9;i++){
    cout<<"                 ";
    for(j=0;j<9;j++){
        cout<<m[i][j];
        if(j==2||j==5)cout<<"|";

    }
    cout<<endl;
    if(i==2||i==5)cout<<"                 -----------"<<endl;
}

}
