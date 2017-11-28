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
int comprobante(int z, char p[]);
int main() {
    int numerico;
    char numero[9];
    int control;
    do
   {
       system("CLEAR");
        printf("Seleccione la opción correspondiente a la aplicación que vaya a usar\n1. Obtención letra DNI\n2. Cálculo de números romanos\n0. Finalizar\n");
        scanf("%i",&numerico);
        if (numerico == 1 || numerico == 2)
        {
        printf("Indique el numero a transformar\n");
        scanf("%s", &numero);
        }
        switch(numerico)
        {
            case 1 :
                comprobante(numerico,numero);
                break;
            case 2 :
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


