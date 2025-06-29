/* 1. 
Determining Even/Odd Numbers
Difficulty: Easy
Topics: Basic Programming
Description: Write a program to check whether a number is even or odd.
Example:
Input: number = 4
Output: Even
Explanation: Since 4 is divisible by 2, it is an even number.
*/

#include <stdio.h>
int main (){
    printf("enter a number: ");
    int num ;
    scanf("%d", &num);
    if (num % 2 ==0) {
        printf("%d is a EVEN number\n", num);
   }     else {
        printf("%d is a ODD number\n", num);
   }
}