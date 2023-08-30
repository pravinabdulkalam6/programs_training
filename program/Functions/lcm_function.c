#include<stdio.h>
void main()
{
    int i,n1,n2,max;
    scanf("%d%d",&n1,&n2);
    max=n1;
    if(max<n2)
    max=n2;
    for(i=max;i>0;i--)
    {
        if(n1%i==0 && n2%i==0)
        printf("%d",i);
        break;
    }
}