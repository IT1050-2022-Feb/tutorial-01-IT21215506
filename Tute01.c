/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {

 
 float mark1,mark2;
 float tot,avg;

//user inputs
 printf("Input the mark of subject 1- ");
 scanf("%f",&mark1);

 printf("\nInput the mark of subject 2- ");
 scanf("%f",&mark2);

 tot=mark1+mark2;//calculating the total
 avg=tot/2;//calculating the average

//prinying the average
 printf("\nAverage marks of subjects- %2.f",avg);
  
  return 0;
}
