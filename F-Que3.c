//Print Table by using function ?
#include <stdio.h>
void printTable(int n);
int main(void) {
int n;
  printf("Enter a number :");
  scanf("%d",&n);
  printTable(n); //Argument/Actual parameter
  return 0;
}
void printTable(int n){ //Perameter/Formal parameter
  int i=1;
  for(i=1; i<=10; i++){
    printf("%d\n",i*n);
  }
  }
