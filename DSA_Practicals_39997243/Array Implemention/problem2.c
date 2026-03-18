#include <stdio.h>

//using a loop to read numbers and calculate their sum 
int main() {
  int n, num , sum = 0;

  printf("Enter how many numbers: ");
  scanf("%d", &n);

  for(int i = 0; i < n; i++) {
    printf("Enter number %d: ", i + 1);
    scanf("%d", &num);
    sum += num; //add the number to sum
  }
  printf("Sum of all numbers is: %d\n", sum);

  return 0;
} 