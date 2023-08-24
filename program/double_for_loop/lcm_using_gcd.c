#include<stdio.h>
void main()
{
    int i,min,lcm,hcf,n1,n2;
    scanf("%d%d",&n1,&n2);
    min=n1;
    if(min>n2)
    min=n2;
    for(i=min;i>0;i--)
    {
        if(n1%i==0 && n2%i==0)
        {
            hcf=i;
            break;
        }
    }
    lcm=n1*n2/hcf;
    printf("%d",lcm);
}