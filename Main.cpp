#include "Funciones.h"

using namespace std;

int main()
{   int Numpol;

    cout<<"*----- Bienvenido a la tarea 1 -----*"<<endl;
    cout<<endl;
    cout<<"¿Cuantos polinomios desea Analizar?"<<endl;
    cin>>Numpol;
    Polinomio Arreglo[Numpol];
    LlenarPol(Arreglo, Numpol);
    ReducRufini(Arreglo,Numpol);


    return 0;
}
