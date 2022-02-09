/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main() {

  float num;
  int i=0;
  int sum=0;

  printf("input the number- ");
  scanf("%f",&num);

  printf("sum =");
  for(i=1; i<=num; i++){

   	sum+=i;
   	
   	printf("%d",i);
   
   	for(int j=1; j<num; j++);
   	
   	printf("+");
 }

	printf("=%d",sum);

 return 0;
}


