#ifndef FUNCIONES_H_INCLUDED

typedef struct {

    char nombre[50];
    int edad;
    long int dni;
    int status;//Activa 1 o inactiva 0.

}EPersona;

int esNumerico(char str[]);
int esSoloLetras(char str[]);
int validLongIntRange(long int number,long int mini,long int maxi);
int validIntRange(int number,int minimo,int maximo);
void setStatus(EPersona lista[], int arrayLenght);
int obtenerEspacioLibre(EPersona lista[], int arrayLenght);
int peopleByDni(EPersona lista[], int arrayLenght, long int dni);

#define FUNCIONES_H_INCLUDED
#endif // FUNCIONES_H_INCLUDED
