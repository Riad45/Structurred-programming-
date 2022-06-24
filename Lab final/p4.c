#include<stdio.h>

int main(){
  int n, i, temp, rem, sum=0, reverse=0;
  printf("Enter a seven digit number: ");
  scanf("%d", &n);
  temp = n;
  while(temp!=0){
    rem = temp%10;
    reverse = reverse * 10 + rem;
    temp/=10;
  }
  temp = n;
  while(temp!=0){
    rem = temp%10;
    sum = sum + rem;
    temp/=10;
  }
  printf("After reverse: %d\n", reverse);
  printf("Sum of those number: %d\n", sum);
  return 0;
}