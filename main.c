//Function Basic code 
#include <stdio.h>
void printhw(); // Functions declaration / prototype
void goodbye();
int main(void) {

  printhw(); // Functions calling
  goodbye();
}
void printhw() { // Functions defination
  printf("Hello World\n");
  printf("my name is prince panchal\n");
}
void goodbye() {
  printf("Good bye"); 
}

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
