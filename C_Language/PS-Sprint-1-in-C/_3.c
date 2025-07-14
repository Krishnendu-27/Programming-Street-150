/*
Validating Leap Years
Difficulty: Easy
Topics: Basic Programming, Date Handling
Description: Write a program to check if a given year is a leap year.
Example:
Input: year = 2020
Output: Leap Year
Explanation: 2020 is divisible by 4 but not by 100, or it is divisible by 400, so it is a leap year.
*/
#include <stdio.h>

int main() {
  int year;
  printf("enter the year: ");
  scanf("%d", &year );
  if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
  {
    printf("%d is a leap year\n", year);
    }
else {
    printf("%d is not leap year\n", year);
}
  return 0;
}