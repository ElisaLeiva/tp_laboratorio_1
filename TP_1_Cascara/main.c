/*
-Programa:Trabajo Practico N°1.
-Objetivo:Realizar calculadora.
-Autor:Leiva Elisa.
*/

#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    float A=0,B=0,resultado=0;
    int respuesta=0,opcion=0;

    do
    {
        system("cls");
        printf("Seleccione una opcion\n\n");

        printf("1_ Ingresar primer operando (A=%.2f)\n",A);
        printf("2_ Ingresar segundo operando (B=%.2f)\n",B);
        printf("3_ Calcular la suma (A+B)\n");
        printf("4_ Calcular la resta (A-B)\n");
        printf("5_ Calcular la division (A/B)\n");
        printf("6_ Calcular la multiplicacion (A*B)\n");
        printf("7_ Calcular el factorial (A!)\n");
        printf("8_ Calcular todas las operaciones\n");
        printf("9_ Salir\n");

        printf("\n");
        printf("Opcion: ");
        scanf("%d",&opcion);
        printf("\n");

        while(opcion>9)
        {
            printf("\nError , reingrese (numero entre 0-9)");
            printf("\n");
            printf("Opcion: ");
            scanf("%d",&opcion);
            printf("\n");
        }

        switch(opcion)
        {
            case 1:
                printf("Ingrese primer operando: ");
                scanf("%f",&A);
                system("pause");
                break;

            case 2:
                printf("Ingrese segundo operando: ");
                scanf("%f",&B);
                system("pause");
                break;

            case 3:
                resultado=sumar(A,B);
                printf("El resultado de la suma es de : %.2f\n\n", resultado);
                system("pause");
                break;

            case 4:
                respuesta=restar(A,B);
                printf("El resultado de la resta es de : %.2f\n\n", resultado);
                system("pause");
                break;

            case 5:

                if(B==0)
                    {
                        printf("No se puede dividir entre 0.\n\n");
                    }
                else
                    {
                    resultado=division(A,B);
                    printf("El resultado de la division es de: %.2f\n\n",resultado);
                    }
                    system("pause");
                    break;

            case 6:
                resultado=multiplicar(A,B);
                printf("El resultado de la multiplicacion es de: %.2f\n\n",resultado);
                system("pause");
                break;


            case 7:

                if(A<0||((A-(int)A)!=0))

                    {
                        printf("No se puede realizar operacion con numeros negativos o decimales.\n\n");
                    }
                else
                    {
                    respuesta=factorial(A);
                    printf("El factorial es: %d\n\n",respuesta);
                    printf("\n");

                }

                system("pause");
                break;


            case 8:
                sumar(A,B);
                resultado=sumar(A,B);
                printf("El resultado de la suma es: %.2f\n",resultado);

                restar(A,B);
                resultado=restar(A,B);
                printf("El resultado de la resta es: %.2f\n",resultado);


                division(A,B);

                 if(B==0){
                    printf("No se puede dividir por 0.\n");
                    }

                else {
                    resultado=division(A,B);
                    printf("el resultado de la division es %.2f\n",resultado);

                    }

                multiplicar(A,B);
                resultado=multiplicar(A,B);
                printf("El resultado de la multiplicacion es: %.2f\n",resultado);

                factorial(A);

                 if(A<0||((A-(int)A)!=0))
                {
                    printf("No se puede realizar operacion con numeros negativos o decimales.\n\n");
                }
                else
                {

                    respuesta=factorial(A);
                    printf("El factorial es: %d\n\n",respuesta);
                    printf("\n");

                }

               system("pause");
                break;


            case 9:

                return 0;
                break;
        }

    }while(opcion<9);

     system("pause");
     return 0;
}
