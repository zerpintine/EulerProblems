#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>



int main()
{
    int numPrimes = 150000; //approx 2mil/ln(2mil)
    int highestPrime = 2000000;
    int primesList[numPrimes];
    int i, j;
    primesList[0]=2;
    int primesFound = 1;
    unsigned long long primeSum = 2;
    for(i=3;primesFound < numPrimes && i< highestPrime;i++){
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
            primeSum = primeSum + i;
        }
    }
    printf("sum of primes from 1 to 20000000 is %llu\n", primeSum);
    return 0;
}
