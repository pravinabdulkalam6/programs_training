#include<stdio.h>
int sum;
int isAdd(int a,int b)
{
    sum=a+b;
   return sum;
}
void main()
{
 int x,y,val;
scanf("%d%d",&x,&y);
val=isAdd(x,y);
 printf("%d",val);
}