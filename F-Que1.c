//Write a function that prints Namaste if user is Indian and Bonjour if the user is French ? 
#include<stdio.h>
void namaste();
void bonjour();
int main(void){
  char ch;
  printf("Enter i for indian and f for french :");
  scanf("%c",&ch);

  if(ch == 'i'){
    namaste();
  }
  else{
    bonjour();
  }
  return 0;
}
void namaste(){
  printf("Namaste");
}
void bonjour(){
  printf("Bonjour");
}
