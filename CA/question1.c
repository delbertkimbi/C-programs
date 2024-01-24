#include<stdio.h>
int main(){
    int n;
    printf("How namy elements do you want to enter:\n");
    scanf("%d",&n);
    int A[n],B[n];
    printf("Enter the numbers of the array:\n");
    for(int i=0; i<n; i++){
       scanf("%d",&A[i]);
       B[i]=0;
    }
    for(int i=0; i<n; i++){
        int count=0;
        for(int j=0;  j<n; j++){
           if(A[i]==B[j]){
              count++;
           }
        }
        if(count==0){
            B[i]=A[i];
        }
    }
    printf("The values of the new array without repeatition:\n");
    for(int i=0; i<n; i++){
       if(B[i]!=0){
           printf("%d  \t", B[i]);
       }
    }
    printf("\n\n");
} 