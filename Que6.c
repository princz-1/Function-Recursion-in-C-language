//Write a functions to calculate area of a Square, a Circle, a Rectangle ?
#include <stdio.h>
float squareArea(float side);
float circleArea(float radius);
float rectangleArea(float a,float b);
int main(void) {
  float side = 50.0;
  float radius = 8.0;
  float a = 5.0;
  float b = 10.0;
  printf("Area of a square :%f\n",squareArea(side));
  printf("Area of a circle :%f\n",circleArea(radius));
  printf("Area of a rectangle :%f\n",rectangleArea(a,b));
  
  
  return 0;
}
float squareArea(float side){
return side *side;
}
float circleArea(float radius){
  return 3.14 * radius * radius;
}
float rectangleArea(float a, float b){
  return a * b;
}
