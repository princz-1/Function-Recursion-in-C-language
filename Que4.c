//Calulateprice and add GST
#include <stdio.h>
void calculatePrice(float value);
int main(void) {
float value;
  printf("Enter your price :");
  scanf("%f",&value);
  calculatePrice(value);
  printf("Value is : %f\n",value);
  
  return 0;
}

void calculatePrice(float value){
  value = value + (0.18 * value);
  printf("The final price is: %f\n", value);
}
  
