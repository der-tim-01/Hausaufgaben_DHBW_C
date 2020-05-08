// Datum: 08.05.2020
// Autoren: Jan Brudermüller, Tim Schierle

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double function(double x) {
	double y = 0;
	y = pow((x - 3), 2);
	return y;
}

double ableitung(double x) {
	double y = 0;
	y = 2 * (x - 3);
	return y;

}


int main() {

	double xn = 5;  //Startwert für x
	
	double xo = 5;

	double f = 5;

	double a = 0;

	int zaehler = 0;

	double* speicher = malloc(sizeof(double));

	while (f > 0.000000000001 || f < -0.000000000001) {
		f = function(xn);

		a = ableitung(xn);
	
		xo = xn - (f / a);
		
		speicher = malloc(sizeof(double)*(zaehler));
		speicher[zaehler] = xo;

		xn = xo;

		printf("%d. Annaeherung: %lf\n",zaehler, speicher[zaehler]);

		zaehler += 1;
	}

	printf("\n\n\nNullstelle bei: %.5lf\n", xn);

}