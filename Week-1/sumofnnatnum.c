#include <stdio.h>
int sumofNnatnum(int x){
  int sum = 0;
  for (int i = 1 ; i<=x ; i++){
    sum+=i;
  }
  return sum;
}
void main(){
  int x;
  printf("Enter the number: ");
  scanf("%d",&x);
  int k = sumofNnatnum(x);
  printf("Sum of the first %d natural numbers is %d\n",x,k);
}

/*Space Complexity Calculation
Number of variables = 3
Type of variables = Int
Number of return statements = 1
Total = 3+1
Total Space = 4*4=16bytes
No change in the space w.r.t the input
therefore Space Complexity = O(1)*/