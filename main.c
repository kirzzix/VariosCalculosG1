/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: esteban
 *
 * Created on 28 de noviembre de 2017, 10:50
 */
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
int validar(int menu, char cadena1[],char cadena2[]);
void romanos(int j);
void numerodni(int numtodni);
int main() {
    int numerico;
    char numero1[20]; //Declaramos las variables como cadenas para poder después desglosar el número en dígitos
    char numero2[20]="34567";
    int control; //Variable para indicar después que el bucle siga
    int numeras;
  do
  {
       system("CLEAR"); //Limpiar pantalla cada vez que se ejecute el bucle
        printf("Seleccione la opción correspondiente a la aplicación que vaya a usar\n");
        printf("1. Obtención letra DNI\n");
        printf("2. Cálculo de números romanos\n");
        printf("3. Calculo IMC\n");
        printf("4. Número de billetes\n");
        printf("0. Finalizar\n");
        scanf("%i",&numerico);
        switch(numerico)
        {
            case 1 :
                printf("Indique el numero de DNI\n");
                scanf("%s", &numero1);
                numeras = atoi(numero1);
                if (validar(numerico,numero1,numero2)==0 )
                {
                    numerodni(numeras);
                    
                    
                    
                }
                
                break;
            case 2 :
                printf("Indique el numero a transformar en romano\n");
                scanf("%s", &numero1);
                numeras = atoi(numero1);
                if (validar(numerico,numero1,numero2)==0)
                {
                    romanos(numeras);
                }

                break;
            case 3 :
                printf("Indique el peso\n");
                scanf("%s", &numero1);
                do 
                {
                printf("Indique la altura en metros usando el punto como separador decimal \n");
                scanf("%s", &numero2);
                if (atof(numero2) >=3) 
                {
                    printf("Número erroneo introduzca de nuevo la altura\n");
                }
                }while (atof(numero2) >= 3);
                
               if (validar(numerico,numero1,numero2)==0)
                {
                    printf("Operación del IMC \n");
                }
                break;
             case 4 :
                printf("Indique el sueldo\n");
                scanf("%s", &numero1);
                if (validar(numerico,numero1,numero2)==0)
                {
                     printf("Operación de los billetes \n");            
                }

                break;
                                   
  
            case 0 :
                printf("Programa finalizado");
                break;
              
                
            default :
                printf("Número erroneo");
                break;
        }
        if (numerico == 0)
        {
            break;
        }
        printf("\n\n¿Quiere continuar?\n1.Si\n2.No\n");
        scanf("%i",&control);
    }while (control == 1);
    
}
