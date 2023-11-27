#include <iostream>
#include <cstdlib>
#include <time.h>
#include <ctime>
using namespace std;

int mayor(int m[9][9],int num){
int i,j,f,c,k=0,p,unos;
bool licito;
        do{
            licito=true;
            f=rand()%9;
            c=rand()%9;

            if(m[f][c]!=0)licito=false;

            for(i=f;i<=f;i++){//checkea las filas
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

for(i=0;i<9;i++){//checkea las columnas
    for(j=c;j<=c;j++){
        if(num==m[i][j])licito=false;
    }
}
           if(licito){
            m[f][c]=num;
            k++;
           }
           // else cout<<"no se pudo"<<endl;

        }while(k<9);
        //cout<<"b"<<endl;

num++;
return num;

}

int menor(int m[9][9],int num){
int i,j,f,c,k=0,p;
bool licito;

    do{
    for(f=0;f<9;f++){
        for(c=0;c<9;c++){
            licito=true;
            if(m[f][c]!=0)licito=false;

            for(i=f;i<=f;i++){//checkea las filas
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

for(i=0;i<9;i++){//checkea las columnas
    for(j=c;j<=c;j++){
        if(num==m[i][j])licito=false;
    }
}
           if(licito){
            m[f][c]=num;
            k++;

           }
            }
        }
    }while(k<9);
    num++;
return num;
}

int main (){
    int m[9][9],i,j,num=1;

    for(i=0;i<9;i++){//se inicializa la matriz en 0
    for(j=0;j<9;j++){
        m[i][j]=0;
    }
    }
    srand(time(NULL));
    //for(i=0;i<1;i++)num=mayor(m,num);

    for(i=0;i<2;i++)menor(m,num);

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
