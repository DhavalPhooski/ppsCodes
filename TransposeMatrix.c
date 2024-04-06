#include<stdio.h>
int main(){
    int n,m,i,j,k;
    printf("Enter the value of 'n' of your nXm matrix : ");
    scanf("%d",&n);
    printf("Enter the value of 'm' of your nXm matrix : ");
    scanf("%d",&m);
    int matrix[n][m];
    int transpose[m][n]; //Creating traspose matrix

    //scanning matrix
    printf("Enter the values of your matrix's Elements :\n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    //transpose logic 
    for(i=0;i<n;i++){
        for(j=0;  j<m;  j++){
            transpose[j][i] = matrix[i][j];
        }
    }
    //printing matrix
    printf("Transpose of this is : \n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d ",transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}