#include <stdio.h>
void main(){
  int x;
  printf("Enter the number: ");
  scanf("%d",&x);
  int sum = 0;
  for (int i = 1 ; i<=x ; i++){
    sum+=(i*i);
  }
  printf("Sum of the squares of first %d natural numbers is %d\n",x,sum);
}

/*
Space complexity calculation :
space of integer = 4 bytes
number of integer variables = 2
=> 2*4 = 8 bytes
Total space = 8 bytes throughout
Space Complexity = O(1)
*/

