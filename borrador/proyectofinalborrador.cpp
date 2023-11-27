#include <iostream>
#include <string.h>
#include <fstream>
#include <cstdlib>
#include <time.h>
#include <ctime>
#include <fstream>
using namespace std;
struct jugador{//estructura de los jugadores
char nombre[20];
int casillas=0;
};

void menu(){//menu del juego
cout<<"              "<<"MENU DEL JUEGO"<<endl;
cout<<"              "<<"Seleccione una opcion:"<<endl;
cout<<"              "<<"1.Mostrar sudoku"<<endl;
cout<<"              "<<"2.Ingresar un numero"<<endl;
cout<<"              "<<"3.Mostrar informacion de los jugadores"<<endl;
cout<<"              "<<"4.Cerrar programa"<<endl;
}

void mostrarsdk(int M[9][9]){//funcion para mostrar el sudoku
int i,j;
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
}

int cambiarnum(int M[9][9],jugador player[2],int turno){//funcion para ingresar un numero
int i,j,f,c,num;
bool licito=true;
cout<<endl;
cout<<"              "<<"Ingrese la fila que desea cambiar"<<endl;
cin>>f;
cout<<"              "<<"Ingrese la columna que desea cambiar"<<endl;
cin>>c;
do{
cout<<"              "<<"Ingrese el valor a reemplazar(del 1 al 9)"<<endl;
cin>>num;
}while(num<1||num>9);

if(M[f][c]!=0)licito=false;//comprueba que haya un 0

for(i=f;i<=f;i++){//checkea las filas
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

for(i=0;i<9;i++){//checkea las columnas
    for(j=c;j<=c;j++){
        if(num==M[i][j])licito=false;
    }
}

if(licito==true){
    M[f][c]=num;
    player[turno].casillas++;
}
else{
cout<<"              MOVIMIENTO ILICITO!!!"<<endl;
cout<<endl;
turno++;
}
return turno;
cout<<endl;
}

int fin(jugador player[2],int turno){
int ganador;
if(turno==2){
        if(player[0].casillas>player[1].casillas){
            cout<<"              EL PRIMER JUGADOR GANA"<<endl;
            ganador=0;
        }
        else if(player[1].casillas>player[0].casillas){
            cout<<"              EL SEGUNDO JUGADOR GANA"<<endl;
            ganador=1;
        }
        else{
            cout<<"              LOS DOS JUGADORES LLENARON LA MISMA CANTIDAD DE CASILLAS"<<endl;
        }
    }
    return ganador;
}

void info(jugador player[2],int turno){
int i,j;
    if(turno==2){
        if(player[0].casillas>player[1].casillas){
            cout<<"              EL PRIMER JUGADOR GANA"<<endl;
            turno=0;
        }
        else if(player[1].casillas>player[0].casillas){
            cout<<"              EL SEGUNDO JUGADOR GANA"<<endl;
            turno=1;
        }
        else{
            cout<<"              LOS DOS JUGADORES LLENARON LA MISMA CANTIDAD DE CASILLAS"<<endl;
        }
    }
    for(i=0;i<2;i++){
        cout<<"              "<<player[i].nombre;
    }
    cout<<endl;
    for(i=0;i<2;i++){
        cout<<"              "<<player[i].casillas;
    }
    cout<<endl;
    cout<<endl;
}

bool win(int M[9][9],jugador player[2]){
int i,j,suma=0;
bool gano=false;

    for(i=0;i<=2;i++){
        for(j=0;j<=2;j++){
        suma=suma+M[i][j];
        if(suma==45){
        gano=true;
        return gano;
            }
        }
    }
    suma=0;
    for(i=0;i<=2;i++){
        for(j=3;j<=5;j++){
        suma=suma+M[i][j];
        if(suma==45){
        gano=true;
        return gano;
        }
    }
    }
    suma=0;

    for(i=0;i<=2;i++){
        for(j=6;j<=8;j++){
        suma=suma+M[i][j];
        if(suma==45){
        gano=true;
        return gano;
        }
    }
    }
    suma=0;

    for(i=3;i<=5;i++){
        for(j=0;j<=2;j++){
        suma=suma+M[i][j];
        if(suma==45){
        gano=true;
        return gano;
        }
    }
    }
    suma=0;

    for(i=3;i<=5;i++){
        for(j=3;j<=5;j++){
        suma=suma+M[i][j];
        if(suma==45){
        gano=true;
        return gano;
        }
    }
    }
    suma=0;

    for(i=3;i<=5;i++){
        for(j=6;j<=8;j++){
        suma=suma+M[i][j];
        if(suma==45){
        gano=true;
        return gano;
        }
    }
    }
    suma=0;

    for(i=6;i<=8;i++){
        for(j=0;j<=2;j++){
        suma=suma+M[i][j];
        if(suma==45){
        gano=true;
        return gano;
        }
    }
    }
    suma=0;

    for(i=6;i<=8;i++){
        for(j=3;j<=5;j++){
        suma=suma+M[i][j];
        if(suma==45){
        gano=true;
        return gano;
        }
    }
    }
    suma=0;

    for(i=6;i<=8;i++){
        for(j=6;j<=8;j++){
        suma=suma+M[i][j];
        if(suma==45){
        gano=true;
        return gano;
        }
    }
    }
return gano;
}

void matrizrnd(int M[9][9]){
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

for(i=0;i<9;i++){//checkea las columnas
    for(j=c;j<=c;j++){
        if(num==M[i][j])licito=false;
    }
}
           if(licito) M[f][c]=num;

for(i=0;i<9;i++){
    for(j=0;j<9;j++){
        if(M[i][j]==0)ceros++;
    }
}
if(ceros==40)ok=true;
        }
}

