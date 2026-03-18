#include <stdio.h>

//using an array to read numbers and calculate their sum 
int main() {
    int n;
    int sum = 0;

    printf("Enter the amount of numbers: ");
    scanf("%d", &n);  

    int arr[n];

    printf("Enter %d numbers:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < n; i++) {
        sum += arr[i]; //add each element to sum
    } 
    printf("Sum of all numbers is: %d\n", sum);
    
    return 0; 
}