#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>



int main()
{
    int numPrimes = 11000;
    int primeIWant = 10001;
    int primesList[numPrimes];
    int i, j;
    primesList[0]=2;
    for(i=1; i < numPrimes; i++){
        primesList[i]=0;
    }
    int primesFound = 1;
    for(i=3;primesFound < numPrimes;i++){
        bool isPrime = true;
        for(j=0; j < primesFound; j++){
            if(i%primesList[j]==0){
                isPrime=false;
                break;
            }
        }
        if(isPrime==true){
            primesList[primesFound]=i;
            primesFound++;
        }
    }
    printf("prime number %d is %d", primeIWant, primesList[primeIWant-1]);
    return 0;
}
