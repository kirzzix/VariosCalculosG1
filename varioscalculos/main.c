/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: juanmi
 *
 * Created on 28 de noviembre de 2017, 12:48
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
 * 
 */
int main() {
//int centimos (float sueldo){
    float sueldoinicial;
    double sueldoentero,sueldodecimales;
    double valor;
    int mn050,mn020,mn010,mn005,mn002,mn001;
    int resto;
    valor=sueldoinicial;
    printf("Introduzca sueldo:\n");
    scanf("%f",&sueldoinicial);
    printf ("sueldoinicial= %f \n",sueldoinicial);
    //calcular el sueldo para los decimales;
    sueldodecimales= modf(valor,&sueldoentero);//modf vale para truncar el numero;esta incluido en math.h
    //http://c.conclase.net/librerias/index.php?ansifun=modf#inicio;
    
    
    
    
    //printf("su sueldo es: \t %i \n", &sueldoentero);
    //sueldodecimales= (sueldoinicial-(int)sueldoinicial)*100;
    printf("su sueldo decimal es: \t %d \n", &sueldodecimales);
    //calculo de los decimales concretos;
    
    mn050=sueldodecimales/50;
    printf("centimos de 50: \t %i \n ",mn050);
    resto=sueldodecimales-(050*50);
    mn020=resto/20;
    printf("centimos de 20: \t %i \n ",mn020);
    resto= resto -(020*20);
    mn010=resto/10;
    printf("centimos de 10: \t %i \n ",mn010);
    resto= resto -(010*10);
    mn005= resto/5;
    printf("centimos de 5: \t %i \n ", mn005);
    resto= resto-(005*5);
    mn002= resto/2;
    printf("centimos de 2: \t %i \n ", mn002);
    resto=resto-(002*2);
    mn001=resto;
    printf("centimos de 1: \t \n %i", mn001);






    


    return (0);
}
