#include <stdio.h>
int max(int a, int b){
    if (a > b){
        return a;
    }
    else{
        return b;

    }
}
int min(int c, int d){
    if (c < d){
        return c;
    }
    else{
        return d;

    }
}
void main()
{   int maax1, maax2;
    int a, b,c,d;
    printf("enter the four numbers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    maax1 = max(a, b);
    maax2 = max(c,d);
    int max_both = max(maax1, maax2);
    int min1 = min(a, b);
    int min2 = min(c,d);
    int min_both = min(min1, min2);
    printf("Largest: %d", max_both);
    printf("\nSmallest: %d", min_both);
}