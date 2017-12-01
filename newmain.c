#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>



/*menu:   0.- Salir
        1.- Dni
        2.- Romano
        3.- Imc
        4.- Billetes*/
        


//int z variable z es la opcion del menu
//char p[], char y[] 

int main (int menu,char cadena1[], char cadena2[])
{

        char cadena[9];//cadena recibida
        char cadena2[3];//cadena recibida para funcion IMC
        float numero;
        float numero2;//Variable usada para comprobar IMC
        int menu=4;
        int error=0;
        int control=0;
        int devolucion;
        
        
        //printf("Introduzca caracter\n");
        scanf("%s", cadena);
        int longitud = strlen(cadena);
        
        
       if ( ( menu == 1 ) || ( menu == 2 ) )   //opcion para cuando eligen Dni o Romano 
        {          
            for (int b = 0 ;b < longitud ;b++) //Comprobamos uno a uno si son numeros
            {
                if ((isdigit(cadena[b])))
                {
                    control++;
                }
                else
                {
                break;
                }  
            }
        }
        
        
        if ((menu == 3) || (menu == 4))//opcion para cuando se eligen IMC o Billetes
        {          
            for (int b = 0 ;b < longitud ;b++) //Comprobamos uno a uno si son numeros
            {
                if ((isdigit(cadena[b]) || (cadena[b]=='.')))
                {
                    
                    if ((cadena[b]=='.')) //añadimos una excepcion para el acepte el '.', pero no el segundo '.'
                    {
                        if (error <= 0)  
                        {
                            error++;
                            control++;
                        }
                        else
                        {
                        break; 
                        }  
                    }
                    
                    if (isdigit(cadena[b]))
                    {
                        control++;
                    }
                     
                }
     
                else
                {
                break;
                }  
            }
        }
        
        if ( longitud == control )
        
        {
            numero = atof (cadena);
            numero2 = atof (cadena2);
            
        
            if (menu==1) //Funcion DNI
            {                    
                if (numero>=1 && numero<=99999999) 
                {
                    devolucion = 1;
                    return(devolucion);
                }
            else
            {
                devolucion=0; 
                return(devolucion);
            }
            }
            if (menu==2) //Funcion Romanos   
            {
                if (numero>=1 && numero<=3999) 
                {
                    devolucion = 1;
                    return(devolucion);
                }
            else
            {
                    devolucion=0; 
                return(devolucion);
            }
            }
            if (menu==3)  //Funcion IMC
            {        
                if ((numero>=5 && numero<=300)||(numero2 >= 30 && numero2 <= 250 )) //numero=peso; numero2=altura
                {
                    devolucion = 1;
                    return(devolucion);
                }
            else
            {
                devolucion=0; 
                return(devolucion);
            }
            }
        
            if (menu==4)  //Funcion Billetes
            {
        
                if (numero>=0 && numero<=12000)
                {
                    devolucion = 1;
                    return(devolucion);
                }
            else
            {
                devolucion=0; 
                return(devolucion);  
            }
            }   
        
        }
        else
        {
        }
            
       
}
    