// Basic for Recursion

#include <stdio.h>
void printHW(int count);
int main(void) {
  printHW(5);
  return 0;
}
//Recursive Functions
void printHW(int count){
  if(count ==0){
    return;
  }
  printf("Hello World\n");
  printHW(count-1);
}
