/*
SUDOKU
CUADRICULA 9X9, CELDAS DIVIDIDAS EN SUBCUADRICULAS 3X3 CON CIFRAS DEL 1 AL 9
NO se puede repetir digitos en la misma columa, ni fila, ni subcuadricula.

debe completar posiciones al azar de la cuadricula con digitos del 1 al 9 al azar

al final del proceso 50 de las 81 celdas deben quedar cargadas con valores permitidos

con la matriz generada se debe determinar:

1. sumatoria de todos los elementos de la matriz generada
2. cantidad de 1, 2, 3,... dentro de la matriz generada
3. cantidad de numeros distintos de 8 y 9 en la matriz generada

*/

#include <iostream>
#include <time.h>
using namespace std;

struct datos {

    int elementos = 0;

};

datos info;


void mostrarsudoku(int mat[9][9]){//funcion para mostrar el sudoku
int i,j;
for(i=0;i<9;i++){
    cout<<"                 ";
    for(j=0;j<9;j++){
        cout<<mat[i][j];
        if(j==2||j==5)cout<<"|";

    }
    cout<<endl;
    if(i==2||i==5)cout<<"                 -----------"<<endl;
}
cout<<endl;
}


void generarmatriz(int mat[9][9]){
int i,j,f,c,k,num,ceros;
bool licito,ok=false;

    while(ok==false){
            ceros=0;
            licito=true;
            f=rand()%9;
            c=rand()%9;
            num=1+rand()%9;

            for(i=f;i<=f;i++){//checkea las filas
    for(j=0;j<9;j++){
        if(num==mat[i][j])licito=false;
    }
}

if(f>=0&&f<=2&&c>=0&&c<=2){//cuadrante 1
    for(i=0;i<=2;i++){
        for(j=0;j<=2;j++){
        if(num==mat[i][j])licito=false;
        }
    }
}

if(f>=0&&f<=2&&c>=3&&c<=5){//cuadrante 2
    for(i=0;i<=2;i++){
        for(j=3;j<=5;j++){
        if(num==mat[i][j])licito=false;
        }
    }
}

if(f>=0&&f<=2&&c>=6&&c<=8){//cuadrante 3
    for(i=0;i<=2;i++){
        for(j=6;j<=8;j++){
        if(num==mat[i][j])licito=false;
        }
    }
}

if(f>=3&&f<=5&&c>=0&&c<=2){//cuadrante 4
    for(i=3;i<=5;i++){
        for(j=0;j<=2;j++){
        if(num==mat[i][j])licito=false;
        }
    }
}

if(f>=3&&f<=5&&c>=3&&c<=5){//cuadrante 5
    for(i=3;i<=5;i++){
        for(j=3;j<=5;j++){
        if(num==mat[i][j])licito=false;
        }
    }
}

if(f>=3&&f<=5&&c>=6&&c<=8){//cuadrante 6
    for(i=3;i<=5;i++){
        for(j=6;j<=8;j++){
        if(num==mat[i][j])licito=false;
        }
    }
}

if(f>=6&&f<=8&&c>=0&&c<=2){//cuadrante 7
    for(i=6;i<=8;i++){
        for(j=0;j<=2;j++){
        if(num==mat[i][j])licito=false;
        }
    }
}

if(f>=6&&f<=8&&c>=3&&c<=5){//cuadrante 8
    for(i=6;i<=8;i++){
        for(j=3;j<=5;j++){
        if(num==mat[i][j])licito=false;
        }
    }
}

if(f>=6&&f<=8&&c>=6&&c<=8){//cuadrante 9
    for(i=6;i<=8;i++){
        for(j=6;j<=8;j++){
        if(num==mat[i][j])licito=false;
        }
    }
}

for(i=0;i<9;i++){//checkea las columnas
    for(j=c;j<=c;j++){
        if(num==mat[i][j])licito=false;
    }
}
           if(licito) mat[f][c]=num;

for(i=0;i<9;i++){
    for(j=0;j<9;j++){
        if(mat[i][j]==0)ceros++;
    }
}
if(ceros==31)ok=true;
        }
}





//PUNTO A
void sumatoriamatriz(int mat[9][9]) {
int i,j,sum=0;

for(i=0;i<9;i++){
    for(j=0;j<9;j++){
        sum=mat[i][j]+sum;
    }
}
    cout << "La sumatoria de los elementos de la matriz generada es :" << sum<< endl;

}


//PUNTO B Y C
void CantidadDeCadaNumero (int mat[9][9]) {
int i,j,k,sum=0;
int elementos[9];

for(i=0;i<9;i++){
    elementos[i]=0;
}
    for(k=1;k<10;k++){
    for(i=0;i<9;i++){
        for(j=0;j<9;j++){
            if(mat[i][j]==k)elementos[k-1]++;

        }
    }
    }

    for(i=0;i<9;i++){
        cout<<"Cantidad de "<<i+1<<":"<<elementos[i]<<endl;
    }

for(i=0;i<7;i++){
    sum=elementos[i]+sum;
}
cout<<"La cantidad de elementos distinta de 8 y 9 es "<<sum<<endl;
            }

//PUNTO C
void espaciosDiferentesDeOchoYNueve (datos info[50]){

    int elementosDifDeOchoNueve=0 ;

     for (int i = 0; i < 50; i++) {


        if (i!=8 || i!=9) {

                elementosDifDeOchoNueve++;
            }

     }

     cout << "la cantidad de elementos diferentes de OCHO y NUEVE son: " << elementosDifDeOchoNueve << endl;


}

//Funcion Principal
int main () {
int i,j;


    int mat[9][9];

    for(i=0;i<9;i++){//se inicializa la matriz en 0
    for(j=0;j<9;j++){
        mat[i][j]=0;
    }
}

    srand(time(NULL));
        generarmatriz(mat);

        mostrarsudoku(mat);
        sumatoriamatriz(mat);
        CantidadDeCadaNumero(mat);
}

