//Agustin Reyna 2202124
#include <iostream>
using namespace std;

void mayores(int edades[3]){
int i,cont=0;
    for(i=0;i<3;i++){
        if(edades[i]>60)cont++;
    }
cout<<"La cantidad de empleados mayores de 60 años es de "<<cont<<endl;
}

void sueldomenor(float sueldos[3]){
int i,cont=0;
    for(i=0;i<3;i++){
        if(sueldos[i]<100000)cont++;
    }
cout<<"El porcentaje de empleados cuyo sueldo es menor a 100.000$ es de "<<100*cont/3<<"%"<<endl;
}

void empleadotop(float sueldos[3],string empleados[3]){
int i,sueldo=0;
string nombre;
    for(i=0;i<3;i++){
        if(sueldos[i]>sueldo){
            sueldo=sueldos[i];
            nombre=empleados[i];
        }
    }
cout<<"El nombre del empleado que mas gana es "<<nombre<<endl;
}

void empleadosmenores(float sueldos[3],string empleados[3]){
int i,j,aux2;
string nombres[3],aux;
    for(i=0;i<3;i++){
        nombres[i]=empleados[i];
    }

    for(i=0;i<3;i++){
        for(j=i+1;j<3;j++){
            if(sueldos[i]>sueldos[j]){
                aux=nombres[i];
                nombres[i]=nombres[j];
                nombres[j]=aux;
                aux2=sueldos[i];
                sueldos[i]=sueldos[j];
                sueldos[j]=aux2;
            }
        }
    }
    cout<<"El nombre de los dos empleados que menos ganan son: "<<nombres[0]<<" y "<<nombres[1]<<endl;
}

void jovenes(int edades[3],float sueldos[3]){
int i,cont=0;
    for(i=0;i<3;i++){
        if(sueldos[i]>=25000&&edades[i]<30)cont++;
    }
cout<<"El porcentaje de estudiantes que ganan mas de 25000$ y tienen menos de 30 años es de "<<100*cont/3<<"%"<<endl;
}

void menores25(int edades[3],string empleados[3]){
int i,k=0;
string nombres[3];
    for(i=0;i<3;i++){
        if(edades[i]<=25){
            nombres[k]=empleados[i];
            k++;
        }
    }
cout<<"Los nombre de los empleados que no tienen mas de 25 es son los siguientes ";
    for(i=0;i<3;i++){
        cout<<nombres[i]<<",";
    }
cout<<endl;
}

void promediosueldo(float sueldos[3]){
int i,promedio=0;
    for(i=0;i<3;i++){
        promedio=promedio+sueldos[i];
    }
cout<<"El promedio de lo que ganan todos los empleados de la empresa es "<<promedio/3<<endl;
}

int main(){
int edades[3],i;
float sueldos[3];
string empleados[3];

    for(i=0;i<3;i++){
        cout<<"Ingrese el nombre del empleado numero "<<i+1<<endl;
        cin>>empleados[i];
        cout<<"Ingrese la edad del empleado numero "<<i+1<<endl;
        cin>>edades[i];
        cout<<"Ingrese el sueldo del empleado numero "<<i+1<<endl;
        cin>>sueldos[i];
    }
mayores(edades);
sueldomenor(sueldos);
empleadotop(sueldos,empleados);
empleadosmenores(sueldos,empleados);
jovenes(edades,sueldos);
menores25(edades,empleados);
promediosueldo(sueldos);
}
