#include <stdio.h>
#include <stdlib.h>

int ***malloc3d(int y, int x, int z) {
	int i, j;
	int ***t;
	
	t = malloc(y * sizeof(int *));
	
	for (i = 0; i < y; ++i) {
		t[i] = malloc(x * sizeof(int *));
		for (j = 0; j < x; ++j) {
			t[i][j] = malloc(z * sizeof(int));
		}
	}
	
	return t;
}

int main(void) {
	int i, j, k;
	int x = 10;
	int y = 10;
	int z = 10;
	
	int ***t2 = malloc3d(y, x, z);
	for (i = 0; i < y; ++i) {
		for (j = 0; j < x; ++j) {
			for (k = 0; k < x; ++k) {
				t2[i][j][k] = 1;
			}
		}
	}
	printf("3d Success\n");
	
	return 0;
}
