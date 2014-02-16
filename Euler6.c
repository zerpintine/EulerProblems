#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>



int main()
{
    int lowerBound = 1, upperBound = 20;
    int lowerSum = ((lowerBound)*(lowerBound-1))/2;
    int upperSum = ((upperBound)*(upperBound+1))/2 - lowerSum;
    upperSum = upperSum*upperSum;
    int lowerSumSquares = ((lowerBound-1)*(lowerBound)*(2*lowerBound-1))/6;
    int upperSumSquares = ((upperBound)*(upperBound+1)*(2*upperBound+1))/6 - lowerSumSquares;
    int sumDifference;
    if(upperSum > upperSumSquares){
        sumDifference = upperSum - upperSumSquares;
    }else{
        sumDifference = upperSumSquares - upperSum;
    }
    printf("The square of the sum of the integers from %d to %d is %d\n", lowerBound, upperBound, upperSum);
    printf("The sum of the squares of integers from %d to %d is %d\n", lowerBound, upperBound, upperSumSquares);
    printf("The difference between these two sums is %d", sumDifference);
    return 0;
}
