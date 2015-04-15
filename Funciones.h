#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
typedef struct{
   int Grado;
   float Coeficientes[];
   float Raizes[];

}Polinomio;
void LlenarPol(Polinomio [], int );
void Mostrarpolinomios(Polinomio [], int);
void CalcularRaizes(float []);
 void ReducRufini(Polinomio [],int);


#endif // FUNCIONES_H_INCLUDED
