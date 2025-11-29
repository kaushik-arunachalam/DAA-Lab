#include <stdio.h>
int factorial(int N){
  if (N<=1){
    return N;
  }
  else{
    return (N*factorial(N-1));
  }
}
void main(){
  int x;
  printf("Enter the number: ");
  scanf("%d",&x);
  int k = factorial(x);
  printf("Factorial of %d is: %d\n",x , k);
}

/*Space Complexity Calculation
Number of variables = 2
Type of variables = Int
Number of return statements = 2
Total = 2+2
Total Space = 16+4*N Bytes
Change in the space w.r.t the input
therefore Space Complexity = O(N)*/