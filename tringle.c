#include<stdio.h>
int main()
{
    int a,b,c;
    printf("value of a:");
    scanf("%d",&a);
    printf("value of b:");
    scanf("%d",&b);
    printf("value of c:");
    scanf("%d",&c);
    
    if(a==b && b==c)
    {
        printf("equilateral triangle");
    }
    else if(a==b || b==c || a==c)
    {
        printf("isosceles triangle");
    }
    else 
    {
        printf("scalene triangle");
    }

}