void reporte(jugador player[2],int turno){
string texto,linea;
ifstream reporte("reporte.txt");

while(getline(reporte,linea)){
    texto=texto+linea+"\n";
}
reporte.close();

ofstream reporte2("reporte.txt");
reporte2<<texto<<"REPORTE NUEVO"<<"\n";
if(turno==0||turno==1)reporte2<<"Ganador del sudoku:"<<player[turno].nombre<<"\n";
else reporte2<<"Ganador del sudoku:"<<"Ninguno de los dos jugadores gano"<<"\n";
reporte2<<"Casillas llenadas por el jugador 1:"<<player[0].casillas<<"\n";
reporte2<<"Casillas llenadas por el jugador 2:"<<player[1].casillas<<"\n";
reporte2<<"\n";
}

int main(){
int M[9][9],i,j,respuesta,modo,turno=0;
bool gano;
jugador player[2];


for(i=0;i<9;i++){//se inicializa la matriz en 0
    for(j=0;j<9;j++){
        M[i][j]=0;
    }
}

for(i=0;i<2;i++){//se pide el nombre de cada jugador
    cout<<"Ingrese el nombre del jugador numero "<<i+1<<endl;
    cin.getline(player[i].nombre,20,'\n');
}
do{
cout<<"              Seleccione una opcion:"<<endl;
cout<<"              1.Modo con casillas en 0"<<endl;
cout<<"              2.Modo con casillas aleatorias"<<endl;
cin>>modo;//se selecciona el modo
}while(modo<1||modo>2);
switch(modo){
case 1:
    do{
    cout<<"              ES EL TURNO DEL JUGADOR "<<turno+1<<endl;
    menu();
    cin>>respuesta;
    switch(respuesta){
    case 1:mostrarsdk(M);
    break;

    case 2:turno=cambiarnum(M,player,turno);
    if(turno==2)respuesta=4;
    break;

    case 3:info(player,turno);
    break;

    case 4:turno=2;
    break;
    }
gano=win(M,player);
if(gano==true){
    respuesta=4;
    cout<<"              EL GANADOR DEL SUDOKU ES EL JUGADOR NUMERO "<<turno+1<<" YA QUE LLENO UN CUADRANTE"<<endl;
}
}while(respuesta!=4);
break;
case 2: srand(time(NULL));
        matrizrnd(M);//matriz aleatoria
        do{
    cout<<"              ES EL TURNO DEL JUGADOR "<<turno+1<<endl;
    menu();
    cin>>respuesta;
    switch(respuesta){
    case 1:mostrarsdk(M);
    break;

    case 2:turno=cambiarnum(M,player,turno);
    if(turno==2)respuesta=4;
    break;

    case 3:info(player,turno);
    break;

    case 4:turno=2;
    break;
    }
gano=win(M,player);
if(gano==true){
    respuesta=4;
    cout<<"              EL GANADOR DEL SUDOKU ES EL JUGADOR NUMERO "<<turno+1<<" YA QUE LLENO UN CUADRANTE"<<endl;
}
}while(respuesta!=4);
break;
}
turno=fin(player,turno);
info(player,turno);
reporte(player,turno);
}
