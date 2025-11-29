#include <stdio.h>
void main(){
  int x;
  printf("Enter the number of terms: ");
  scanf("%d",&x);
  int a=0 , b=1 , c=0;
  for (int i=0 ; i<=x; i++){
    printf("%d",a);
    c=a+b;
    a=b;
    b=c;
  }
}
