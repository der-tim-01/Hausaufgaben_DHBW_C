#include <stdio.h>

//HAO6 Jan Brudermüller und Tim Schierle

int main(){

printf("Multiple Choice\n\n");

printf("Antwort a): 2\n");
printf("Antwort b): 3\n");
printf("Antwort c): 3\n");
printf("Antwort d): 3\n");
printf("Antwort e): 3\n"); // JW 2020-06-15 this is 4.
printf("Antwort f): 2\n");

printf("\nBasics\n\n");
int i = 533;
while( i > -12){
    printf("%d textbackslash \n", i);
    i -=7;
}

int arr[5] = {1,3,5,7,9};
int* ptr = arr + 2;
ptr[1] = 0;

printf("Pointer nach Ausfuehrung: {%d,%d,%d,%d,%d}\n",arr[0],arr[1],arr[2],arr[3],arr[4]);


}
/*
JW 2020-06-15:
> well done (10/10)
> e -> 4: -1Pkt
> nice programm for homework submission guys :-) +1Pkt
*/