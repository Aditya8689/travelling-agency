int add(int a, int b)
{
  int sum=a+b;
  printf("%d",sum);
  return sum;
}

#include <stdio.h>

int main(){
  int a,b;
  printf("Enter a:");
  scanf("%d",&a);
  printf("Enter b:");
  scanf("%d",&b);
  int sum= add(a,b);
  
}