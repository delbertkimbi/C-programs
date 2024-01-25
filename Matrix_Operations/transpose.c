#include<stdio.h>
int main()
{
 int n;
 printf("Enter the order of your matix:\n");
 scanf("%d",&n);
 int A[n][n], B[n][n];
 printf("Enter the values your matrix:\n");
 for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
        scanf("%d",&A[i][j]);
    }
 }
 // Finding the transposed 
   for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
        B[i][j]=A[j][i];       // The main line...
    }
  }
  // Printing the new matrix
 for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
        printf("%d ", B[i][j]);      
    }
    printf("\n");
  }
}
