#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int main(){
    bool licito=true;
    int num,cont,n,c,f,i,j,M[9][9];



   // for(i=1;i<2;i++)cout<<rand()%3<<endl;//ESTO CALCULA EN QUE i SE ENCUENTRA EL PRIMER NUMERO
    //for(i=1;i<2;i++)cout<<rand()%3<<endl;//ESTO CALCULA EN QUE j SE ENCUENTRA EL PRIMER NUMERO

   // for(i=1;i<2;i++)cout<<(rand()%3)+1<<endl;//ESTO MULTIPLICA EL VALOR i POR 1,2 O 3 PARA CAMBIAR DE CUADRANTE
    //for(i=1;i<2;i++)cout<<(rand()%3)+1<<endl;//ESTO MULTIPLICA EL VALOR j POR 1,2 O 3 PARA CAMBIAR DE CUADRANTE

    //for(i=1;i<10;i++)cout<<(rand()%9)+1<<endl;//ESTO CALCULA EL NUMERO A REEMPLAZAR
    srand(time(NULL));//SI NO USO ESTO LOS VALORES SE REPITEN
    for(i=0;i<9;i++){//se inicializa la matriz en 0
    for(j=0;j<9;j++){
        M[i][j]=0;
    }
}

n=14;//ESTO CALCULA CUANTOS NUMEROS VA A HABER EN EL TABLERO
while(cont<14){
    i=rand()%9;
    j=rand()%9;
    num=(rand()%9)+1;
    cont++;
    f=i;
    c=j;

    for(i=f;i<=f;i++){
    for(j=0;j<9;j++){
        if(num==M[i][j])licito=false;
    }
}

if(f>=0&&f<=2&&c>=0&&c<=2){//cuadrante 1
    for(i=0;i<=2;i++){
        for(j=0;j<=2;j++){
        if(num==M[i][j])licito=false;
        }
    }
}

if(f>=0&&f<=2&&c>=3&&c<=5){//cuadrante 2
    for(i=0;i<=2;i++){
        for(j=3;j<=5;j++){
        if(num==M[i][j])licito=false;
        }
    }
}

if(f>=0&&f<=2&&c>=6&&c<=8){//cuadrante 3
    for(i=0;i<=2;i++){
        for(j=6;j<=8;j++){
        if(num==M[i][j])licito=false;
        }
    }
}

if(f>=3&&f<=5&&c>=0&&c<=2){//cuadrante 4
    for(i=3;i<=5;i++){
        for(j=0;j<=2;j++){
        if(num==M[i][j])licito=false;
        }
    }
}

if(f>=3&&f<=5&&c>=3&&c<=5){//cuadrante 5
    for(i=3;i<=5;i++){
        for(j=3;j<=5;j++){
        if(num==M[i][j])licito=false;
        }
    }
}

if(f>=3&&f<=5&&c>=6&&c<=8){//cuadrante 6
    for(i=3;i<=5;i++){
        for(j=6;j<=8;j++){
        if(num==M[i][j])licito=false;
        }
    }
}

if(f>=6&&f<=8&&c>=0&&c<=2){//cuadrante 7
    for(i=6;i<=8;i++){
        for(j=0;j<=2;j++){
        if(num==M[i][j])licito=false;
        }
    }
}

if(f>=6&&f<=8&&c>=3&&c<=5){//cuadrante 8
    for(i=6;i<=8;i++){
        for(j=3;j<=5;j++){
        if(num==M[i][j])licito=false;
        }
    }
}

if(f>=6&&f<=8&&c>=6&&c<=8){//cuadrante 9
    for(i=6;i<=8;i++){
        for(j=6;j<=8;j++){
        if(num==M[i][j])licito=false;
        }
    }
}

for(i=0;i<9;i++){
    for(j=c;j<=c;j++){
        if(num==M[i][j])licito=false;
    }
}




if(licito==true){
    M[f][c]=num;
}
else cout<<"              MOVIMIENTO ILICITO!!!"<<endl;
cout<<endl;
}




for(i=0;i<9;i++){
    cout<<"                 ";
    for(j=0;j<9;j++){
        cout<<M[i][j];
        if(j==2||j==5)cout<<"|";

    }
    cout<<endl;
    if(i==2||i==5)cout<<"                 -----------"<<endl;
}
cout<<endl;


cout<<n;
}
//SE USA UN DO WHILE QUE USA DE PARAMETRO EL PRIMER RANDOM PARA CALCULAR CUANTOS NUMEROS
//SE USAN LOS DOS SIGUIENTES RANDOMS DENTRO DEL WHILE PARA CALCULAR LA POSICION DENTRO DE LA MATRIZ 3X3 EN LA CUAL EL VALOR SERA REEMPLAZADO
//LOS DOS SIGUIENTES RANDOMS MULTIPLICAN i Y j PARA UBICAR LOS CUADRANTES
//EL TERCER RANDOM SE REEMPLAZA DIRECTAMENTE EN EL LAS COORDENADAS DICTADAS POR LOS RANDOMS CORRESPONDIENTES

