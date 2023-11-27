#include <iostream>
#include <time.h>
#include<stdlib.h>

using namespace std;

int main(){
    srand(time(NULL));
    int dado1, dado2, jugador=1, suma, bandera=1;

    while(bandera==1){
    cout<< "El jugador "<<jugador<<" lanza los dados"<<endl;
    dado1=rand()%6+1;
    dado2=rand()%6+1;
    cout<< "El dado 1 salio: "<<dado1<<endl;
    cout<< "El dado 2 salio: "<<dado2<<endl;
    suma=dado1+dado2;
    cout<< "La suma de los dados es: "<<suma<<endl;


    if(suma==7  suma==11){
        cout<< "El jugador "<<jugador<<" Gano el Juego :)"<<endl;
        bandera=0;
    }
    if(suma==2  suma==3  suma==8){
        cout<< "El jugador "<<jugador<<" Perdio el Juego :("<<endl;
        bandera=0;
    }
    if(suma==4  suma==5  suma==6 suma==8  suma==9  suma==10 ){
        cout<< "El jugador "<<jugador<<" no gano ni perdio, sigue el juego"<<endl;
        bandera=1;
    }
    if (jugador==1){
        jugador=2;
    }
    else{
        jugador=2;
    }

    }
}
