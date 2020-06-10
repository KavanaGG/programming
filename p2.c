// leap year or not
#include<stdio.h>
void main()
{
int yr;
printf("enter a year\n");
scanf("%d",&yr);
if( (yr%4==0) || (yr%400==0))
printf("leap year");
else if (yr%100==0)
printf("not a leap yr");
else
printf("not a leap yr");
}
