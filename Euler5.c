#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


//modified euler's 5, checks lcm for range of numbers
bool isPrime(int num){
    int i = 2;
    bool prime = true;
    for(i; i<num; i++){
        if(num%i == 0){
            prime = false;
            break;
        }
    }
    return prime;
}

int main()
{
    int lowerBound = 5, upperBound = 8, lcm=1;
    int i;
    for(i=1; i<=upperBound; i++){
        if(isPrime(i)==true){
            int tmp = i;
            if(tmp*tmp!=1){
                while(tmp*i<=upperBound && upperBound -(upperBound)%(tmp*i)>=lowerBound){
                    tmp=tmp*i;
                }
            }
            lcm = lcm * tmp;
        }
    }
    printf("The least common multiple of the numbers"
            " between %d and %d is %d", lowerBound, upperBound, lcm);
}
