// Addtion of two numbers by using functions ?

#include <stdio.h>
int sum(int a, int b);
int main(void) {
  int a, b, c;
  printf("Enter a number :");
  scanf("%d", &a);
  printf("Enter b number :");
  scanf("%d", &b);
  c = sum(a, b);
  printf("sum is %d", c);
  return 0;
}
int sum(int a, int b) {
  return a + b; 
}
