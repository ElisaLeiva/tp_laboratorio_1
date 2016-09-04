#include<stdio.h>
#include<stdlib.h>
#include"funciones.h"

 /** \brief Tomo dos numeros (operandos) realizando su suma.
  *
  * \param A primer operando.
  * \param B segundo operando.
  * \return Resultado de suma.
  *
  */


float sumar( float A, float B)
{
    float resultado;
    resultado=A+B;
    return resultado;

}

  /** \brief Tomo dos numeros (operandos) realizando su resta.
  *
  * \param A primer operando.
  * \param B segundo operando.
  * \return Resultado de resta.
  *
  */

float restar(float A, float B)

 {
     float resultado;
     resultado=A-B;
     return resultado;
 }


 /** \brief Tomo dos numeros (operandos) realizando su division.
  *
  * \param A dividendo.
  * \param B divisor.
  * \return Resultado de division.
  *
  */

float division(float A, float B)

  {
      float resultado;
      resultado=A/B;
      return resultado;
  }

 /** \brief Tomo dos numeros (operandos) realizando su multiplicacion.
  *
  * \param A primer operando.
  * \param B segundo operando.
  * \return Resultado de multiplicacion.
  *
  */

 float multiplicar(float A, float B)

 {
     float resultado;
     resultado=A*B;
     return resultado;

 }

  /** \brief tomo un numero y realizo su factorial.
   *
   * \param Operando A.
   * \return Resultado de factorial.
   *
   */

  int factorial(int A)

   {
        int factorial=1;
        for(factorial=1;A>=1;A--){
        factorial=factorial*A;}

        return factorial;




   }



