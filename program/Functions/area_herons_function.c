#include<stdio.h>
#include<math.h>
double area;
int isareatriangle()
{
int a,b,c;
double val,s;
scanf("%d%d%d",&a,&b,&c);
area=sqrt(s*(s-a)*(s-b)*(s-c));
return area;
}
void main()
{
    isareatriangle();
    printf("%lf",area);
}