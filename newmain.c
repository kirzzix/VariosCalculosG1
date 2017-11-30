

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>





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

char main ()
{

        char cadena[10];
        int error=0;
        
        printf("Introduzca caracter\n");
        scanf("%s", cadena);

        printf("el caracter es: %s", cadena);
        int longitud = strlen(cadena);
        printf("\nsu longitud es de:%i\n", longitud);
        
        
       //if (menu == 1) || (menu == 2)    //opcion para cuando eligen Dni o Romano 
        {          
            for (int b = 0 ;b < longitud ;b++) //Comprobamos uno a uno si son numeros
            {
                if ((isdigit(cadena[b])))
                {
                    printf("Este es el valor que está cogiendo %c\n",cadena[b]);
                }
                else
                {
                    printf("\nNumero erroneo. \nIntroduzca de nuevo el número\n");
                break;
                }  
            }
        }
        
        
        //if ((menu == 3) || (menu == 4))//opcion para cuando se eligen IMC o Billetes
        {          
            for (int b = 0 ;b < longitud ;b++) //Comprobamos uno a uno si son numeros
            {
                if ((isdigit(cadena[b]) || (cadena[b]=='.')))
                {
                    printf("Este es el valor que está cogiendo %c\n",cadena[b]);
                    if ((cadena[b]=='.')) //añadimos una excepcion para el acepte el '.', pero no el segundo '.'
                    {
                        if (error <= 0)  
                        {
                            error++;
                        }
                        else
                        {
                             //printf(".excesivo");
                        break; 
                        }  
                    }
                }
                else
                {
                    printf("\nNumero erroneo. \nIntroduzca de nuevo el número\n");
                break;
                }  
            }
        }
 //return("true");       
}
    