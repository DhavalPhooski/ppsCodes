//Write a program to compute row - wise sum of 2-D Array and then store row-wise sum into 1-D array.
#include<stdio.h>
int main(){
    
    int n,m,i,j,index=0;
    
    printf("Enter the value of n in nXm matrix : ");
    scanf("%d",&n);
    printf("Enter the value of m in nXm matrix : ");
    scanf("%d",&m);
    int matrix[n][m]; //n = rows and m = column
    int Sum[n];

    //scanning matrix
    printf("Enter the values of your matrix's Elements :\n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&matrix[i][j]);
        }
    }

    //Addition of rows element
    for(i=0;i<n;i++){
        Sum[i] = 0;
        for(j=0;j<m;j++){
            Sum[i] = Sum[i] + matrix[i][j];
        }    
        
    }

    //printing matrix
    printf("1D sum of each rows of this is : \n");
    for(i=0;i<n;i++){
        printf("%d ",Sum[i]);
    }
}