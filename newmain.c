/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   newmain.c
 * Author: paco
 *
 * Created on 28 de noviembre de 2017, 12:40
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>



int Romanos(int *x);//Esta funcion manda a la funcion romanos el numero despues de hecha la comprobacion
int Nif (int *y);//Esta funcion manda a la funcion Nif el numero despues de hecha la comprobacion
int Billetes (int *b); //Esta funcion manda a la funcion Billetes el numero despues de hecha la comprobacion.
int Imc (int *i); //Esta funcion manda a la funcion Imc el numero despues de hecha la comprobacion

int Comprobacion ( int *z)//Se reciben los valores del menu de la main con un puntero


{
    char numero[9]; //Recibimos el numero en esta variable?¿?
    
    int longitud;
    int control = 0;
    
    
    //printf("Esta es \n");
    scanf("%s", &numero);
    longitud = strlen(numero);      //longitud toma el valor del numero de caracteres
    printf( "strlen(numero) = %d\n", strlen(numero) );

    printf("Esta es la longitud %i\n",longitud);
   
for (int a=0;a <= longitud ;a++) //Comprobamos uno a uno si son numeros
    {
        if (isdigit(numero[a]))
        {
            printf("Este es el valor que está cogiendo %c\n",numero[a]);
            control++;
            if (a == longitud)
            {
                break;
            }
        }else{
                printf("Numero erroneo. \n Introduzca de nuevo el número\n");
            break;
        }
      
  
           
    }
if (control == longitud)
    {
        int numeras = atoi(numero);
        printf("Este es el numero %i\n",numeras);
        if (*z == 1)
        {
            if (( numeras > 0) && ( numeras <= 99999999))
            {
               Nif(&numeras); //nif(numeras);
            }
            else{
                printf("Introduzca un valor comprendido entre 00000001 y 99999999");
            }
        }
        if (*z == 2)
        {
            if ((( numeras > 0) && ( numeras <= 3999))  )
            {
                Romanos(&numeras);
            }
            else{
                printf("Introduzca un número entero válido comprendido entre 1 y 3999");
            }
        }
        if (*z == 3)
        {
            if ((( numeras > 0) && ( numeras <= 3999))  )
            {
                Romanos(&numeras);
            }
            else{
                printf("Introduzca un número entero válido comprendido entre 1 y 3999");
            }
        }
        
         if (*z == 4)
        {
            if ((( numeras > 0) && ( numeras <= 3999))  )
            {
                Romanos(&numeras);
            }
            else{
                printf("Introduzca un número entero válido comprendido entre 1 y 3999");
            }
        
        
        
      
        }
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
}
 
    return(0);
}