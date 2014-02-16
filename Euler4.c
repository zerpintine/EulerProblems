#include <stdio.h>
#include <stdlib.h>
#include <String.h>
#include <stdbool.h>

int main()
{
    int digitNum=1, sizeLimit=1, largestPalindrome = 0, i=0;;
    printf("Enter the number of digits for the palindrome: ");
    scanf("%i", &digitNum);
    for(;i<digitNum; i++){
        sizeLimit=sizeLimit*10;
    }
    int firstNum = sizeLimit/10, digitLim = 2*(digitNum+1);
    for(; firstNum < sizeLimit; firstNum++){
        int secondNum = firstNum;
        for(;secondNum < sizeLimit; secondNum++){
            bool isPalindrome = true;
            int palindromeNum = firstNum*secondNum;
            char palindromeString[digitLim];
            sprintf(palindromeString, "%d", palindromeNum);
            int length = strlen(palindromeString);
            i=0;
            for(;i < length/2; i++){
                if(palindromeString[i]!=palindromeString[length-1-i]){
                    isPalindrome = false;
                }
            }
            if(isPalindrome == true && largestPalindrome < palindromeNum){
                largestPalindrome = palindromeNum;
            }
        }
    }
    printf("\nThe largest palindrome is %d", largestPalindrome);
    return 0;
}
