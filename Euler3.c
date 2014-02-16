#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned long long bigNum = 600851475143;
    unsigned long long largestFactor = bigNum;
    printf("The factors are:\n");
    int i = 2, j=0;
    for(; i <= bigNum; i++){
        if(bigNum%i==0){
            bigNum=bigNum/i;
            largestFactor = i;
            printf("%d\n", i);
        }
        while(bigNum%i==0){
            bigNum = bigNum/i;
        }
    }
    printf("\nLargest factor is %d\n", largestFactor);
    return 0;
}
