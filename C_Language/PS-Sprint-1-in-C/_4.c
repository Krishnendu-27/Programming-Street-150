/*
Calculating Armstrong Numbers
Difficulty: Easy
Topics: Basic Programming, Number Theory
Description: Write a program to check if a number is an Armstrong number.
Example:
Input: number = 153
Output: Armstrong Number
Explanation: 153 is an Armstrong number because 1^3 + 5^3 + 3^3 = 153.
*/

#include <stdio.h>

int main() {
    int num;
    int temp,percen, sum = 0;
 printf("enter the number");
 scanf("%d" , &num); 
    if (num <= 0)
    {
        printf("%d is not a amonstrong number", num);
        return 0;
    }
    temp = num;
    while (num >0 )
{       percen = num %10;
        num = num/10;
        sum = sum + (percen*percen*percen);
    }
    if (temp == sum)
    {
        printf("%d is a amonstrong number", temp);
    }
    else {
        printf("%d is not a amonstrong number", temp);
    }
    
    
  return 0;
}