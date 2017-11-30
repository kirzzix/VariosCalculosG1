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
//int comprobante(int z, char p[],char y[]);
int main() {
    int numerico;
    char numero1[20]; //Declaramos las variables como cadenas para poder después desglosar el número en dígitos
    char numero2[20];
    int control; //Variable para indicar después que el bucle siga
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
                /*if (comprobante(numerico,numero1))
                {
                    //operación del DNI
                }*/
                printf("Operación DNI\n");
                break;
            case 2 :
                printf("Indique el numero a transformar en romano\n");
                scanf("%s", &numero1);
                /*if (comprobante(numerico,numero1))
                {
                    //operación de los romanos
                }*/
                printf("Operación Romanos\n");
                break;
            case 3 :
                printf("Indique el peso\n");
                scanf("%s", &numero1);
                do 
                {
                printf("Indique la altura en metros usando el punto como separador decimal \n");
                scanf("%s", &numero2);
                if (atoi(numero2) >=2) 
                {
                    printf("Número erroneo introduzca de nuevo la altura\n");
                }
                }while (atoi(numero2) >= 3);
                printf("Operación del IMC \n");
                /*if (comprobante(numerico,numero1,numero2))
                {
                    //operación del IMC
                }*/
                break;
             case 4 :
                printf("Indique el sueldo\n");
                scanf("%s", &numero1);
                /*if (comprobante(numerico,numero1))
                {
                    //operación de los billetes                
                }*/
                printf("Operación de los billetes \n");
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
