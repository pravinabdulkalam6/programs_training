#include<stdio.h>
void isoddeven(int x)
{
 if (x%2==0)
    {
       printf("%d is even",x); 
    }
    else
    {
        printf("%d is odd",x);
    }
}
void main()
{
    int n;
    scanf("%d",&n);
    isoddeven(n);
    
}