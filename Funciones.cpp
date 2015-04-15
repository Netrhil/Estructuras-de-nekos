#include <iostream>
#include <math.h>

using namespace std;

typedef struct{
   int Grado;
   float Coeficientes[];
   float Raizes[];

}Polinomio;

void LlenarPol(Polinomio Pol[], int Num){
 cout<<" *----- Llenando los polinomios -----*"<<endl;
 for(int i=0;i<Num;i++){
    cout<<" Polinomio "<<i+1<<endl;
    cout<< " Ingrese el grado del Polinomio"<<endl;
    cin>>Pol[i].Grado;
    cout<<" *----- Llenando Coeficientes -----*"<<endl;
    for(int j=0;j<Pol[i].Grado+1;j++){
       cout<<"Ingrese coeficientes de x elevado a "<<Pol[i].Grado-j<<" -----*"<<endl;
       cin>>Pol[i].Coeficientes[j];
    }
      cout<<" *----- Llenando las raizes -----*"<<endl;

    for(int z=0;z<Pol[i].Grado-2;z++){
       cout<<"Ingrese las raizes del polinomio "<<z+1<<endl;
       cin>>Pol[i].Raizes[z];
    }
   }
 }

void Mostrarpolinomios(Polinomio Pol[],int Num){

cout<<" *----- Polinomios -----*"<<endl;
 for(int i=0;i<Num;i++){
    cout<<" *----- Polinomio numero "<<i+1<<" -----*"<<endl;
    cout<< " El grado del polinomio es "<<Pol[i].Grado<<endl;

    cout<<" *-----  Coeficientes -----*"<<endl;
    for(int j=0;j<Pol[i].Grado+1;j++){
       cout<<"Coeficientes de x elevado a "<<Pol[i].Grado-j<<" es " << Pol[i].Coeficientes[j]<<endl;

    }
      cout<<" *----- Raizes -----*"<<endl;
     cout<<"Ingrese las raizes del polinomio son "<<endl;
    for(int z=0;z<Pol[i].Grado-2;z++){
       cout<<Pol[i].Raizes[z]<<endl;
    }
   }
 }

 void CalcularRaizes(float Arreglo[]){
   float result1,result2,a=Arreglo[0],b=Arreglo[1],c=Arreglo[2];
    result1=(-b+(sqrt(pow(b,2)-4*a*c) ))/(2*a);
    result2=(-b-(sqrt(pow(b,2)-4*a*c) ))/(2*a);
     cout<<result1<<" , "<<result2;

 }
