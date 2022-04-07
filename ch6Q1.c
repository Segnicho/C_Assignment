#include <stdio.h>
void main(){
    float num, large;
    printf("Enter the number: ");
    scanf("%f",&large);
    while (large > 0)
    {
        printf("Enter  number: ");
        scanf("%f", &num);
    if (num >= large) {
        large = num;
      }
      if (num<=0) {
          break;
      }
    }
    printf("The largest number entered was: %f", large);
}