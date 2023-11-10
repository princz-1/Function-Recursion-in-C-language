// Write a function to convert celsius to fahrenheit for recursion function ?
#include <stdio.h>
float convertTem(float celsius);
int main(void) {
 float far = convertTem(37);
  printf("The tmeperature in fahrenheit is : %f",far);
  return 0;
}
float convertTem(float celsius){
  float far = celsius * (9.0/5.0) + 32;
  return far;
} 
