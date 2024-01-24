#include<stdio.h>
int main()
{
    int n;
    printf("Enter the order of the matrics:\n");
    scanf("%d", &n);
    int M1[n][n],M2[n][n],M3[n][n];
    printf("Enter the elements of the first matrix\n");
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%d", &M1[i][j]);
        }
    }
    printf("Enter the values of the second matrix:\n");
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%d", &M2[i][j]);
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            M3[i][j]=M1[i][j]+M2[i][j];
        }
    }    
    printf("The Values of the added matrix:\n");
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("%d \t", M3[i][j]);
        }
        printf("\n");
    }
}