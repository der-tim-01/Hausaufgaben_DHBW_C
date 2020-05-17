#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


void ausgabe(double re,double im){

    int format = 0;

    printf("In welcher Form moechten Sie das Ergebnis ausgegeben haben:\n[1] Kartesisch: a+bi\n[2] In Euler Darstellung: r * e^(i * q)\n[3] In Polarkoordinaten Form: r * cos( ) + r * i sin( )\n");
    scanf("%d",&format);
    printf("\n***********************************************************\n\n");

    double r = 0;
    double phi = 0;
    r = hypot(re,im);
    phi = atan(im/re);

    if (format == 1) printf("Ausgabe in kartesischer Darstellung: %.2lf+%.2lfi\n\n",re,im);
    else if (format == 2) printf("Ausgabe in Euler Darstellung: %.2lf * e^%.2lfi %.2lf\n\n",r,im,phi); 
    else if (format == 3) printf("Ausgabe in Polarkoordinaten Darstellung: %.2lf * cos(%.2lf) + %.2lf isin(%.2lf)\n\n",r,phi,r,phi); 
    else printf("Error\n\n");
    

}

void add(double rx,double ix, double ry, double iy){
     double reerg = rx + ry;
     double imerg = ix + iy;
     ausgabe(reerg,imerg);
}

void sub(double rx,double ix, double ry, double iy){
     double reerg = rx - ry;
     double imerg = ix - iy;
     ausgabe(reerg,imerg);
}

void mul(double rx,double ix, double ry, double iy){
     double reerg = (rx * ry) - (ix * iy);
     double imerg = (rx * iy) + (ry * ix);
     ausgabe(reerg,imerg); 
}

void divi(double rx,double ix, double ry, double iy){
     double reerg = ((rx * ry)+(ix * iy))/(pow(ry, 2)+pow(iy, 2));
     double imerg = ((-rx * iy)+(ix * ry))/(pow(ry, 2)+pow(iy, 2));
     ausgabe(reerg,imerg);
}
