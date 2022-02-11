/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  float mark1, mark2, average;
  printf("Enter subject 1 marks : ");
  scanf("%f", &mark1);
  
  printf("Enter subject 2 marks : ");
  scanf("%f", &mark2);

  average = (mark1 + mark2) / 2.0;
  printf("Average is : %.2f", average);
  
  return 0;
}

