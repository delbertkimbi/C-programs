#include<stdio.h>
#include<stdlib.h>
void Swap(int *a, int *b){
    int temp;
    temp = *a;
    *a=*b;
    *b=temp;
    printf("Swapped values are %d, %d\n",*a,*b);
}
int main()
{
    int *A;
    int num;
    printf("Enter the number of spaces\n");
    scanf("%d", &num);
    A=malloc(num*sizeof(int));
    printf("Enter %d numbers\n:",num);
    for(int i=0; i<num; i++){
        scanf("%d", &A[i]);
    }
    for(int i=0; i<num; i++){
        printf("A[%d]=%d\n",i,A[i]);
    }
    Swap(A[0],A[num-1]);
    return 0;
}