/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

 
#include<stdio.h>
#include<stdlib.h>
int NumRomanos (void) 
{
    int numero, iunidades, idecenas, icentenas, imiles;
    float resto_miles, resto_centenas, resto_decenas;
    enum boolean {false = 0, true = 1}; 
    enum boolean convertible; //variable booleana
    
    // Declaracion de array bidimensional (Columna[4],Fila[10]).
    char *conversion[4][10];
    

    // Pedimos introducir el numero a calcular.
    printf("Introduzca un numero entre 1 y 3000: \n ");
    scanf("%i", &numero);
                   
    convertible = true;      
    
    // Comprobamos si el nÃºmero es vÃ¡lido.
    if(numero == 0)
    {
        printf("El numero 0 no se puede representar.\n");
        convertible == false;
    }
    /*if(numero != (int)numero) // falta sacar la parte entera de nÃºmero
    {
        printf("El nÃºmero debe ser entero.\n");
        convertible == false;
    }*/
    if(numero > 3000)
    {
        printf("El número debe ser menor o igual a 3000.\n");
        convertible == false;
    }
    if(numero < 0)
    {
        printf("El número debe ser positivo.\n");
        convertible == false;
    }
    if (convertible == true)
    {
    // Realizamos los cÃ¡lculos para ir fragmentando el nÃºmero.
    // Miles:
    imiles = numero/1000;
    resto_miles = numero%1000;
    // Centenas:
    icentenas = resto_miles/100;
    resto_centenas= numero%100;
    // Decenas:                  
    idecenas = resto_centenas/10;
    resto_decenas= numero%10;
    // Unidades:          
    iunidades= resto_decenas;
     
    // Recorremos el array de miles.
    conversion[0][0] = "";
    conversion[0][1] = "M";
    conversion[0][2] = "MM";
    conversion[0][3] = "MMM";
    // Recorremos el array de centenas.
    conversion[1][0] = "";
    conversion[1][1] = "C";
    conversion[1][2] = "CC";
    conversion[1][3] = "CCC";
    conversion[1][4] = "CD";
    conversion[1][5] = "D";
    conversion[1][6] = "DC";
    conversion[1][7] = "DCC";
    conversion[1][8] = "DCCC";
    conversion[1][9] = "CM";
    // Recorremos el array de decenas.
    conversion[2][0] = "";
    conversion[2][1] = "X";
    conversion[2][2] = "XX";
    conversion[2][3] = "XXX";
    conversion[2][4] = "XL";
    conversion[2][5] = "L";
    conversion[2][6] = "LX";
    conversion[2][7] = "LXX";
    conversion[2][8] = "LXXX";
    conversion[2][9] = "XC";
    // Recorremos el array de unidades.
    conversion[3][0] = "";
    conversion[3][1] = "I";
    conversion[3][2] = "II";
    conversion[3][3] = "III";
    conversion[3][4] = "IV";
    conversion[3][5] = "V";
    conversion[3][6] = "VI";
    conversion[3][7] = "VII";
    conversion[3][8] = "VIII";
    conversion[3][9] = "IX";
         
    // Mostramos los dÃ­gitos convertidos a romanos.
    printf("%s %s %s %s \n", conversion[0][imiles],conversion[1][icentenas],
                          conversion[2][idecenas],conversion[3][iunidades]);
    }
return 0; 
}  
