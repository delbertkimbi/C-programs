/**GCE 2016:Sorting and  recursive factorial**/
/**programmer: NYUH DELBERT KIMBI**/
/**date : 9/01/2023**/


/**Task 1 => Sorting**/
#include<stdio.h>
int main()
{
    int n, table[1000],c,d,t;
    printf("Enter the number of elements to be stored:\n");
    scanf("%d",&n);
    printf("Enter %d elements:\n",n);
    for(c=0; c<n; c++){
        scanf("%d",&table[c]);
    }
    for(c=0; c<n; c++){
        d=c;
        while(d!=0 && table[d]<table[d-1]){
            t=table[d];
            table[d]=table[d-1];
            table[d-1]=t;
            d--;
        }
    }
    for(c=0; c<n; c++){
        printf("\t%d\n",table[c]);
    }
    return 0;
}


/**Task 2 =>Recursive factorial**/
/*#include<stdio.h>
int factorial(int n)
{
    if(n==0){
        return 1;
    }
    else{
        if(n==1)
            return 1;
        else
            return n*factorial(n-1);
    }
}
int main()
{
    int num,fact;
    printf("Enter a number to calculate it's factorial:\n");
    scanf("%d",&num);
    fact=factorial(num);
    printf("%d!=%d",num,fact);
    return 0;
}*/


