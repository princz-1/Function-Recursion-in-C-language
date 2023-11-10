//Use liberary functions to calculate the square of a number given by user in float value?
#include <stdio.h>
#include <math.h>
float square(float n);
int main(void) {
 float n;
 printf("Enter the number of square:");
  scanf("%f",&n);
 square(n);
  
  return 0;
}
float square(float n){
   printf("The square of %f is %f",n,pow(n,2));
}
