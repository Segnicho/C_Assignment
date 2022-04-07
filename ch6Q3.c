#include <stdio.h>
void main(){

int num1, num2, gcd, i = 1;
printf("Enter  numerator folowed by denumerator: ");
scanf("%d/%d",&num1, &num2);
 while (i<=num1 && i <= num2)
 {
     if (num1%i ==0 && num2%i == 0)
     {
    gcd = i;
     }
    i++;
 }
 int numerator = num1/gcd;
 int denumerator = num2/gcd;
printf("In lowest term: %d/%d",numerator, denumerator);
}