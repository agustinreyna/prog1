#include <iostream>
using namespace std;
void pro(int X[100][3], int m){
int i,j;
float acu =0;
for (i = 0; i < m; i++)
    {
        for (j = 0; j < 3; j++)
        {
            acu += X[i][j];
        }
    }
cout<< "el promedio general es de "<< acu/(m*3)<<endl;
}
void desaprobados(int X[100][3], int m){
    int i,j;
    float cantdes=0, porcen;
for (i = 0; i < m; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (X[i][j]<4){
            cantdes+=1;
            }
        }
    }
    porcen = ((cantdes/(m*3)))*100;
    cout<< "la cantidad de desaprobados es "<<cantdes<<" y el procentaje es "<< porcen<<endl;

}
void masalta(int X[100][3], int m){
    int i,j, nota, alum, aux;
for (j = 0; j < 3; j++)
    {
        nota =0;
        for (i = 0; i < m; i++)
        {
            if (nota<X[i][j]){
            nota = X[i][j];
            alum = i;
            }
        }
        cout<<"la nota mas alta de la prueba "<<j<<" es "<<nota<< " y fue hecha por el alumno " << alum <<endl;

    }
}
int main(){
    int M[100][3], i, j, n, m ;
    cout<< "indique la cant de filas" <<endl;
    cin>>n;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << "Indique la nota del alumno " << i << " de la prueba " << j << endl;
            cin >> M[i][j];
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << M[i][j] << " ";
        }
        cout<<endl;
}
pro(M,n);
desaprobados(M,n);
masalta(M,n);
}
