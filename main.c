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
//int comprobante(int z, char p[]);
int main() {
    int numerico;
    char numero1[20];
    char numero2[20];
    int control;
  do
  {
       system("CLEAR");
        printf("Seleccione la opción correspondiente a la aplicación que vaya a usar\n1. Obtención letra DNI\n2. Cálculo de números romanos\n");
        printf("3.Calculo IMC\n4.Número de billetes\n0. Finalizar\n");
        scanf("%i",&numerico);
        if (numerico == 1 || numerico == 2)
        {
        printf("Indique el numero a transformar\n");
        scanf("%s", &numero1);
        }
        switch(numerico)
        {
            case 1 :
                printf("Indique el numero de DNI\n");
                scanf("%s", &numero1);
                comprobante(numerico,numero1);
                
                break;
            case 2 :
                printf("Indique el numero a transformar en romano\n");
                scanf("%s", &numero1);
                comprobante(numerico,numero);
                break;
            case 3 :
                printf("Indique el peso\n");
                scanf("%s", &numero1);
                printf("Indique la altura \n");
                scanf("%s", &numero2);
                comprobante(numerico,numero1,numero2);
                break;
             case 4 :
                printf("Indique el numero de DNI\n");
                scanf("%s", &numero1);
                comprobante(numerico,numero);
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


