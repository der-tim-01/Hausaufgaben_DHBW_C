/*
Imaginaerer Taschenrechner
von Jan Brudermueller und Tim Schierle
Datum: 17.05.2020
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "functions.h" 



int main(){
// variablen und Konstanten
char eingabe[50];
char zahl1[20];
char zahl2[20];
char teil[20];
char teil2[20];
char copy[50];
char operator[1];

//pointer um Stellen zu bestimmen
char *ptr;
char *ptr1;
char *ptr2;
char *ptr3;

char plus[] = "+";
char minus[] = "-";
char mal[] = "*";
char durch[] = "/";


//endlos schleife bis abbruch
int abbruch = 0;
while(abbruch == 0){

    
    system("cls");
    printf("-----Komplexer Taschenrechner-----\n");
    printf("Rechnung: (fuer Hilfe ? druecken / beenden mit q und mit Enter bestaetigen)\n");
    //eingabe einlesen
    fflush(stdin);
    scanf("%s", &eingabe[0]);

    if(eingabe[0] == 63){
        printf("Geben Sie eine gewuenschte Rechnung nach diesem Schema ein:\n(a+bi)+(c+di)\n\nFolgende Rechnungen sind moeglich:\n+ - * / --> zwischen den Klammern gewuenschten Operator waehlen\n\n\n");
        
    }else if(eingabe[0] == 113){
        abbruch = 1;
        printf("Programm beendet");
        break;
    } else {
        // Eingabe in Teile filtern
        printf("Eingabe: %s\n", eingabe);
        strcpy(copy, eingabe);
        copy[sizeof(eingabe)]='\0';

        ptr = strtok(eingabe, "()");
        strcpy(zahl1, ptr);
    
        ptr = strtok(NULL, "()");
        ptr = strtok(NULL, "()");
        strcpy(zahl2, ptr);
        

        ptr3 = strtok(copy, "()");
        ptr3 = strtok(NULL, "()");
        strcpy(operator, ptr3);
        operator[sizeof(ptr3)]='\0';
        

        //zahlen aufteilen in Im und Re
        strcpy(teil, zahl1);
        strcpy(teil2, zahl2);
        zahl zahleins;
        zahl zahlzwei;

        ptr1 = strtok(teil, "+");
        zahleins.re = atof(ptr1);
        ptr1 = strtok(NULL, "i");
        zahleins.im = atof(ptr1);

        ptr2 = strtok(teil2, "+");
        zahlzwei.re = atof(ptr2);
        ptr2 = strtok(NULL, "i");
        zahlzwei.im = atof(ptr2);

        //printf("\n\nzahl1: %s, zahl2: %s operator:  %s\n %lf, %lf\n %lf %lf\n\n", zahl1, zahl2, operator, zahleins.re, zahleins.im, zahlzwei.re, zahlzwei.im);

        // operator vergleich
        if (strcmp(operator, plus) == 0){
            add(zahleins.re, zahleins.im, zahlzwei.re, zahlzwei.im);
        }
        if (strcmp(operator, minus) == 0){
            sub(zahleins.re, zahleins.im, zahlzwei.re, zahlzwei.im);
        }
        if (strcmp(operator, mal) == 0){
            mul(zahleins.re, zahleins.im, zahlzwei.re, zahlzwei.im);
        }
        if (strcmp(operator, durch) == 0){
            divi(zahleins.re, zahleins.im, zahlzwei.re, zahlzwei.im);
        }


        

    }


printf("Enter druecken um fortzufahren\n");
        getchar();
        getchar();
}
}



