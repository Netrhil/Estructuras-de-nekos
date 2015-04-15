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
       cout<<"Raiz Numero "<<z+1<<endl;
       cin>>Pol[i].Raizes[z];
    }
   }
   cout<<endl;
 }

void Mostrarpolinomios(Polinomio Pol[],int Num){

cout<<" *-----  Mostrando Polinomios -----*"<<endl;
 for(int i=0;i<Num;i++){
    cout<<" *----- Polinomio numero "<<i+1<<" -----*"<<endl;
      cout<<endl;
    cout<< " El grado del polinomio es "<<Pol[i].Grado<<endl;

    cout<<" *-----  Coeficientes -----*"<<endl;
      cout<<endl;
    for(int j=0;j<Pol[i].Grado+1;j++){
       cout<<"Coeficientes de x elevado a "<<Pol[i].Grado-j<<" es " << Pol[i].Coeficientes[j]<<endl;

    }
      cout<<" *----- Raizes -----*"<<endl;
     cout<<" Las raizes del polinomio son "<<endl;
    for(int z=0;z<Pol[i].Grado-2;z++){
       cout<<Pol[i].Raizes[z]<<" , ";
    }
   }
     cout<<endl;
 }

 void CalcularRaizes(float Arreglo[]){
   float result1,result2,a=Arreglo[0],b=Arreglo[1],c=Arreglo[2];
    result1=(-b+(sqrt(pow(b,2)-4*a*c) ))/(2*a);
    result2=(-b-(sqrt(pow(b,2)-4*a*c) ))/(2*a);
     cout<<result1<<" , "<<result2;

 }

 void ReducRufini(Polinomio Pol[],int Num){
    for(int i=0;i<Num;i++){
        for(int j=0;j<Pol[i].Grado-2;j++){
            for(int z=0;z<Pol[i].Grado+1;z++){
                Pol[i].Coeficientes[z+1]=Pol[i].Raiz[j]*Pol[i].Coeficientes[z]+Pol[i].Coeficientes[z+1];
           }

        }
       CalcularRaizes( Pol[i].Coeficientes);
    }

 }
