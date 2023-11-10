//Write a function to calculate Percantage of a student from marks in Science,Maths&Sanskrit ?
#include <stdio.h>
float calcPercantage(float  science,float maths,float sanskrit);
int main(void) {
 float science = 95;
float maths = 96;
  float sanskrit = 97;
  printf("percentage is  :%f",calcPercantage(science,maths,sanskrit));
  
  return 0;
}
float calcPercantage(float science,float maths,float sanskrit){
  float total = ((science + maths + sanskrit)/3);
  return total;
}
