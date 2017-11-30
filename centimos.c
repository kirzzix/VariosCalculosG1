/* 
 * File:   centimos.c
 * Author: juanmi
 *
 * Created on 28 de noviembre de 2017, 12:48
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int centimos(char sueldo[]) {
    
    
    
    
    double sueldoinicial;
    double sueldoentero,sueldodecimales;
    int mn050,mn020,mn010,mn005,mn002,mn001;
    int resto;
    
    //printf("Introduzca sueldo:\n");
    //scanf("%f",&sueldoinicial);
    //printf ("sueldoinicial= %0.2f \n",sueldoinicial);
    //calcular el sueldo para los decimales;
    
    sueldoinicial=atof(sueldo);
    
    sueldodecimales=modf(sueldoinicial,&sueldoentero)*100.5;
    //modf vale para truncar el numero;esta incluido en math.h
    //multiplico por 100.5 para evitar redondeo
    
    
    //calculo de las monedas de centimo;
    mn050=sueldodecimales/50;
    //printf("centimos de 50: \t %i \n ",mn050);
    resto=sueldodecimales-(mn050*50);
    mn020=resto/20;
    //printf("centimos de 20: \t %i \n ",mn020);
    resto= resto -(mn020*20);
    mn010=resto/10;
    //printf("centimos de 10: \t %i \n ",mn010);
    resto= resto -(mn010*10);
    mn005= resto/5;
    //printf("centimos de 5: \t %i \n ", mn005);
    resto= resto-(mn005*5);
    mn002= resto/2;
    //printf("centimos de 2: \t %i \n ", mn002);
    resto=resto-(mn002*2);
    mn001=resto;
    //printf("centimos de 1: \t %i \n", mn001);






    


    return (mn050,mn020,mn010,mn005,mn002,mn001);
}
