// C program to multiply two matrices
#include <stdio.h>

int main()
{
    int R1=2,C1=2,R2=2,C2=2; //2 rows 2 column
	int m1[2][2] = { { 1, 0 }, { 2, 4 } };
	int m2[2][2] = { { 6, 8 }, { 4, 2 } };

    int result[R1][C2];

	printf("Resultant Matrix is:\n");

	for (int i = 0; i < R1; i++) {
		for (int j = 0; j < C2; j++) {
			result[i][j] = 0;

			for (int k = 0; k < R2; k++) {
				result[i][j] = result[i][j] + m1[i][k] * m2[k][j];
			}

			printf("%d\t", result[i][j]);
		}

		printf("\n");
	}

	return 0;
}
