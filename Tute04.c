/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>
int minimum(int x,int y);
int maximum(int x,int y);
int multiply(int x,int y);

int main() {
   int no1, no2;
   printf("Enter a value for no 1 : ");
   scanf("%d", &no1);
   printf("Enter a value for no 2 : ");
   scanf("%d", &no2);
   printf("\nMinimum value :%d \n", minimum(no1, no2));
   printf("Maximum value :%d \n", maximum(no1, no2));
   printf("Multiply of two value :%d \n", multiply(no1, no2));
   return 0;
}

int minimum(int x,int y){
  int minimum;
  if(x<y){
    minimum=x;
  }
  else if(x>y){
    minimum=y;
  }
  return minimum;
}

int maximum(int x,int y){
  int maximum;
  if(x<y){
    maximum=y;
  }
  else if(x>y){
    maximum=x;
  }
  return maximum;
}

int multiply(int x, int y){
  int multiply;
  multiply=x*y;

  return multiply;
}
