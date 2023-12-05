/**GCE 2022: Prime numbers from 1 to N  
 Using the Eratosthenes theorem(Sieve of Eratosthenes).**/
/**programmer: NYUH DELBERT KIMBI**/
/**date: 05/12/2022 (modified) **/

#include<stdio.h>
#include<math.h>
/// The function initiazes the array elements with with their index value plus 1, and 0 with zero
void initialise(int tab[],int n)
{
    for(int i=0; i<n; i++){
       tab[i]=i+1;
    }
    tab[0]=0;
} 

/// A function that takes a number x and verifies if it is prime or not.
int verifyPrime(int x)
{
    for(int i=2; i<=x/2; i++){            //alternatively use--- for(i=2; i<=ceil(sqrt(x); i++)
        if(x%i==0)                        //factors of a number will only range from 1 to square root of number
            return 0;                     // When ever a function returns, it stops.
    }
    return 1;                             // when the number is prime
}

/// The function takes a prime number and sets all of it's multiples to zero(Sieve of Eratosthenes)
int setzero(int tab[],int n,int y)
{
    for(int i=y+1; i<n; i++){
        if(tab[i]%y==0){
            tab[i]=0;
        }
    }
}
/// Used to print out all prime numbers in a range computed by the other functions
void doDisplay(int tab[],int n)
{
    printf("The prime numbers are:\n");
    for(int i=0; i<n; i++){
        if(tab[i]!=0)
            printf("\t%d\n",tab[i]);
    }
}

int main()
{
    int N,i,Table[100];
    float rootN;
    printf("Enter a number less than 100 to get all prime numbers between 1 and that number:");
    scanf("%d",&N);
    rootN=round(sqrt(N));        
    initialise(Table,N);
    for(i=2; i<=rootN; i++){
        if(verifyPrime(i)==1){
            setzero(Table,N,i);
        }
    }
    doDisplay(Table,N);
    return 0;
}
