#include <stdio.h>

void main(){
    int grade;
    printf("Enter the number grade:");
    scanf("%d", &grade);
    int grades = grade/10;
    switch (grades)
    {
    case 9:
        printf("Letter Grade: A");
        break;
    case 8:
        printf("Letter Grade: B");
        break;
    case 7:
        printf("Letter Grade: C");
        break;
    case 6:
        printf("Letter Grade: D");
        break;
    case 5: case 4: case 3: case 2: case 1: case 0:
        printf("Letter Grade: F");
        break;
    
    default:
        printf("please enter number between 0 and 100");
        break;
    }
}