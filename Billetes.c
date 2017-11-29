/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */


#include <stdio.h> 
 
int maxbillete (int dinero) 
{ 
    int billetes_500 = 0; 
    int billetes_200 = 0; 
    int billetes_100 = 0; 
    int billetes_50 = 0; 
    int billetes_20 = 0; 
    int billetes_10 = 0; 
    int billetes_5 = 0; 
    int monedas_2 = 0; 
    int monedas_1 = 0; 
    for (dinero; dinero >= 500 ;) 
    { 
        billetes_500 += 1; 
        dinero -= 500; 
    } 
    for (dinero; (dinero < 500) && (dinero >= 200);) 
    { 
        billetes_200 += 1; 
        dinero -= 200; 
    } 
    if((dinero < 200) && (dinero >= 100)) 
    { 
        billetes_100 += 1; 
        dinero -= 100; 
    } 
    if((dinero < 100) && (dinero >= 50)) 
    { 
        billetes_50 += 1; 
        dinero -= 50; 
    } 
    for(dinero; (dinero < 50) && (dinero >= 20);) 
    { 
        billetes_20 += 1; 
        dinero -= 20; 
    } 
    if ((dinero < 20) && (dinero >= 10)) 
    { 
        billetes_10 += 1; 
        dinero -= 10; 
    } 
    if ((dinero < 10) && (dinero >= 5)) 
    { 
        billetes_5 += 1; 
        dinero -= 5; 
    } 
    for (dinero; (dinero < 5) && (dinero >=2);) 
    { 
        monedas_2 += 1; 
        dinero -= 2; 
    } 
     
    monedas_1 = dinero; 
 
    if (billetes_500 != 0) 
    { 
        printf("%d billetes de 500 euros \n", billetes_500); 
    } 
    if (billetes_200 != 0) 
    { 
        printf("%d billetes de 200 euros \n", billetes_200); 
    } 
    if (billetes_100 != 0) 
    { 
        printf("%d billetes de 100 euros \n", billetes_100); 
    } 
    if (billetes_50 != 0) 
    { 
        printf("%d billetes de 50 euros \n", billetes_50); 
    } 
    if (billetes_20 != 0) 
    { 
        printf("%d billetes de 20 euros \n", billetes_20); 
    } 
    if (billetes_10 != 0) 
    { 
        printf("%d billetes de 10 euros \n", billetes_10); 
    } 
    if (billetes_5 != 0) 
    { 
        printf("%d billetes de 5 euros \n", billetes_5); 
    } 
    if (monedas_2 != 0) 
    { 
        printf("%d monedas de 2 euros \n", monedas_2); 
    } 
    if (monedas_1 != 0) 
    { 
        printf("%d monedas de 1 euros ", monedas_1); 
    } 
} 
