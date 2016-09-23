#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

/**
 * \brief Busca el primer lugar  disponible del array.
 * \param lista Es el array en el cual buscar.
 * \param arrayLenght Indica la longitud del array
 * \return Si no hay lugares libres (-1) y si los hay la posición del mismo (i)
 */
int obtenerEspacioLibre(EPersona lista[], int arrayLenght)
{
    int i;
    for(i=0; i < arrayLenght; i++)
    {
       if(lista[i].status == 0)
       {
           return i;
       }
    }
    return -1;
}

/**
 * \brief Busca la primera aparicon deDNI ya ingresado
 * \param lista Es el array en el cual buscar.
 * \param arrayLenght Indica la longitud del array.
 * \param dni Es el valor que se busca.
 * \return Si no hay ocurrencia (-1) y si la hay la posición de la misma (i)
 */
int peopleByDni(EPersona lista[], int arrayLenght, long int dni)
{
    int i;
    for(i=0; i < arrayLenght; i++)
    {
       if(lista[i].dni == dni && lista[i].status == 1)
       {
           return i;
       }
    }
    return -1;
}

/**
 * \brief Verifica si el valor recibido es numérico
 * \param str Array con la cadena a ser analizada
 * \return 1 si es númerico y 0 si no lo es
 *
 */

int esNumerico(char str[])
{
   int i=0;
   while(str[i] != '\0')
   {
       if(str[i] < '0' || str[i] > '9')
           return 0;
       i++;
   }
   return 1;
}

/**
 * \brief Verifica si el valor recibido contiene solo letras
 * \param str Array con la cadena a ser analizada
 * \return 1 si contiene solo ' ' y letras y 0 si no lo es
 *
 */
int esSoloLetras(char str[])
{
   int i=0;
   while(str[i] != '\0')
   {
       if((str[i] != ' ') && (str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z'))
           return 0;
       i++;
   }
   return 1;
}

/**\brief Solicita un numero entero al usuario y lo valida
 * \param long int number numero ingresado por el usuario,a validar
 * \param long int desde  min numero aceptado
  *\param long int hasta  maxi numero aceptado
 * \return int numero 0 si no es valido o 1
 */

int validLongIntRange(long int number,long int minimo,long int maximo)
{
     int isInvalid=0;
     if (number >= minimo && number <= maximo)
     {
         return 1;
     }
     return isInvalid;
}


 /**\brief Solicita un numero entero al usuario y valida si cumple el param solicitado
 * \param int number numero ingresado por el usuario a validar
 * \param int mini  minimo numero aceptado
  *\param int maxi  maximo numero aceptado
 * \return int isInvalida(0) si no pasa la validación o 1
 */

int validIntRange(int number,int minimo,int maximo)
{
     int isInvalid=0;
     if (number >= minimo && number <= maximo)
     {
         return 1;
     }
     return isInvalid;
}

/**
 * \brief Inicializa todas las filas del array a 0
 * \param lista ahi dfinimos el array
 * \param arrayLenght Indica la logitud del array defiida x MAX_PEOPLE
 * \return
 */
void setStatus(EPersona lista[], int arrayLenght)
{
    int i;
    for(i=0;i < arrayLenght; i++)
    {
        lista[i].status = 0;
    }
}
