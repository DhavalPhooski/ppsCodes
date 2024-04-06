
// C program to multiply two matrices
#include <stdio.h>

int main()
{
    int n,i,j,k;
    printf("Enter your value of n of your nXn matrix : ");
    scanf("%d",&n);
    int R1=n,C1=n,R2=n,C2=n; //2 rows 2 column
	int m1[n][n] ;
	int m2[n][n] ;
    //------------------------------------------------------------------------------------------
    //scanning for m1
    printf("Enter your elements in m1 : ");
    for(i = 0; i<n ; i++){
        for(j = 0; j<n ; j++){
            scanf("%d",&m1[i][j]);   
        }
    }
    //----------------------------------------------------------------------------------------------------
    //scanning for m2
    printf("Enter your elements in m2 : ");
    for(i = 0; i<n ; i++){
        for(j = 0; j<n ; j++){
            scanf("%d",&m2[i][j]);   
        }
    }

    //-------------------------------------------------------------------------------------------------
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


