#include<stdio.h>
int rect_area(int l,int w)
{
     int area;
     area=l*w;
     return area;
}
int main()
{
     int a,b,x;
     printf("Enter Length of Rectangle : ");
     scanf("%d",&a);
     printf("\nEnter Width of Rectangle : ");
     scanf("%d",&b);
     x=rect_area(a,b); // calling function rect_area
     printf("\nArea of Rectangle = %d sq.units",x);
     return 0;
}