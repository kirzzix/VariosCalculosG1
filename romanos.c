
#include <stdio.h>

int romanos(int j)){
int resto;
const char*romano [ 3000 ];
romano[ 1 ] = "I";
romano[ 2 ] = "II";
romano[ 3 ] = "III";
romano[ 4 ] = "IV";
romano[ 5 ] = "V";
romano[ 6 ] = "VI";
romano[ 7 ] = "VII";
romano[ 8 ] = "VII";
romano[ 9 ] = "IX";
romano[ 10 ] = "X";
romano[ 20 ] = "XX";
romano[ 30 ] = "XXX";
romano[ 40 ] = "XL";
romano[ 50 ] = "L";
romano[ 60 ] = "LX";
romano[ 70 ] = "LXX";
romano[ 80 ] = "LXXX";
romano[ 90 ] = "XC";
romano[ 100 ] = "C";
romano[ 200 ] = "CC";
romano[ 300 ] = "CCC";
romano[ 400 ] = "CD";
romano[ 500 ] = "D";
romano[ 600 ] = "DC";
romano[ 700 ] = "DCC";
romano[ 800 ] = "DCC";
romano[ 900 ] = "CM";
romano[ 1000 ] = "M";
romano[ 2000 ] = "MM";
romano[ 3000 ] = "MMM";

//printf("Indique el numero a transformar\n");
//scanf("%i", &numero);
//valor = numerio / 1;

   printf ("El numero en romano es ");

    if ( j >= 1000 ){
        resto = j / 1000;
        j = j - (resto * 1000);
        resto = resto * 1000;
        printf(romano[resto]);
    }

    if (j >= 100) 
    {
        resto = j / 100;
        j = j - resto * 100;
        resto = resto * 100;
        printf(romano[resto]);
    }

    if (j >= 10) {
        resto = j / 10;
        j = j - resto * 10;
        resto = resto * 10;
        printf(romano[resto]);
    }

    if ((j < 10) && (j > 0)) {
        resto = *j;
        printf(romano[resto]);
    }

//printf ("%s",romano[resto]);


return 0;
}