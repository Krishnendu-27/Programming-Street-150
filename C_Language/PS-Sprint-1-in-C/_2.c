/*
Checking for Prime Numbers
Difficulty: Easy
Topics: Basic Programming, Number Theory
Description: Write a program to determine if a number is prime.
Example:
Input: number = 7
Output: Prime
Explanation: 7 has no divisors other than 1 and itself, so it is a prime number
*/

#include <stdio.h>

int main() {
  int isPrime = 1; 
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
  if (num <= 1) {
      printf("%d is not a prime number.\n", num);
        return 0;
  }
  
  for (int i = 2; i <= num/2; i++)
  {
   if (num % i ==0)
   {
   isPrime = 0; 
   break; 
  }
  }
  if (isPrime == 1)
  {
    printf("%d is a prime number ", num);
  }
  else {
    printf("%d is a not prime number", num);
  }
  
  return 0;
}