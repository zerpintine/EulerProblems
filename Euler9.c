#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
   int firstNum, secondNum, thirdNum;
   bool flag = false;
   for(firstNum = 1; firstNum<500 && flag == false; firstNum++){
      for(secondNum=firstNum+1; secondNum<500 && flag==false; secondNum++){
        if((firstNum*secondNum)%1000==0){
            thirdNum=500-(firstNum*secondNum)/1000;
            if((firstNum*firstNum)+(secondNum*secondNum) == (thirdNum*thirdNum)
                && firstNum + secondNum + thirdNum == 1000){
                flag = true;
            }
        }
      }
   }
   printf("%i + %i + %i = 1000\n", firstNum, secondNum, thirdNum);
   printf("%i + %i = %i\n", firstNum*firstNum, secondNum*secondNum, thirdNum*thirdNum);
   printf("%i, %i, and %i form a pythagorean triplet\n", firstNum, secondNum, thirdNum);
   return 0;
}
