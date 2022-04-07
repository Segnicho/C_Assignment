#include <stdio.h>
void main(){
    int num = 5;
    float n = 1.0;
    for (int i = 1; i <= num; i++)
    {
        n = n + (1.0/factorial(i));
 
    }
    printf("%f",n);
}

int factorial(int n)  
{  
  if (n == 0||n ==1 )  
    return 1;
  else
    return(n * factorial(n-1));  
}
