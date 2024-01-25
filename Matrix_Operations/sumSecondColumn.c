#include<stdio.h>
 int n;
void sumSecondColumn(int A[][n]){
    int sum=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
         if(j==1){
            sum+=A[i][j];
         }
        }
    }
    printf("The sum of the second colum is %d\n",sum);
}
int main()
{
   
    printf("Enter the order of your matrix:\n");
    scanf("%d", &n);
    int A[n][n];
    printf("Enter the elements in your matrix:\n");
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%d", &A[i][j]);
        }
    }
    sumSecondColumn(A);
}