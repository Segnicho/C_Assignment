#include <stdio.h>
void main(){
 int m1, m2,d1,d2,y1,y2;
    printf("enter  first date (MM/DD/YY):");
    scanf("%d/%d/%d",&m1,&d1,&y1);
    printf("Enter second date(MM/DD/YY):");
    scanf("%d/%d/%d",&m2,&d2,&y2);
 if (y1<y2 ||(y1==y2&&m1<m2)||((y1==y2 && m1 ==m2)&&(d1<m2)))
 {
     printf("%d/%d/%d is earlier than %d/%d/%d",m1,d1,y1,m2,d2,y2);
 }
 else{
     printf("%d/%d/%d is earlier than %d/%d/%d",m2,d2,y2,m1,d1,y1);
 }
}