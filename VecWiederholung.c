#include <stdio.h>
#include <stdlib.h>

int main() {

	int len = 5;
	int row = 5;

	int **vec = malloc(sizeof(int) * row);

	for (int i = 0; i < row; i++) {
		 vec[i] = malloc(sizeof(int) * len);
	}
	

	for (int j = 0; j < row; j++) {
		for (int i = 0; i < len; i++) {
			printf("% d", vec[j][i]);

		}
		printf("\n");
	}

	return 0;
}