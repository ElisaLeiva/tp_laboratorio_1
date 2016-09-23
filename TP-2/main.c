/*
-Programa:Trabajo Practico N°2.
-Objetivo:Crear estructura que represente una persona, con campos de nombre,edad,dni y un flag de estado.
-Autor:Leiva Elisa.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "funciones.h"
#define MAX_P 20

int main()
{
    char seguir='s';
    int option=0;
    char auxOption[10];
    EPersona lista[MAX_P];
    EPersona auxLista;
    int indexFreePlace;
    int datoCtrl;
    int contador18=0;
    int contador36=0;
    int contador=0;
    int flagABM=0;
    char auxNombre[50];
    char auxEdad[50];
    char auxDni[50];
    long int auxDniCtrl;
    char auxEdadCtrl;
    int i, j, max=0;

    setStatus(lista,MAX_P);

    while(seguir=='s')
    {

        printf("\n");
        printf("1- Agregar persona\n");
        printf("2- Borrar persona\n");
        printf("3- Imprimir lista ordenada por  nombre\n");
        printf("4- Imprimir grafico de edades\n\n");
        printf("5- Salir\n\n");

        printf("Para comenzar indique opcion:\n");
        scanf("%s",auxOption);

        if (esNumerico(auxOption) == 0)
        {
            printf("OPCION NO VALIDA!!\n");
            system("pause");
            system("cls");
            continue;
        }

        option=atoi(auxOption);

        switch(option)
        {
            case 1:

                indexFreePlace = obtenerEspacioLibre(lista,MAX_P);

                if(indexFreePlace == -1)
                {
                    printf("COMPLETADA LA CAPACIDAD DE ALMACENAJE!!\n");
                    system("pause");
                    system("cls");
                    break;
                }
                puts("===ALTA===\n");

                printf("Ingrese nombre:\n");
                fflush(stdin);
                gets(auxNombre);

                if (esSoloLetras(auxNombre) == 0)
                {
                    printf("EL NOMBRE SOLO PUEDE TENER LETRAS!!\n");
                    system("pause");
                    system("cls");

                    break;
                }


                 printf("Ingrese la edad (1/99) :\n");
                 scanf("%s",auxEdad);

                    if (esNumerico(auxEdad) == 0)
                    {
                        printf("EDAD SOLO PUEDE CONTENER NUMEROS!!\n");
                        break;
                    }
                    else
                    {
                        auxEdadCtrl = atoi(auxEdad);

                        if(validIntRange(auxEdadCtrl,1,99)== 0)
                        {
                            printf("RANGO EDAD INVALIDO, SOLO ENTRE 1 A 99!!\n");
                            system("pause");
                            system("cls");

                            break;
                        }
                    }

                printf("ingrese el DNI:\n");
                scanf("%s",auxDni);

                if (esNumerico(auxDni)==0)
                {
                    printf("DNI SOLO PUEDE CONTENER NUMEROS!!\n");
                    system("pause");
                    system("cls");
                    break;
                }

                else
                {
                    auxDniCtrl=atoi(auxDni);

                    if(validLongIntRange(auxDniCtrl,1000000,99000000)==0)
                    {
                        printf("RANGO DE DNI INVALIDO!!\n");
                        system("pause");
                        system("cls");
                        break;
                    }
                }

                    datoCtrl = peopleByDni(lista,MAX_P,auxDniCtrl);

                      if (datoCtrl != -1)
                      {
                          printf("EL DNI YA ESTA INGRESADO!!\n");
                          system("pause");
                          system("cls");
                          break;
                      }


               strcpy(lista[indexFreePlace].nombre,auxNombre);
               lista[indexFreePlace].edad = auxEdadCtrl;
               lista[indexFreePlace].dni = auxDniCtrl;
               lista[indexFreePlace].status = 1 ;


               if (lista[indexFreePlace].edad <= 18)
                   {
                       contador18++;
                   }
                   else if (lista[indexFreePlace].edad >35)
                   {
                       contador36++;
                   }
                   else
                   {
                         contador++;
                   }

                flagABM= 1;

                system("cls");

                break;

            case 2:

                if (flagABM == 0)
                {
                    printf("NO SE PUEDE BORRAR DATOS SIN ANTES INGRESARLOS!!\n");
                    system("pause");
                    system("cls");
                    break;
                }
                 puts("===BAJA===\n");

                 printf("ingrese el DNI:\n");
                 scanf("%s",auxDni);

                   if (esNumerico(auxDni) == 0)
                    {
                      printf("DNI SOLO PUEDE CONTENER NUMEROS!!\n");
                      system("pause");
                      system("cls");
                      break;
                    }

                    else
                    {
                        auxDniCtrl=atol(auxDni);

                        if(validLongIntRange(auxDniCtrl,1000000,99000000)==0)
                        {
                        printf("RANGO DE DNI INVALIDO!!\n");
                        system("pause");
                        system("cls");
                        break;
                        }

        while (strlen(auxDni)!=8)

                            {
                            printf("Reingrese codigo que quiere dar de baja: ");
                            FLUSH;
                            gets(auxDni);
                            }
    /* BUSCA EN EL VECTOR SI LO ENCUENTRA PONE CODIGO A CERO*/
    int a;
    for(a=0;a<M;a++)
                            {
                            if(strcmp(aux, datos[a].dni)==0)
                                {
                                strcpy(datos[a].dni, "00000000");
                                break;
                                }
                            }
    /* COMPRUEBA SI RECCORIO TODO EL VECTOR NO LO ENCONTRO, SINO YA ESTA BORRADO*/

        if (a==M)

                    printf("\nDNI no encontrado.");
                    else
                    printf("\nDNI borrado exitosamente");

                printf("\nPresione ENTER para continuar...");
                system("pause>>null");





                    }

                break;

            case 3:

                if (flagABMStart == 0)
                {
                    printf("NO SE PUEDE IMPRIMIR DATOS SIN ANTES INGRESARLOS!!\n");
                    system("pause");
                    system("cls");
                    break;
                }
                 puts("===LISTA===\n");


                  for (i=0; i<MAX_PEOPLE-1;  i++)
                  {
                      if (lista[i].status == 0)
                      {
                          continue;
                      }
                      for (j=i+1;  j<MAX_PEOPLE; j++)
                      {
                           if (lista[i].status==0)
                           {
                             continue;
                           }
                           if (stricmp(lista[i].nombre,lista[j].nombre)>0)
                           {
                               auxLista = lista[i];
                               lista[i] = lista[j];
                               lista[j] = auxLista;
                           }
                      }
                  }

                  for(i=0; i<MAX_PEOPLE;i++)
                  {
                      if (lista[i].status == 0)
                      {
                          continue;
                      }
                      printf("NOMBRE :%18s  EDAD :%8d \tDNI :%8ld\n",lista[i].nombre,lista[i].edad,lista[i].dni);
                  }
                    system("pause");
                    system("cls");

                break;

            case 4:

                if (flagABMStart == 0)
                {
                    printf("NO SE PUEDE IMPRIMIR DATOS SIN ANTES INGRESARLOS!!\n");
                    system("pause");
                    system("cls");
                    break;
                }
                 puts("===GRAFICO===\n");

                int countingValue[]={counting18,countingBetween,counting36};

               for(i=0; i<3; i++)
               {
                    if (countingValue[i]>max)
                    {
                        max = countingValue[i];
                    }
               }

                for(i=max; i>0; i--)
                {
                    for(j=0; j<3; j++)
                    {
                        if (countingValue[j]>=i)
                        {
                            printf("     *");
                        }

                        else
                        printf("      ");
                    }
                    putchar('\n') ;
                }

                printf("   <18   19-35   >35\n\n");
                system("pause");
                system("cls");

                break;

            case 5:
                 seguir = 'n';
                 printf("FIN DEL PROGRAMA\n");

                break;

                default:

                printf("OPCION INVALIDA!!!\n");
                system("pause");
                system("cls");

        }
    }

    return 0;
}
