//Write a program to add two user input numbers using one function.

#include<stdio.h>

int main() {
   int a, b, sum;

   printf("\nEnter number: ");
   scanf("%d ", &a);
   printf("\nEnter number: ");
   scanf("%d ",&b);
   sum = a + b;

   printf("Sum : %d", sum);

   return(0);
}
